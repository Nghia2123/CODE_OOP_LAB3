#pragma once
#include <iostream>
class PhanSo{
private:
	int iTu, iMau;
public:
	PhanSo();
	PhanSo(int Tu, int Mau); 
	PhanSo(int num);
	PhanSo(double num);
	void rutGon(); 

	friend PhanSo operator + (const PhanSo ps1, const PhanSo ps2); 
	friend PhanSo operator - (const PhanSo ps1, const PhanSo ps2); 
	friend PhanSo operator * (const PhanSo ps1, const PhanSo ps2); 
	friend PhanSo operator / (const PhanSo ps1, const PhanSo ps2); 
	friend bool operator == (const PhanSo ps1, const PhanSo ps2);
	friend bool operator != (const PhanSo ps1, const PhanSo ps2);
	friend bool operator >= (const PhanSo ps1, const PhanSo ps2);
	friend bool operator <= (const PhanSo ps1, const PhanSo ps2);
	friend bool operator > (const PhanSo ps1, const PhanSo ps2);
	friend bool operator < (const PhanSo ps1, const PhanSo ps2);

	friend std::istream& operator >> (std::istream& in, PhanSo& a);
	friend std::ostream& operator << (std::ostream& out, PhanSo a);
};

