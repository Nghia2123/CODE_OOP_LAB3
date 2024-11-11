#include "NgayThangNam.h"
#include <iostream>
using namespace std;

// Constructor mac dinh
NgayThangNam::NgayThangNam() {
	iNam = 1;
	iThang = 1;
	iNgay = 1;
}

// Constructor co tham so
NgayThangNam::NgayThangNam(int Nam, int Thang, int Ngay) {
	iNam = Nam;
	iThang = Thang;
	iNgay = Ngay;
}

// Kiem tra nam nhuan
bool NgayThangNam::KiemTraNamNhuan(int nam) {
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
		return true;
	}
	return false;
}

// Tinh so ngay trong thang do
int NgayThangNam::NgayTrongThang(int nam, int thang) {
	if (thang == 2)
		return KiemTraNamNhuan(nam) ? 29 : 28;

	if (thang == 4 || thang == 6 || thang == 9 || thang == 11)
		return 30;
	else
		return 31;
}

// Kiem tra ngay thang nam co hop le khong
bool NgayThangNam::KiemTraHopLe(int nam, int thang, int ngay) {
	if (nam < 1)
		return false;
	if (thang < 1 || thang > 12)
		return false;
	if (ngay < 1 || ngay > NgayTrongThang(nam, thang))
		return false;

	return true;
}

// Tinh thu tu cua ngay trong nam
int NgayThangNam::TinhNgay() {
	int n = 0;

	for (int i = 1; i < iThang; i++) 
		n += NgayTrongThang(iNam, i);

	n += iNgay;
	return n;
}

// Cong them n ngay
NgayThangNam NgayThangNam::operator +(int ngay) {
	NgayThangNam temp = *this;
	temp.iNgay += ngay;

	while (temp.iNgay > NgayTrongThang(temp.iNam, temp.iThang)) {
		temp.iNgay -= NgayTrongThang(temp.iNam, temp.iThang);
		temp.iThang++;
		if (temp.iThang > 12) {
			temp.iThang = 1;
			temp.iNam++;
		}
	}

	return temp;
}

// Tru di n ngay
NgayThangNam NgayThangNam::operator -(int ngay) {
	NgayThangNam temp = *this;
	temp.iNgay -= ngay;

	while (temp.iNgay < 1) {
		temp.iThang--;
		if (temp.iThang < 1) {
			temp.iThang = 12;
			temp.iNam--;
		}
		temp.iNgay += NgayTrongThang(temp.iNam, temp.iThang);
	}

	return temp;
}

// Tru 2 ngay de tinh khoang cach
long long NgayThangNam::operator -(NgayThangNam a) {
	long long n1 = a.TinhNgay();
	long long n2 = TinhNgay();

	n1 += 365LL * a.iNam + a.iNam / 4 - a.iNam / 100 + a.iNam / 400;
	n2 += 365LL * iNam + iNam / 4 - iNam / 100 + iNam / 400;

	return abs(n2-n1);
}

// Tang len 1 ngay
NgayThangNam NgayThangNam::operator ++() {
	*this = *this + 1;
	return *this;
}

// Giam di 1 ngay
NgayThangNam NgayThangNam::operator --() {
	*this = *this - 1;
	return *this;
}

// So sanh bang 2 ngay
bool NgayThangNam::operator ==(NgayThangNam a) {
	return iNam == a.iNam && iThang == a.iThang && iNgay == a.iNgay;
}

// So sanh khac 2 ngay
bool NgayThangNam::operator !=(NgayThangNam a) {
	return !(*this == a);
}

// So sanh lon hon hoac bang 2 ngay
bool NgayThangNam::operator >=(NgayThangNam a) {
	return *this == a || *this > a;
}

// So sanh nho hon hoac bang 2 ngay
bool NgayThangNam::operator <=(NgayThangNam a) {
	return *this == a || *this < a;
}

// So sanh lon hon 2 ngay
bool NgayThangNam::operator >(NgayThangNam a) {
	return iNam > a.iNam || (iNam == a.iNam && (iThang > a.iThang 
			|| (iThang == a.iThang && iNgay > a.iNgay)));
}

// So sanh nho hon 2 ngay
bool NgayThangNam::operator <(NgayThangNam a) {
	return iNam < a.iNam || (iNam == a.iNam && (iThang < a.iThang 
			|| (iThang == a.iThang && iNgay < a.iNgay)));
}

// Nhap ngay thang nam
istream& operator >>(istream& in, NgayThangNam& a) {
	do {
		in >> a.iNgay >> a.iThang >> a.iNam;
		if (a.KiemTraHopLe(a.iNam, a.iThang, a.iNgay))
			break;
		else {
			cout << "Ngay thang nam khong hop le. Nhap lai: ";
		}
	} while (true);

	return in;
}

// Xuat ngay thang nam 
ostream& operator <<(ostream& out, NgayThangNam a) {
	if (!a.KiemTraHopLe(a.iNam, a.iThang, a.iNgay)) {
		out << "Ngay thang nam khong hop le";
		return out;
	}

	if (a.iNgay < 10)
		out << "0";
	out << a.iNgay << "/";
	if (a.iThang < 10)
		out << "0";
	out << a.iThang << "/";
	if (a.iNam < 10)
		out << "000";
	else if (a.iNam < 100)
		out << "00";
	else if (a.iNam < 1000)
		out << "0";
	out << a.iNam;

	return out;
}