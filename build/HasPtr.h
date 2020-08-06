#pragma once
#include<string>
#include<vector>
#include<memory>

class Hasptr {
public:
	//���캯�������µ�string���µļ�����������������λ1
	Hasptr(const std::string& s = std::string()) :ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
	//�������캯�����������������ݳ�Ա��������������
	Hasptr(const Hasptr& p) :ps(p.ps), i(p.i), use(p.use) { ++* use; }//�������ȼ�"[]">"*">"->">"++"
	Hasptr& operator=(const Hasptr&);
	~Hasptr();
private:
	std::string* ps;
	int i;
	std::size_t* use;//������¼�ж��ٸ�������*ps��Ա
};
Hasptr::~Hasptr()
{
	if (-- * use == 0) {
		//������ü�����Ϊ0
		delete ps;//�ͷ�string�ڴ�
		delete use;//�ͷż������ڴ�
	}
}

Hasptr& Hasptr::operator=(const Hasptr& rhs)
{
	++* rhs.use;//���ȵ����Ҳ��������ü���
	if (-- * use == 0) {
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;//��������
	return *this;
}