#include "ThoiGian.h"
#include <iostream>
using namespace std;

int main() {
	ThoiGian A, B;
	int h, m, s, n;
	cout << "Nhap thoi gian A (gio phut giay): ";
	cin >> A;
	cout << "Nhap thoi gian B (gio phut giay): ";
	do {
		cin >> h >> m >> s;
		if (h < 0 || h > 23 || m < 0 
			|| m > 59 || s < 0 || s > 59) {
			cout << "Thoi gian khong hop le, nhap lai: ";
			continue;
		}
		else {
			B = ThoiGian(h, m, s);
			break;
		}
	} while (true);

	cout << "Nhap so giay n: ";
	do {
		cin >> n;
		if (n < 0) {
			cout << "So giay khong hop le, nhap lai: ";
			continue;
		}
		else
			break;
	} while (true);

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