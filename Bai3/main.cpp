#include "ThoiGian.h"
#include <iostream>
using namespace std;

int main() {
	ThoiGian A;
	int h, m, s, n;
	cout << "Nhap thoi gian A (gio phut giay): ";
	cin >> A;
	cout << "Nhap thoi gian B (gio phut giay): ";
	cin >> h >> m >> s;
	ThoiGian B(h, m, s);

	cout << "Nhap so giay n: ";
	cin >> n;

	cout << "A sang giay: " << A.TinhGiay() << endl;
	ThoiGian C;
	C = C.TinhLaiGio(n);
	cout << "n chuyen sang thoi gian: " << C << endl;
	cout << "Thoi gian A + B: " << A + B << endl;
	cout << "Thoi gian A - B: " << A - B << endl;
	cout << "Thoi gian A + n: " << A + n << endl;
	cout << "Thoi gian A - n: " << A - n << endl;
	cout << "Thoi gian ++A: " << ++A << endl;
	cout << "Thoi gian --A: " << --A << endl;

	cout << endl;

	cout << "So sanh A va B:" << endl;
	cout << "A == B: " << ((A == B) ? "Dung" : "Sai") << endl;
	cout << "A != B: " << ((A != B) ? "Dung" : "Sai") << endl;
	cout << "A >= B: " << ((A >= B) ? "Dung" : "Sai") << endl;
	cout << "A <= B: " << ((A <= B) ? "Dung" : "Sai") << endl;
	cout << "A > B: " << ((A > B) ? "Dung" : "Sai") << endl;
	cout << "A < B: " << ((A < B) ? "Dung" : "Sai") << endl;

	return 0;
}