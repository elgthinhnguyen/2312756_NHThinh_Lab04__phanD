//so nguyen
#include <iostream>
#include <conio.h>
#include <string>

#define MAX 100000
using namespace std;
int aray[MAX];
int demsochuso(unsigned int n);
int dem(int* aray, unsigned int n);
void xuatmang(int* aray, unsigned int n);
void autoFill(int* aray, unsigned int n);
int daonguocchuso(unsigned int n);
int tongcacchuso(unsigned int n);
int sodautien(unsigned int n);
int chuyensangsonhiphan(unsigned int n);
int sohoanhao(unsigned int n);
int xuatsohoanhao(unsigned int n);
int timsonguyen_m(unsigned int n);
int main() {

	unsigned int n;
	cout << "hay nhap so nguyen n: "; cin >> n;
	autoFill(aray, n);
	xuatmang(aray, n);
	cout << "\nso luong cac so chia het cho 3 nhung khong chia het cho 4 trong doan [1, " << n << "] la: " << dem(aray, n) << '\n';
	demsochuso(n);
	daonguocchuso(n);
	tongcacchuso(n);
	sodautien(n);
	chuyensangsonhiphan(n);
	sohoanhao(n);
	xuatsohoanhao(n);
	timsonguyen_m(n);
	_getch();
	return 0;
}
void autoFill(int* aray, unsigned int n) {
	for (int i = 0; i < n; i++) {
		aray[i] = i + 1;
	}
}
//a)
void xuatmang(int* aray, unsigned int n) {
	for (int i = 0; i < n; i++) {
		if (i % 10 == 0) {
			cout << '\n';
		}
		cout << aray[i] << '\t';
	}
}
//b)
int dem(int* aray, unsigned int n) {
	int dem = 0;
	for (int i = 0; i <= n; i++) {
		if ((aray[i] % 3 == 0) && (aray[i] % 4 != 0)) {
			dem += 1;
		}
	}
	return dem;
}
//c)
int demsochuso(unsigned int n) {
	string m = to_string(n);
	cout << "so chu so la " << m.length();
	return 0;
}
//d)
int daonguocchuso(unsigned int n) {
	int b = n;
	int a = 0;
	for (int i = 0; ; ) {
		if (n > 0) {
			i = n % 10;
			a = a * 10 + i;
			n = n / 10;
		}
		else {
			break;
		}
	}

	cout << "\nSo " << b << " dao nguoc la: " << a << endl;
	return 0;
}
int tongcacchuso(unsigned int n) {
	unsigned int a = n;
	int s = 0;
	for (int i = 0; ; ) {
		if (n > 0) {
			i = n % 10;
			s += i;
			n = n / 10;
		}
		else {
			break;
		}
	}

	cout << "\nTong " << a << " la: " << s << endl;
	return 0;
}
int sodautien(unsigned int n) {
	unsigned int a = n;
	for (; ; ) {
		if (n >= 10) {
			n = n / 10;
		}
		else {
			break;
		}
	}

	cout << "\nSo dau tien cua so " << a << " la: " << n << endl;

	return 0;
}
int chuyensangsonhiphan(unsigned int n) {
	int m = n;
	string binary = "";

	if (m == 0) { binary = "0"; }
	else {
		for (int i = 0; ; ) {
			if (m > 0) {
				i = m % 2;
				binary = to_string(i) + binary;
				m = m / 2;
			}
			else { break; }
		}

		cout << "\nSo " << n << " chuyen qua he nhi phan la: " << binary << endl;
	}

	return 0;
}
int sohoanhao(unsigned int n) {
	int s = 0;
	for (int i = 1; i <= n / 2; i++) {
		if (n % i == 0) {
			s += i;
		}
	}

	bool a = false;

	if (s == n) { a = true; }

	if (a) { cout << "\n" << n << " la so hoan hao\n"; }
	else { cout << "\n" << n << " khong phai so hoan hao\n"; }
	return 0;
}
int xuatsohoanhao(unsigned int n) {
	int b = n;
	cout << "\nSo hoan hao trong [1," << b << "] : ";
	for (int j = 1; j <= b; j++) {
		bool a = false;
		int s = 0;
		for (int i = 1; i <= j / 2; i++) {
			if (j % i == 0) {
				s += i;
			}
		}

		if (s == j) { a = true; }

		if (a) {
			cout << j << "  ";
		}
	}
	return 0;
}
int timsonguyen_m(unsigned int n) {
	int s = 0, m;
	for (int i = 1; i <= n; i++) {

		if (s < n) {
			s = s + i;
		}
		else {
			m = i;
			break;
		}
	}
	cout << "\nSo nguyen m lon nhat khi tong 1+2+...+m <= " << n << " la: " << m - 2 << endl;
	return 0;
}


