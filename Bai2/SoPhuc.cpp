#include "SoPhuc.h"
#include <iostream>
#include <cmath>
using namespace std;

// Constructor mac dinh
SoPhuc::SoPhuc() {
	dThuc = 0;
	dAo = 0;
}

// Constructor co doi so
SoPhuc::SoPhuc(int thuc, int ao) {
	dThuc = static_cast<double>(thuc);
	dAo = static_cast<double>(ao);
}

// Constuctor ep kieu so nguyen sang so phuc
SoPhuc::SoPhuc(int thuc) {
	dThuc = static_cast<double>(thuc);
	dAo = 0;
}

// Constructor ep kieu so thuc sang so phuc
SoPhuc::SoPhuc(double thuc) {
	dThuc = thuc;
	dAo = 0;
}

// Toan tu cong hai so phuc
SoPhuc operator + (SoPhuc a, SoPhuc b) {
	SoPhuc c;
	c.dThuc = a.dThuc + b.dThuc;
	c.dAo = a.dAo + b.dAo;
	return c;
}

// Toan tu tru hai so phuc
SoPhuc operator - (SoPhuc a, SoPhuc b) {
	SoPhuc c;
	c.dThuc = a.dThuc - b.dThuc;
	c.dAo = a.dAo - b.dAo;
	return c;
}

// Toan tu nhan hai so phuc
SoPhuc operator * (SoPhuc a, SoPhuc b) {
	SoPhuc c;
	c.dThuc = a.dThuc * b.dThuc - a.dAo * b.dAo;
	c.dAo = a.dThuc * b.dAo + a.dAo * b.dThuc;
	return c;
}

// Toan tu chia hai so phuc
SoPhuc operator / (SoPhuc a, SoPhuc b) {
	SoPhuc c;
	double temp = b.dThuc * b.dThuc + b.dAo * b.dAo;
	c.dThuc = (a.dThuc * b.dThuc + a.dAo * b.dAo) / temp;
	c.dAo = (a.dAo * b.dThuc - a.dThuc * b.dAo) / temp;
	return c;
}

// Toan tu so sanh bang 
bool SoPhuc::operator == (SoPhuc a) {
	return dThuc == a.dThuc && dAo == a.dAo;
}

// Toan tu so sanh khac
bool SoPhuc::operator != (SoPhuc a) {
	return !(*this == a);
}

// Toan tu nhap so phuc
istream& operator >> (istream& in, SoPhuc& a) {
	in >> a.dThuc >> a.dAo;
	return in;
}

// Toan tu xuat so phuc
ostream& operator << (ostream& out, SoPhuc a) {
	if (isnan(a.dThuc)) {
		out << "Khong xac dinh";
		return out;
	}
	else if (a.dAo == 0) {
		out << a.dThuc;
		return out;
	}
	else if (a.dThuc == 0) {
		if (a.dAo == 1) {
			out << "i";
			return out;
		}
		else if (a.dAo == -1) {
			out << "-i";
			return out;
		}
		else {
			out << a.dAo << "i";
			return out;
		}
	}
	else if (a.dAo == 1) {
		out << a.dThuc << " + i";
		return out;
	}
	else if (a.dAo == -1) {
		out << a.dThuc << " - i";
		return out;
	}
	else
		out << a.dThuc << (a.dAo >= 0 ? " + " : " - ") << abs(a.dAo) << "i";
	return out;
}