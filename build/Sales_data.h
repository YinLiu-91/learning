#pragma once

//p233 7.3
#include<iostream>
#include<string>
using namespace std;
class Sales_data {

private:
	string bookNo;//书籍编号，隐式初始化为空串
	unsigned units_sold = 0;//销售量，显式初始化为0
	double sellingprice = 0.0;//原始价格
	double saleprice = 0.0;//实售价格
	double discount = 0.0;
	double revenue = 0.0;
	double avg_price = 0.0;
public:
	friend istream& read(istream& is, Sales_data& item);
	friend ostream& print(ostream& os, const Sales_data& item);
	//isbn函数只有一条语句，返回bookNo
	string isbn()const { return bookNo; }//进行了类的封装
	//combine 函数用于把两个ISBN相同的销售记录合并在一起
	Sales_data& combine(const Sales_data& rhs)
	{
		units_sold += rhs.units_sold;
		saleprice = (saleprice * units_sold + rhs.saleprice * rhs.units_sold) / (units_sold + rhs.units_sold);
		if (sellingprice != 0)
			discount = saleprice / sellingprice;//重新计算实际折扣价格
		return *this;
	}
	Sales_data(std::string s, unsigned cnt, double price) :bookNo(s), units_sold(cnt), revenue(cnt* price) {}
	//其余构造函数全部都委托给另一个构造函数
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

 