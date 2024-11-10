#include "ThoiGian.h"
#include <iostream>
using namespace std;

// Contructor mac dinh
ThoiGian::ThoiGian() {
	iGio = 0;
	iPhut = 0;
	iGiay = 0;
}

// Contructor co tham so
ThoiGian::ThoiGian(int Gio, int Phut, int Giay) {
	iGio = Gio;
	iPhut = Phut;
	iGiay = Giay;
}

// Tinh so giay
int ThoiGian::TinhGiay() {
	return iGio * 3600 + iPhut * 60 + iGiay;
}

// Tinh lai gio
ThoiGian ThoiGian::TinhLaiGio(int Giay) {
	int h, m, s;
	h = Giay / 3600 % 24;
	m = Giay / 60 % 60;
	s = Giay % 60;
	return ThoiGian(h, m, s);
}

// Toan tu cong voi so giay
ThoiGian ThoiGian::operator +(int Giay) {
	int newGiay = TinhGiay() + Giay;
	ThoiGian temp = TinhLaiGio(newGiay);
	return temp;
}

// Toan tu tru voi so giay
ThoiGian ThoiGian::operator -(int Giay) {
	int newGiay = TinhGiay() - Giay;
	if (newGiay < 0) newGiay = abs(86400 - abs(newGiay));
	ThoiGian temp = TinhLaiGio(newGiay);
	return temp;
}

// Toan tu cong voi thoi gian
ThoiGian ThoiGian::operator +(ThoiGian a) {
	int newGiay = TinhGiay() + a.TinhGiay();
	ThoiGian temp = TinhLaiGio(newGiay);
	return temp;
}

// Toan tu tru voi thoi gian
ThoiGian ThoiGian::operator -(ThoiGian a) {
	int newGiay = TinhGiay() - a.TinhGiay();
	if (newGiay < 0) newGiay = abs(86400 - abs(newGiay));
	ThoiGian temp = TinhLaiGio(newGiay);
	return temp;
}

// Toan tu ++ (tang 1 giay)
ThoiGian ThoiGian::operator ++() {\
	*this = *this + 1;
	return *this;
}

// Toan tu -- (giam 1 giay)
ThoiGian ThoiGian::operator --() {
	*this = *this - 1;
	return *this;
}

// Toan tu so sanh bang
bool ThoiGian::operator ==(ThoiGian a) {
	return TinhGiay() == a.TinhGiay();
}

// Toan tu so sanh khac
bool ThoiGian::operator !=(ThoiGian a) {
	return TinhGiay() != a.TinhGiay();
}

// Toan tu so sanh lon hon hoac bang
bool ThoiGian::operator >=(ThoiGian a) {
	return TinhGiay() >= a.TinhGiay();
}

// Toan tu so sanh nho hon hoac bang
bool ThoiGian::operator <=(ThoiGian a) {
	return TinhGiay() <= a.TinhGiay();
}

// Toan tu so sanh lon hon
bool ThoiGian::operator >(ThoiGian a) {
	return TinhGiay() > a.TinhGiay();
}

// Toan tu so sanh nho hon
bool ThoiGian::operator <(ThoiGian a) {
	return TinhGiay() < a.TinhGiay();
}

// Toan tu Nhap thoi gian
istream& operator >>(istream & in, ThoiGian &a) {
	do {
		in >> a.iGio >> a.iPhut >> a.iGiay;
		if (a.iGio < 0 || a.iGio > 23 || a.iPhut < 0 
			|| a.iPhut > 59 || a.iGiay < 0 || a.iGiay > 59) 
			cout << "Thoi gian khong hop le. Nhap lai: ";
		else
			break;
	} while (true);
	return in;
}

// Toan tu Xuat thoi gian
ostream& operator <<(ostream& out, ThoiGian a) {
	if (a.iGio < 10) out << "0"; out << a.iGio;
	out << ":";
	if (a.iPhut < 10) out << "0"; out << a.iPhut;
	out << ":";
	if (a.iGiay < 10) out << "0"; out << a.iGiay;
	return out;
}

