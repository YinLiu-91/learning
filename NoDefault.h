#pragma once
class NoDefault
{
public:
	NoDefault(int i1) :i(i1) {}
	~NoDefault(){}

private:
	int i;
};
class C {
public:
	NoDefault no;
	C(int i=0) :no(i) {}
};

