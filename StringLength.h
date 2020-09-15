#pragma once
#include <string>
#include <vector>
class StringLength {
public:
	StringLength(int limit1):limit(limit1){}
	bool  operator()(const std::string& s) {
		return limit == s.length();
	}
private:
	int limit;
};