#pragma once
#include<string>
#include<vector>
#include<memory>

class Hasptr {
public:
	//构造函数分配新的string和新的计数器，将计数器置位1
	Hasptr(const std::string& s = std::string()) :ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
	//拷贝构造函数拷贝所有三个数据成员，并递增计数器
	Hasptr(const Hasptr& p) :ps(p.ps), i(p.i), use(p.use) { ++* use; }//符号优先级"[]">"*">"->">"++"
	Hasptr& operator=(const Hasptr&);
	~Hasptr();
private:
	std::string* ps;
	int i;
	std::size_t* use;//用来记录有多少个对象共享*ps成员
};
Hasptr::~Hasptr()
{
	if (-- * use == 0) {
		//如果引用计数变为0
		delete ps;//释放string内存
		delete use;//释放计数器内存
	}
}

Hasptr& Hasptr::operator=(const Hasptr& rhs)
{
	++* rhs.use;//首先递增右侧对象的引用计数
	if (-- * use == 0) {
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;//拷贝计数
	return *this;
}