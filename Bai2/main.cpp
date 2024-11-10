#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main() {
	SoPhuc a;
	int n1;
	double n2;
	cout << "Nhap so phuc a (thuc ao): ";
	cin >> a;
	cout << "Nhap so phuc b (thuc ao): ";
	int thuc, ao;
	cin >> thuc >> ao;
	SoPhuc b(thuc, ao);
	cout << "Nhap so nguyen n1: ";
	cin >> n1;
	cout << "Nhap so thuc n2: ";
	cin >> n2;
	cout << endl;

	cout << "Tong hai so phuc: " << a + b << endl;
	cout << "Hieu hai so phuc: " << a - b << endl;
	cout << "Tich hai so phuc: " << a * b << endl;
	cout << "Thuong hai so phuc: " << a / b << endl << endl;
	cout << "So sanh hai so phuc a va b:" << endl;
    cout << "So phuc a bang so phuc b: " << ((a == b) ? "Dung" : "Sai") << endl;
	cout << "So phuc a khac so phuc b: " << ((a != b) ? "Dung" : "Sai") << endl;
	cout << endl;

	cout << "Cac phep toan giua so phuc a va so nguyen n1: " << endl;
	cout << "a + n1 = " << a + n1 << endl;
	cout << "a - n1 = " << a - n1 << endl;
	cout << "a * n1 = " << a * n1 << endl;
	cout << "a / n1 = " << a / n1 << endl;
	cout << endl;

	cout << "Cac phep toan giua so phuc a va so thuc n2: " << endl;
	cout << "a + n2 = " << a + n2 << endl;
	cout << "a - n2 = " << a - n2 << endl;
	cout << "a * n2 = " << a * n2 << endl;
	cout << "a / n2 = " << a / n2 << endl;

	return 0;
}