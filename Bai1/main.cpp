#include "PhanSo.h"
#include <iostream>
using namespace std;

int main() {
	PhanSo A, B;
	int n; double d;
	cout << "Nhap phan so A (tu mau): ";
	cin >> A;
	cout << "Nhap phan so B (tu mau): ";
	int tu, mau;
	do {
		cin >> tu >> mau;
		if (mau == 0) {
			cout << "Mau so phai khac 0. Nhap lai: ";
			continue;
		}
		else {
			B = PhanSo(tu, mau);
			break;
		}
	} while (true);
	cout << "Nhap so nguyen n: ";
	cin >> n;
	cout << "Nhap so thuc d: ";
	cin >> d;
	cout << endl;

	cout << "Tong hai phan so: " << A + B << endl;
	cout << "Hieu hai phan so: " << A - B << endl;
	cout << "Tich hai phan so: " << A * B << endl;
	cout << "Thuong hai phan so: " << A / B << endl;

	cout << "So sanh hai phan so: \n";
	cout << "A == B: " << ((A == B) ? "Dung" : "Sai") << endl;
	cout << "A != B: " << ((A != B) ? "Dung" : "Sai") << endl;
	cout << "A >= B: " << ((A >= B) ? "Dung" : "Sai") << endl;
	cout << "A <= B: " << ((A <= B) ? "Dung" : "Sai") << endl;
	cout << "A > B: " << ((A > B) ? "Dung" : "Sai") << endl;
	cout << "A < B: " << ((A < B) ? "Dung" : "Sai") << endl;
	cout << endl;
	
	cout << "Cac phep tinh toan cua A voi so nguyen n:\n";
	cout << "A + n = " << A + n << endl;
	cout << "A - n = " << A - n << endl;
	cout << "A * n = " << A * n << endl;
	cout << "A / n = " << A / n << endl;

	cout << "Cac phep tinh toan cua A voi so thuc d:\n";
	cout << "A + d = " << A + d << endl;
	cout << "A - d = " << A - d << endl;
	cout << "A * d = " << A * d << endl;
	cout << "A / d = " << A / d << endl;

	return 0;
}