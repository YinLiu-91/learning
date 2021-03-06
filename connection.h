#pragma once
#ifndef CONNECTION_H
#define CONNECTION_H
#include <iostream>
#include <memory>
using namespace  std;
struct destination {};
struct connection{};
connection connect(destination* pd)
{
	std::cout << "打开链接" << endl;
	return connection();
}
void disconnect(connection c)
{
	cout << "关闭链接" << endl;
}
//未使用shared_ptr版本
void f(destination& d)
{
	cout << "直接管理connect" << endl;
	connection c = connect(&d);
	//忘记调用disconnect关闭链接
	cout << endl;
}
void end_connection(connection* p) { disconnect(*p); }

//使用shred_ptr版本
void f1(destination& d) {
	cout << "用shared_ptr管理connect" << endl;
	connection c = connect(&d);

	shared_ptr<connection> p(&c, end_connection);

	//忘记调用disconnect链接

	cout << endl;
}
#endif