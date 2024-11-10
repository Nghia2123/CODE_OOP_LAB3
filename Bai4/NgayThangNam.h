#pragma once
#include <iostream>
using namespace std;
class NgayThangNam {
private:
	int iNgay;
	int iThang;
	int iNam;
public:
	NgayThangNam();
	NgayThangNam(int Nam, int Thang, int Ngay);
	int TinhNgay();
	bool KiemTraNamNhuan(int nam);
	int NgayTrongThang(int nam, int thang);
	bool KiemTraHopLe(int nam, int thang, int ngay);

	NgayThangNam operator +(int ngay);
	NgayThangNam operator -(int ngay);
	long long operator -(NgayThangNam a);
	NgayThangNam operator ++();
	NgayThangNam operator --();
	bool operator ==(NgayThangNam a);
	bool operator !=(NgayThangNam a);
	bool operator >=(NgayThangNam a);
	bool operator <=(NgayThangNam a);
	bool operator >(NgayThangNam a);
	bool operator <(NgayThangNam a);

	friend istream& operator >>(istream& in, NgayThangNam& a);
	friend ostream& operator <<(ostream& out, NgayThangNam a);
};

