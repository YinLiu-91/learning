#pragma once
#include<memory>
#include<string>

class StrVec {
public:
	StrVec() ://allocator��Ա����Ĭ�ϳ�ʼ��
		elements(nullptr), first_free(nullptr), cap(nullptr) {}
	StrVec(std::initializer_list<std::string> il);
	StrVec(StrVec&& s)noexcept;
	StrVec(const StrVec&);//�������캯��
	StrVec& operator=(StrVec&& rhs)noexcept;
	StrVec& operator=(const StrVec&);//������ֵ
	StrVec& operator=(std::initializer_list<std::string>);
	std::string& operator[](std::size_t n) { return elements[n]; }
	const std::string& operator[](std::size_t n)const { return elements[n]; }
	
	~StrVec();//��������
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
	//�����Ԫ�صĺ�����ʹ��
	void chk_n_alloc()
	{
		if (size() == capacity())reallocate();
	}
	//���ߺ��������������캯������ֵ���������������ʹ��
	std::pair<std::string*, std::string*>alloc_n_copy
	(const std::string*, const std::string*);
	void free();//����Ԫ�ز��ͷ��ڴ�
	void reallocate();
	std::string* elements;//ָ��������Ԫ�ص�ָ��
	std::string* first_free;//ָ�������һ������Ԫ�ص�ָ��
	std::string* cap;//ָ������β��Ԫ��λ�õ�ָ��

};
void StrVec::push_back(const std::string& s) {
	chk_n_alloc();//ȷ���пռ�������Ԫ��
	alloc.construct(first_free++, s);
}
std::pair<std::string*, std::string*>StrVec::alloc_n_copy
(const std::string* b, const std::string* e)
{
	//����ռ䱣�������Χ�е�Ԫ��
	auto data = alloc.allocate(e - b);
	//��ʼ��������һ��pair����pair��data��uninitialized_copy�ķ���ֵ����
	return { data,std::uninitialized_copy(b,e,data) };//
}
void StrVec::free()//����delete�ǲ��Ǳ�Deng�е�delete[]_elem��Ч�ʵͣ���
{
	//���ܴ��ݸ�deallocateһ����ָ�룬���elementsΪ0������ʲôҲ����
	if (elements) {
		//�������پ�Ԫ��
		//����Ԫ��Ҫ��destroy�Ѿ������˵�Ԫ�أ���ʹ��deallocate��deallocateֻ�ܶ�ԭʼ�ڴ����ã���
		for (auto p = first_free; p != elements;/*��*/)
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);//ע����capŶ
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

//reallocate��������ԭ��λ�ó�Ա���Բ����ٱ��ã����Կ��Խ�����Ϊ��ֵ
void StrVec::reallocate() {
	//���ǽ����䵱ǰ��С�����Ŀռ�
	auto newcapacity = size() ? 2 * size() : 1;
	//�������ڴ�
	auto newdata = alloc.allocate(newcapacity);
	//�����ݴӾ��ڴ��ƶ������ڴ�
	auto dest = newdata;/////////////
	auto elem = elements;
	for (size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();//һ�������ƶ����Ԫ�ؾ��ͷž��ڴ�ռ�
	//�������ǵ����ݽṹ��ִ����Ԫ��
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}
inline void StrVec::reserve(const size_t n) {
	if (n <= capacity())
		return;
	else
	{
		//������reallocate
		auto data = alloc.allocate(n);
		auto dest = data;
		auto elem = elements;
		for (size_t i = 0; i != size(); ++i)
			alloc.construct(dest++, std::move(*elem++));
		free();//һ�������ƶ����Ԫ�ؾ��ͷž��ڴ�ռ�
		//�������ǵ����ݽṹ��ִ����Ԫ��
		elements = data;
		first_free = dest;
		cap = elements + n;//ָ��β��ָ��λ��
	}
}
inline void StrVec::resize(size_t n, const std::string& s)
{
	//resize()���ı�capacity���ı�size()
	if (n > size())
		while (size() < n)
			push_back(s);
	else if (n == size())
		return;
	else
	{
		//��first_free-n��destroy
		for (auto it = first_free; it != elements;/*��*/)
			alloc.destroy(--it);
		//��ʣ��ֵ��ֵΪs
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
StrVec::StrVec(StrVec&& s)noexcept//�ƶ��������׳��κ��쳣
//��Ա��ʼ�����ӹ�s�е���Դ
	:elements(s.elements), first_free(s.first_free), cap(s.cap)
{
	//��s����������״̬--������������ǰ�ȫ��
	s.elements = s.first_free = s.cap = nullptr;
} 
StrVec& StrVec::operator=(StrVec&& rhs)
{
	//ֱ�Ӽ���Ը�ֵ
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
	//alloc_n_copy�����ڴ�ռ䲢�Ӹ�����Χ�ڿ���Ԫ��
	auto data = alloc_n_copy(il.begin(), il.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}