/*
 * @Author: your name
 * @Date: 2020-08-02 10:01:07
 * @LastEditTime: 2020-08-30 23:08:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \20200119-1\Sales_data.h
 */
#pragma once

//p233 7.3
#include<iostream>
#include<string>
using namespace std;
class Sales_data {
	friend istream& operator>>(istream& in, const Sales_data&);
	friend ostream& operator<<(ostream& out, const Sales_data&);
	friend const Sales_data operator+(const Sales_data&, const Sales_data&);
	friend bool operator==(const Sales_data& rhs,const Sales_data &lhs);
	friend bool operator!=(const Sales_data& lhs, const Sales_data& rhs);
	//friend Sales_data operator+(const Sales_data& lhs, const  Sales_data& rhs);
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
	
	Sales_data& operator+=( const Sales_data&);
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

 istream& operator>>(istream& in, const Sales_data&s)
{
	 return in;
}
 ostream& operator<<(ostream& out, const Sales_data&s)
{
	 return out;
}
Sales_data& Sales_data:: operator+=( const Sales_data&rhs)
{
	units_sold += rhs.units_sold;
	return *this;
}
bool operator==(const Sales_data&rhs,const Sales_data &lhs)
{
	return rhs.isbn() == lhs.isbn() &&
		rhs.units_sold == lhs.units_sold &&
		rhs.revenue == lhs.revenue;
}
bool operator!=(const Sales_data& lhs, const Sales_data& rhs)
{
	return !(lhs == rhs);
}
Sales_data const operator+(const Sales_data& lhs, const Sales_data& rhs)
{
	Sales_data s1;
	s1 = lhs;
	s1 += rhs;
	return s1;
}