#pragma once
#include<memory>
#include<string>

class StrVec {
public:
	StrVec() ://allocator成员进行默认初始化
		elements(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec(std::initializer_list<std::string> il);
	StrVec(StrVec&& s)noexcept;
	StrVec(const StrVec&);//拷贝构造函数
	StrVec& operator=(StrVec&& rhs)noexcept;
	StrVec& operator=(const StrVec&);//拷贝赋值
	StrVec& operator=(std::initializer_list<std::string>);
	std::string& operator[](std::size_t n) { return elements[n]; }
	const std::string& operator[](std::size_t n)const { return elements[n]; }
	
	~StrVec();//析构函数
	void push_back(const std::string&);
	void push_back(std::string&&);
	size_t size()const { return first_free - elements; }
	size_t capacity()const { return cap - elements; }
	std::string* begin()const { return elements; }
	std::string* end()const { return first_free; }
	void reserve(const size_t n);
	//size_t resize(const size_t n);
	void resize(const size_t n, const  std::string& s);
private:
	static std::allocator<std::string>alloc;
	//被添加元素的函数所使用
	void chk_n_alloc()
	{
		if (size() == capacity())reallocate();
	}
	//工具函数，被拷贝构造函数，赋值运算和析构函数所使用
	std::pair<std::string*, std::string*>alloc_n_copy
	(const std::string*, const std::string*);
	void free();//销毁元素并释放内存
	void reallocate();
	std::string* elements;//指向数组首元素的指针
	std::string* first_free;//指向数组第一个空闲元素的指针
	std::string* cap;//指向数组尾后元素位置的指针

};
void StrVec::push_back(const std::string& s) {
	chk_n_alloc();//确保有空间容纳新元素
	alloc.construct(first_free++, s);
}
std::pair<std::string*, std::string*>StrVec::alloc_n_copy
(const std::string* b, const std::string* e)
{
	//分配空间保存给定范围中的元素
	auto data = alloc.allocate(e - b);
	//初始化并返回一个pair，该pair由data和uninitialized_copy的返回值构成
	return { data,std::uninitialized_copy(b,e,data) };//
}
void StrVec::free()//这样delete是不是比Deng中的delete[]_elem中效率低？？
{
	//不能传递给deallocate一个空指针，如果elements为0，函数什么也不做
	if (elements) {
		//逆序销毁旧元素
		//销毁元素要先destroy已经构造了的元素，再使用deallocate，deallocate只能对原始内存作用？？
		for (auto p = first_free; p != elements;/*空*/)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);//注意是cap哦
	}
}

StrVec::StrVec(const StrVec& rhs)
{
	auto newdata = alloc_n_copy(rhs.begin(), rhs.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}

StrVec::~StrVec() { free(); }
StrVec& StrVec::operator=(const StrVec& rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

//reallocate函数，其原来位置成员绝对不会再被用，所以可以将其作为右值
void StrVec::reallocate() {
	//我们将分配当前大小两倍的空间
	auto newcapacity = size() ? 2 * size() : 1;
	//分配新内存
	auto newdata = alloc.allocate(newcapacity);
	//将数据从旧内存移动到新内存
	auto dest = newdata;/////////////
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();//一旦我们移动完成元素就释放旧内存空间
	//更新我们的数据结构，执行新元素
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}
inline void StrVec::reserve(const size_t n) {
	if (n <= capacity())
		return;
	else
	{
		//类似于reallocate
		auto data = alloc.allocate(n);
		auto dest = data;
		auto elem = elements;
		for (size_t i = 0; i != size(); ++i)
			alloc.construct(dest++, std::move(*elem++));
		free();//一旦我们移动完成元素就释放旧内存空间
		//更新我们的数据结构，执行新元素
		elements = data;
		first_free = dest;
		cap = elements + n;//指向尾后指针位置
	}
}
inline void StrVec::resize(size_t n, const std::string& s)
{
	//resize()不改变capacity，改变size()
	if (n > size())
		while (size() < n)
			push_back(s);
	else if (n == size())
		return;
	else
	{
		//将first_free-n个destroy
		for (auto it = first_free; it != elements;/*空*/)
			alloc.destroy(--it);
		//将剩余值赋值为s
		for (size_t i = 0; i < n; ++i)
			elements[i] = s;
	}
}

StrVec::StrVec(std::initializer_list<std::string>il)
{
	auto newdata = alloc_n_copy(il.begin(), il.end());
	elements = newdata.first;
	first_free = cap = newdata.second;
}
StrVec::StrVec(StrVec&& s)noexcept//移动操作不抛出任何异常
//成员初始化器接管s中的资源
	:elements(s.elements), first_free(s.first_free), cap(s.cap)
{
	//令s进入这样的状态--对其进行析构是安全的
	s.elements = s.first_free = s.cap = nullptr;
} 
StrVec& StrVec::operator=(StrVec&& rhs)
{
	//直接检查自赋值
	if(this!=&rhs)
	{
		free();
		elements = rhs.elements;
		first_free = rhs.first_free;
		cap = rhs.cap;
		rhs.elements = rhs.first_free = rhs.cap = nullptr;
	}
	return *this;
}

void StrVec::push_back(std::string&& rhs) {
	chk_n_alloc();
	alloc.construct(first_free++, std::move(rhs));
}
StrVec& StrVec::operator=(std::initializer_list<std::string>il)
{
	//alloc_n_copy分配内存空间并从给定范围内拷贝元素
	auto data = alloc_n_copy(il.begin(), il.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}