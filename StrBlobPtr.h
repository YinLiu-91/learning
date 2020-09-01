#pragma once
#include<memory>
#include<string>
#include<vector>
#include"StrBlob.h"
class StrBlobPtr {
	friend bool operator==(const StrBlobPtr& lhs, const StrBlobPtr& rhs);
	friend bool operator!=(const StrBlobPtr& lhs, const StrBlobPtr& rhs);
public:
	
	StrBlobPtr() :curr(0) {}
	StrBlobPtr(StrBlob& a, size_t sz = 0) :wptr(a.data), curr(sz) {}
	std::string& deref()const;
	StrBlobPtr& incr();//前缀递增
	std::string& operator[](std::size_t n) { if (wptr.lock()) return (*wptr.lock())[n]; }
	const std::string& operator[](std::size_t n) const  { if (wptr.lock()) return (*wptr.lock())[n]; }
	StrBlobPtr& operator++();
	StrBlobPtr& operator--();
	StrBlobPtr& operator++(int );
	StrBlobPtr& operator--(int );
private:
	//若检查成功，check返回一个指向vector的shared_ptr
	std::shared_ptr<std::vector<std::string>>
		check(std::size_t, const std::string&)const;
	//保存一个weak_ptr，意味着底层vector可能会被销毁
	std::weak_ptr<std::vector<std::string>>wptr;
	std::size_t curr;//在数组中的当前位置
};
std::shared_ptr<std::vector<std::string>>StrBlobPtr::
check(std::size_t i, const std::string& msg)const
{
	auto ret = wptr.lock();//vector还存在吗
	if (!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw std::out_of_range(msg);
	return ret;//否则，返回指向vector的shared_ptr
}

std::string& StrBlobPtr::deref()const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];//(*p)是对象所指向的vector
}
StrBlobPtr& StrBlobPtr::incr()
{
	//如果curr已经指向容器的尾后位置，就不能递增它
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}

bool operator==(const StrBlobPtr& lhs, const StrBlobPtr& rhs)
{
	/*return *lhs.wptr.lock() == *rhs.wptr.lock() &&
		lhs.curr == rhs.curr;*/

	auto l = lhs.wptr.lock(), r = rhs.wptr.lock();
	if (l == r)
		return (!r || rhs.curr == rhs.curr);
	else
		return false;
}
bool operator!=(const StrBlobPtr& lhs, const StrBlobPtr& rhs) {
	return !(lhs == rhs);
}
StrBlobPtr& StrBlobPtr::operator++()
{
	check(curr, "increment past end of StrBlobPtr");
	++curr;
	return *this;
}
StrBlobPtr& StrBlobPtr:: operator--()
{
	--curr;
	check(curr, "decrement past begin of StrBlobPtr");
	return *this;
}
StrBlobPtr& StrBlobPtr::operator++(int index)
{
	
	StrBlobPtr ret = *this;//首先记录对象的状态；
	++* this;//调用前置++
	return ret;
}
StrBlobPtr& StrBlobPtr:: operator--(int index)
{
	auto ret = *this;//运算符优先级："[]">"*">"->">"++"
	--* this;
	return ret;
}
