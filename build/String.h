#pragma once
#include <cstring>
#include<algorithm>
#include<cstddef>
class String {
	String() :elements(nullptr), first_free(nullptr), cap(nullptr) {}
	String(char* a) {}
private:
	char* elements;
	char* first_free;
	char* cap;
};
