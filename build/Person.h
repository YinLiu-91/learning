#pragma once

//p233
#include<string>

using namespace std;

class Person {
private:
	string name;
	string address;
public:
	Person() = default;
	Person(string& n, string& ad) :name(n), address(ad) {}
	friend istream& read(istream& is, Person& p);
	friend ostream& print(ostream& os, const Person& p);
	string getName()const { return name; }
	string getAdd()const { return address; }
};
istream& read(istream& is, Person& p) {
	is >> p.name >> p.address;
	return is;
}
ostream& print(ostream& os, const Person& p)
{
	os << p.name << p.address;
	return os;
}