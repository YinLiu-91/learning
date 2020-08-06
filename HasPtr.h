#pragma once
#include<string>
class HasPtr {
public:
	HasPtr(const std::string& s = std::string()) :ps(new std::string(s)), i(0) {}
	HasPtr(const HasPtr& rhs) :ps(new std::string(*(rhs.ps))), i(rhs.i) {}
	HasPtr& operator=(const HasPtr&);
	~HasPtr() { delete ps; }
private:
	std::string* ps;
	int i;
};

HasPtr& HasPtr::operator=(const HasPtr& rhs)
{
	auto newp = new std::string(*rhs.ps);//拷贝底层string
	delete ps;//删除旧内存
	ps = newp;
	i = rhs.i;
	return *this;//返回本对象
}