#pragma once
#include <string>
#define MAX 100000
//khai bao ham
//bai1:
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
//bai 2:
const char x[] = { '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F' };
void Xuat(int so);
void DoiCoSo(unsigned int n, unsigned int b);
unsigned int TimLuyThua(unsigned int b, unsigned int n);
//bai 3
bool kiemtraNT(unsigned int n);
void xuatsoNT(unsigned int n);
int tong_uoc_so_NT(unsigned int n);
int tich_thua_so_NT(unsigned int n);



//dinh nghia ham 

//bai 1
void autoFill(int* aray, unsigned int n) {
	for (int i = 0; i < n; i++) {
		aray[i] = i + 1;
	}
}
//a)
void xuatmang(int* aray, unsigned int n) {
	cout << "\na:\n";
	for (int i = 0; i < n; i++) {
		if (i % 10 == 0) {
			cout << '\n';
		}
		cout << aray[i] << '\t';
	}
}
//b)
int dem(int* aray, unsigned int n) {
	cout << "\nb:\n";
	int dem = 0;
	for (int i = 0; i <= n; i++) {
		if ((aray[i] % 3 == 0) && (aray[i] % 4 != 0)) {
			dem += 1;
		}
	}
	cout << "so chu so chia het cho 3 nhung ko chia het cho 4 la: " << dem << endl;
	return 0;
}
//c)
int demsochuso(unsigned int n) {
	cout << "\nc:\n";
	string m = to_string(n);
	cout << "so chu so la " << m.length();
	return 0;
}
//d)
int daonguocchuso(unsigned int n) {
	cout << "\nd:\n";
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
	cout << "\ne:\n";
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
	cout << "\nf:\n";
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
	cout << "\ng:\n";
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
	cout << "\nh:\n";
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
	cout << "\ni:\n";
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
	cout << "\nj:\n";
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
//bai2
void Xuat(int so) {
	cout << x[so];
}
unsigned int TimLuyThua(unsigned int b, unsigned int n) {
	int x = 1;
	while (x < n) {
		x *= b;
	}
	return x / b;
}
void DoiCoSo(unsigned int n, unsigned int b) {
	int v = TimLuyThua(b, n);
	while (v > 0) {
		if (n < v) {
			Xuat(0);
		}
		else {
			Xuat(n / v);
			n = n - ((n / v) * v);
		}
		v = v / b;
	}

}




//bai 3
bool kiemtraNT(unsigned int n) {
	int s = 1;
	if (n < 2) {
		s = 0;
	}
	else if (n == 2) {
		s = 1;
	}
	else {
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				s = 0;
			}

		}
	}return s;
}
void xuatsoNT(unsigned int n) {
	int s = 0;
	cout << "\ncac so nguyen to trong [1," << n << "] la: \n";
	for (int i = 0; i <= n; i++) {
		if (kiemtraNT(i) == true) {
			s++;
			cout << i << "\t";
			if (s % 5 == 0) {
				cout << "\n";
			}
		}
	}
	cout << "\nso luong so nguyen to trong [1," << n << "] la: " << s;
}
int tong_uoc_so_NT(unsigned int n) {
	int s = 0;
	for (int i = 1; i <= n; i++) {
		if ((kiemtraNT(i) == true)) {
			if (n % i == 0) {
				s = s + i;
			}
		}
	}return s;
}
int tich_thua_so_NT(unsigned int n) {
	if (kiemtraNT(n) == false) {
		cout << "\n" << n << " = ";
		while (n > 0) {
			for (int i = 2; i <= n; i++)
				if ((n % i == 0) && (kiemtraNT(i) == true)) {
					cout << i << ".";
					n /= i;
					break;
				}
		}
	}
	return 0;
}