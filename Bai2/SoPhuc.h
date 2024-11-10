#pragma once
#include <iostream>
using namespace std;
class SoPhuc{
private:
	double dThuc;
	double dAo;
public:
	SoPhuc();
	SoPhuc(int thuc, int ao);
	SoPhuc(int thuc);
	SoPhuc(double thuc);

	friend SoPhuc operator + (SoPhuc a, SoPhuc b);
	friend SoPhuc operator - (SoPhuc a, SoPhuc b);
	friend SoPhuc operator * (SoPhuc a, SoPhuc b);
	friend SoPhuc operator / (SoPhuc a, SoPhuc b);
	bool operator == (SoPhuc a);
	bool operator != (SoPhuc a);
	
	friend istream& operator >> (istream& in, SoPhuc& a);
	friend ostream& operator << (ostream& out, SoPhuc a);
};

