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
	std::cout << "������" << endl;
	return connection();
}
void disconnect(connection c)
{
	cout << "�ر�����" << endl;
}
//δʹ��shared_ptr�汾
void f(destination& d)
{
	cout << "ֱ�ӹ���connect" << endl;
	connection c = connect(&d);
	//���ǵ���disconnect�ر�����
	cout << endl;
}
void end_connection(connection* p) { disconnect(*p); }

//ʹ��shred_ptr�汾
void f1(destination& d) {
	cout << "��shared_ptr����connect" << endl;
	connection c = connect(&d);

	shared_ptr<connection> p(&c, end_connection);

	//���ǵ���disconnect����

	cout << endl;
}
#endif