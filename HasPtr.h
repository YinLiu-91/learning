#pragma once
#include<string>
#include<iostream>
class HasPtr {
public:
	friend void swap(HasPtr&, HasPtr&);
	HasPtr(const std::string& s = std::string()) :ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr& rhs) :ps(new std::string(*(rhs.ps))), i(rhs.i) {}
	HasPtr& operator=(const HasPtr&);
	//HasPtr& operator=(HasPtr rhs);
	friend bool operator < (const HasPtr&, const HasPtr&);
	~HasPtr() { delete ps; }
private:
	std::string* ps;
	int i;
public:
	static int icount;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
	auto newp = new std::string(*rhs.ps);//拷贝底层string
	delete ps;//删除旧内存
	ps = newp;
	i = rhs.i;
	return *this;//返回本对象
}
//HasPtr& HasPtr::operator=(HasPtr rhs)
//{
//	swap(*this, rhs);
//	return *this;
//}

inline 
void swap(HasPtr& lhs, HasPtr& rhs)
{
	using std::swap;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i,rhs.i);
} 
bool  operator<(const HasPtr& lhs, const HasPtr& rhs)
{
	std::cout << "调用了小于运算" << std::endl;
	HasPtr::icount++;
	return *(lhs.ps) < *(rhs.ps);
	
	
}
int HasPtr::icount = 0;

