#pragma once
#include <iostream>
using namespace std;
class ThoiGian{
private:
	int iGio, iPhut, iGiay;
public:
	ThoiGian();
	ThoiGian(int Gio, int Phut, int Giay);
	int TinhGiay();
	ThoiGian TinhLaiGio(int Giay);

	ThoiGian operator +(int Giay);
	ThoiGian operator -(int Giay);
	ThoiGian operator +(ThoiGian a);
	ThoiGian operator -(ThoiGian a);
	ThoiGian operator ++();
	ThoiGian operator --();
	bool operator ==(ThoiGian a);
	bool operator !=(ThoiGian a);
	bool operator >=(ThoiGian a);
	bool operator <=(ThoiGian a);
	bool operator >(ThoiGian a);
	bool operator <(ThoiGian a);

	friend istream& operator >>(istream& in, ThoiGian& a);
	friend ostream& operator <<(ostream& out, ThoiGian a);
};

