#pragma once

//p233 7.3
#include<iostream>
#include<string>
using namespace std;
class Sales_data {

private:
	string bookNo;//�鼮��ţ���ʽ��ʼ��Ϊ�մ�
	unsigned units_sold = 0;//����������ʽ��ʼ��Ϊ0
	double sellingprice = 0.0;//ԭʼ�۸�
	double saleprice = 0.0;//ʵ�ۼ۸�
	double discount = 0.0;
	double revenue = 0.0;
	double avg_price = 0.0;
public:
	friend istream& read(istream& is, Sales_data& item);
	friend ostream& print(ostream& os, const Sales_data& item);
	//isbn����ֻ��һ����䣬����bookNo
	string isbn()const { return bookNo; }//��������ķ�װ
	//combine �������ڰ�����ISBN��ͬ�����ۼ�¼�ϲ���һ��
	Sales_data& combine(const Sales_data& rhs)
	{
		units_sold += rhs.units_sold;
		saleprice = (saleprice * units_sold + rhs.saleprice * rhs.units_sold) / (units_sold + rhs.units_sold);
		if (sellingprice != 0)
			discount = saleprice / sellingprice;//���¼���ʵ���ۿۼ۸�
		return *this;
	}
	Sales_data(std::string s, unsigned cnt, double price) :bookNo(s), units_sold(cnt), revenue(cnt* price) {}
	//���๹�캯��ȫ����ί�и���һ�����캯��
	Sales_data() :Sales_data("", 0, 0) {}
	Sales_data(std::string s) :Sales_data(s, 0, 0) {}
	Sales_data(std::istream& is) :Sales_data() { read(is, *this); }
	Sales_data(const Sales_data&);
	Sales_data& operator=(const Sales_data&);
};

istream& read(istream& is, Sales_data& item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}
ostream& print(ostream& os, const Sales_data& item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price;
	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(const Sales_data& orig) :bookNo(orig.bookNo), units_sold(orig.units_sold), revenue(orig.revenue) {}
Sales_data& Sales_data:: operator=(const Sales_data& rhs)
{
	bookNo = rhs.bookNo;
	units_sold = rhs.units_sold;
	revenue = rhs.revenue;
	return *this;
}

 