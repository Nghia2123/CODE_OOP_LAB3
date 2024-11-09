#include "PhanSo.h"
#include <iostream>
using namespace std;

int main() {
	PhanSo A;
	int n; double d;
	cout << "Nhap phan so A (tu mau): ";
	cin >> A;
	cout << "Nhap phan so B (tu mau): ";
	int tu, mau;
	cin >> tu >> mau;
	PhanSo B(tu, mau);
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
	
	cout << "Cac phep tinh toan cua A voi so nguyen n1:\n";
	cout << "A + n = " << A + n << endl;
	cout << "A - n = " << A - n << endl;
	cout << "A * n = " << A * n << endl;
	cout << "A / n = " << A / n << endl;

	cout << "Cac phep tinh toan cua A voi so thuc n2:\n";
	cout << "A + d = " << A + d << endl;
	cout << "A - d = " << A - d << endl;
	cout << "A * d = " << A * d << endl;
	cout << "A / d = " << A / d << endl;

	return 0;
}