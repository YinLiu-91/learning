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
	StrBlobPtr& incr();//ǰ׺����
	std::string& operator[](std::size_t n) { if (wptr.lock()) return (*wptr.lock())[n]; }
	const std::string& operator[](std::size_t n) const  { if (wptr.lock()) return (*wptr.lock())[n]; }
	StrBlobPtr& operator++();
	StrBlobPtr& operator--();
	StrBlobPtr& operator++(int );
	StrBlobPtr& operator--(int );
private:
	//�����ɹ���check����һ��ָ��vector��shared_ptr
	std::shared_ptr<std::vector<std::string>>
		check(std::size_t, const std::string&)const;
	//����һ��weak_ptr����ζ�ŵײ�vector���ܻᱻ����
	std::weak_ptr<std::vector<std::string>>wptr;
	std::size_t curr;//�������еĵ�ǰλ��
};
std::shared_ptr<std::vector<std::string>>StrBlobPtr::
check(std::size_t i, const std::string& msg)const
{
	auto ret = wptr.lock();//vector��������
	if (!ret)
		throw std::runtime_error("unbound StrBlobPtr");
	if (i >= ret->size())
		throw std::out_of_range(msg);
	return ret;//���򣬷���ָ��vector��shared_ptr
}

std::string& StrBlobPtr::deref()const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];//(*p)�Ƕ�����ָ���vector
}
StrBlobPtr& StrBlobPtr::incr()
{
	//���curr�Ѿ�ָ��������β��λ�ã��Ͳ��ܵ�����
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
	
	StrBlobPtr ret = *this;//���ȼ�¼�����״̬��
	++* this;//����ǰ��++
	return ret;
}
StrBlobPtr& StrBlobPtr:: operator--(int index)
{
	auto ret = *this;//��������ȼ���"[]">"*">"->">"++"
	--* this;
	return ret;
}
