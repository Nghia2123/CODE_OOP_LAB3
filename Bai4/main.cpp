#include "NgayThangNam.h"
#include <iostream>
using namespace std;

int main() {
	NgayThangNam A;
	cout << "Nhap ngay thang nam A (ngay thang nam): ";
	cin >> A;
	int ngay, thang, nam, n;
	cout << "Nhap ngay thang nam B (ngay thang nam): ";
	NgayThangNam B;
	do {
		cin >> ngay >> thang >> nam;
		B = NgayThangNam(nam, thang, ngay);
		if (B.KiemTraHopLe(nam, thang, ngay)) {
			break;
		}
		cout << "Ngay thang nam khong hop le. Nhap lai: ";
	} while (true);

	cout << "Nhap so ngay n: ";
	cin >> n;

	cout << "A la ngay thu " << A.TinhNgay() << " trong nam" << endl;
	cout << "A + n: " << A + n << endl;
	cout << "A - n: " << A - n << endl;

	cout << "A cach B (A-B): " << A - B << " ngay" << endl;

	cout << "++A: " << ++A << endl;
	cout << "--A: " << --A << endl;

	cout << "So sanh A va B: " << endl;
	cout << "A == B: " << ((A == B) ? "Dung" : "Sai") << endl;
	cout << "A != B: " << ((A != B) ? "Dung" : "Sai") << endl;
	cout << "A >= B: " << ((A >= B) ? "Dung" : "Sai") << endl;
	cout << "A <= B: " << ((A <= B) ? "Dung" : "Sai") << endl;
	cout << "A > B: " << ((A > B) ? "Dung" : "Sai") << endl;
	cout << "A < B: " << ((A < B) ? "Dung" : "Sai") << endl;

	return 0;
}