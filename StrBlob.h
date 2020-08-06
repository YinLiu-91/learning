#pragma once
//p404
#include<vector>
#include<memory>
#include<string>
#include<exception>
#include<stdexcept>
#include"StrBlobPtr.h"
class StrBlobPtr;
class StrBlob {
	friend StrBlobPtr;
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string>il);
	StrBlob(const StrBlob& rhs);
	StrBlob& operator=(const StrBlob& rhs);
	size_type size()const { return data->size(); }
	bool empty()const { return data->empty(); }
	//��Ӻ�ɾ��Ԫ��
	void push_back(const std::string& t) { data->push_back(t); }
	void pop_back();
	//Ԫ�ط���
	std::string& front();
	std::string& back();
	const std::string& front()const;//��ΪҪ���س������ã����Ժ�������Ϊconst
	const std::string& back()const;
private:
	std::shared_ptr<std::vector<std::string>>data;
	//���data[i]���Ϸ������׳�һ���쳣
	void check(size_type i, const std::string& msg)const;
};

StrBlob::StrBlob() :data(std::make_shared<std::vector<std::string>>()) {}
StrBlob::StrBlob(std::initializer_list<std::string> il):data(std::make_shared<std::vector<std::string>>(il)) {}
void StrBlob::check(size_type i, const std::string& msg)const
{
	if (i >= data->size())
		throw std::out_of_range(msg);
}
std::string& StrBlob::front()
{
	//���vectorΪ�գ�check���׳��쳣
	check(0, "front on empty StrBlob");
	return data->front();
}
std::string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}
const std::string& StrBlob::front()const 
{
	//���vectorΪ�գ�check���׳��쳣
	check(0, "front on empty StrBlob");
	return data->front();
}
const std::string& StrBlob::back() const 
{
	check(0, "back on empty StrBlob");
	return data->back();
}
void StrBlob::pop_back()
{
	check(0, "pop_back on empty StrBlob");
	data->pop_back();
}
//p455
StrBlob::StrBlob(const StrBlob& rhs) :data(std::make_shared<std::vector<std::string>>(*rhs.data)) {}
StrBlob& StrBlob:: operator=(const StrBlob& rhs)
{
	auto newp = std::make_shared<std::vector<std::string>>(*rhs.data);
	data = newp;
	return *this;
}
