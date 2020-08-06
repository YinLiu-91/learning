#pragma once
#include<string>
class Employee {
public:
	Employee() :name(std::string()),id(id_num) { id_num++; }
	Employee(const Employee& rhs) :name(rhs.name),id(id_num) { id_num++; }
	Employee& operator=(const Employee& rhs) {
		name = rhs.name;
		id = ++id_num;
	}
	const std::string& get_name() { return name; }
	size_t get_mysn() { return id; }

private:
	std::string name;
	static size_t id_num;
	size_t id;
};

size_t Employee::id_num = 0;