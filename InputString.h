#pragma once
#include <string>
#include <iostream>
//class InputString {
//public:
//	InputString(std::istream& is1 = std::cin, char sep1 = ' ') :is(is1), sep(sep1) {}
//	void operator()(std::string& s) { is >> s >> sep; }
//private:
//	std::istream& is;
//	char sep;
//};

class InputString {
public:
	InputString(std::istream& is = std::cin) :is(is) {}
	std::string operator()() {
		std::string line;
		if (!std::getline(is, line))
		{
			line = " ";
		}
		vs.push_back(line);
		return line;
	}
private:
	std::istream& is;
	std::vector<std::string> vs;
};
