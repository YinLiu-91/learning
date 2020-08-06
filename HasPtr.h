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
	auto newp = new std::string(*rhs.ps);//�����ײ�string
	delete ps;//ɾ�����ڴ�
	ps = newp;
	i = rhs.i;
	return *this;//���ر�����
}