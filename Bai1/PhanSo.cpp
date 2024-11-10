#include "PhanSo.h"
#include <iostream>
#include <string>
using namespace std;

// Constructor mac dinh
PhanSo::PhanSo() {
	iTu = 0;
	iMau = 1;
}

// Constructor co doi so
PhanSo::PhanSo(int Tu, int Mau) {
	iTu = Tu;
	iMau = Mau;
    rutGon();
}

// Constructor ep kieu so nguyen thanh phan so
PhanSo::PhanSo(int num) {
	iTu = num;
	iMau = 1;
}

// Constructor ep kieu so thuc thanh phan so voi do chinh xac 6 chu so thap phan
PhanSo::PhanSo(double num) {
	const int precision = 1000000; // Lay do chinh xac 6 chu so thap phan
	iTu = static_cast<int>(num * precision); // Nhan voi 10^6 de chuyen ve so nguyen
	iMau = precision; // Gan mau bang 10^6
	rutGon(); // Rut gon phan so
}

// Ham rut gon phan so
void PhanSo::rutGon() {
    int a = iTu;
    int b = iMau;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    iTu /= a;
    iMau /= a;

    if (iMau < 0) {
        iTu = -iTu,
        iMau = -iMau;
    }
}

// Cong hai phan so
PhanSo operator + (const PhanSo ps1, const PhanSo ps2) {
    int tu = ps1.iTu * ps2.iMau + ps2.iTu * ps1.iMau;
    int mau = ps1.iMau * ps2.iMau;
    return PhanSo(tu, mau);
}

// Tru hai phan so
PhanSo operator - (const PhanSo ps1, const PhanSo ps2) {
    int tu = ps1.iTu * ps2.iMau - ps2.iTu * ps1.iMau;
    int mau = ps1.iMau * ps2.iMau;
    return PhanSo(tu, mau);
}

// Nhan hai phan so
PhanSo operator * (const PhanSo ps1, const PhanSo ps2) {
    int tu = ps1.iTu * ps2.iTu;
    int mau = ps1.iMau * ps2.iMau;
    return PhanSo(tu, mau);
}

// Chia hai phan so
PhanSo operator / (const PhanSo ps1, const PhanSo ps2) {
    int tu = ps1.iTu * ps2.iMau;
    int mau = ps1.iMau * ps2.iTu;
    return PhanSo(tu, mau);
}

// So sanh bang
bool operator == (const PhanSo ps1, const PhanSo ps2) {
	return ps1.iTu * ps2.iMau == ps2.iTu * ps1.iMau;
}

// So sanh khac
bool operator != (const PhanSo ps1, const PhanSo ps2) {
	return ps1.iTu * ps2.iMau != ps2.iTu * ps1.iMau;
}

// So sanh lon hon hoac bang
bool operator >= (const PhanSo ps1, const PhanSo ps2) {
	return ps1.iTu * ps2.iMau >= ps2.iTu * ps1.iMau;

}

// So sanh nho hon hoac bang
bool operator <= (const PhanSo ps1, const PhanSo ps2) {
	return ps1.iTu * ps2.iMau <= ps2.iTu * ps1.iMau;
}

// So sanh lon hon
bool operator > (const PhanSo ps1, const PhanSo ps2) {
	return ps1.iTu * ps2.iMau > ps2.iTu * ps1.iMau;
}

// So sanh nho hon
bool operator < (const PhanSo ps1, const PhanSo ps2) {
	return ps1.iTu * ps2.iMau < ps2.iTu * ps1.iMau;
}

// Nhap phan so
istream& operator >> (istream& in, PhanSo& a) {
	do {
		in >> a.iTu >> a.iMau;
		if (a.iMau == 0) {
			cout << "Mau so phai khac 0. Nhap lai: ";
		}
		else {
			break;
		}
	} while (true);
	a.rutGon();
	return in;
}

// Xuat phan so
ostream& operator << (ostream& out, PhanSo a) {
	short c = to_string(a.iTu).length() + to_string(a.iMau).length();
	if (c >= 10) {
		out << (double)a.iTu / a.iMau;
		return out;
	}

	if (a.iMau == 1 || a.iTu == 0) {
		out << a.iTu;
	}
	else if (a.iMau == 0) {
		out << "Khong xac dinh";
	}
	else {
		out << a.iTu << "/" << a.iMau;
	}
	return out;
}
