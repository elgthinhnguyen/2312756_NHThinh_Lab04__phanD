#include "thuvien.h"
void XuatMenuBai();
int ChonMenu(int soMenu);
void XuLyMenu(int menu);
void ChayChuongTrinh();

void XuatMenuBai() {
	cout << "~~~~~ CHON BAI ~~~~~\n";
	cout << "0. ket thuc chuong trinh\n";
	cout << "1. so nguyen\n";
	cout << "2. doi co so\n" << "3. so nguyen to\n" <<"4. uoc so\n" << "5. khai trien taylor\n" << "6. so fibonacci\n";
	cout << "~~~~~~~~~~~~~~~~~~~~";
}


int ChonMenu(int soMenu) {
	int stt;
	do {
		system("cls");
		XuatMenuBai();
		cout << "\nNhap 1 so de chon menu: ";
		cin >> stt;
	} while (stt<0 || stt>soMenu);
	return stt;
}

void XuLyMenu(int menu) {
	switch (menu) {
	case 1:
		
		cout << "\nEx1: so nguyen selected \n";
		int n;
		int i;
		do {
			
				system("cls");
				cout << "nhap so n ";
				cin >> n;
				
				cout << "~~~~~ CHON CHUONG TRINH ~~~~~\n";
				cout << "0. ket thuc chuong trinh\n";
				cout << "1. xuat cac so tu 1 den" << n;
				cout << "\n2. dem cac so chia het cho 3 nhung ko chia het cho 4 trong doan 1-" << n;
				cout << "\n3. dem so luong chu so cua " << n;
				cout << "\n4. dao nguoc so " << n;
				cout << "\n5. tinh tong chu so trong " << n;
				cout << "\n6. chu so dau tien cua " << n;
				cout << "\n7. doi" << n << " sang so nhi phan";
				cout << "\n8. kiem tra so hoan hao ";
				cout << "\n9. xuat cac so hoan hao trong pham vi";
				cout << "\n10. tim so m lon nhat sao cho tong 1+2+...+m<=" << n;
				cout << "\n~~~~~~~~~~~~~~~~~~~~";
				
				cout << "\nnhap vao 1 so de chon "; cin >> i;
				
				autoFill(aray, n);
				switch (i) {
				case 1:
					xuatmang(aray, n);
					break;
				case 2:
					dem(aray, n);
					break;
				case 3:
					demsochuso(n);
					break;
				case 4:
					daonguocchuso(n);
					break;
				case 5:
					tongcacchuso(n);
					break;
				case 6:
					sodautien(n);
					break;
				case 7:
					chuyensangsonhiphan(n);
					break;
				case 8:
					sohoanhao(n);
					break;
				case 9:
					xuatsohoanhao(n);
					break;
				case 10:
					timsonguyen_m(n);
					break;
				default:
					break;

				}
				if (i > 0 && i < 10) {
					cout << "\nfress any key to continue";
					_getch();
				}
			
		} while (i > 0);

			break;
	case 2:
		cout << "\nEx2 Doi co so selected \n";
		unsigned int a;
		unsigned int b;
		int v;
		do {
			system("cls");
			cout << "\n~~~~~ CHON HE CO SO ~~~~~\n";
			cout << "0. ket thuc chuong trinh\n";
			cout << "1. doi sang he nhi phan\n";
			cout << "2. doi sang he bat phan\n";
			cout << "3. doi sang he thap luc phan\n";
			cout << "4. doi sang he co so 7\n";
			cout << "5. soi sang he co so b bat ki\n";
			cout << "~~~~~~~~~~~~~~~~~~~~\n";
			cout << "chon chuong trinh: ";
			cin >> v;
			switch (v) {
			case 1:
				b = 2;
				break;
			case 2:
				b = 8;
				break;
			case 3:
				b = 16;
				break;
			case 4:
				b = 7;
				break;
			case 5:
				do {
					cout << "nhap vao he co so muon doi:";
					cin >> b;
				} while (b < 2 && b>16);
			default:
				break;
			}

			if(v > 0&&v<5){
				
				cout << "hay nhap so tu nhien a : "; cin >> a;
				TimLuyThua(b, a);
				DoiCoSo(a, b);
				cout << "\nfress any key to continue";
				_getch();
			}
			
			
		} while (v > 0);

		break;
	case 3:
		int c;
		c = 0;
		
		cout << "\nEx3 So nguyen to selected \n";
		int x; cout << "nhap vao n: "; cin >> x;
		bool s;
		s = kiemtraNT(x);
		if (s == true) {
			cout << "n la so nguyen to\n";
		}
		else {
			cout << "n ko phai la so nguyen to\n";
		}
		xuatsoNT(x);
		for (int i = 2; i < x; i++) {

			if (kiemtraNT(i)) {
				c++;
			}
		}
		
		cout << "so luong cac so nguyen to trong [1," << x << "] la: " << c;
		cout << "\ntong cac so nguyen to trong [1," << x << "] va la uoc cua " << x << " la: " << tong_uoc_so_NT(x);
		tich_thua_so_NT(x);
		break;
	case 4:
		cout << "\nEx4 uoc so selected \n";
		int t;
		cout <<  "nhap vao n: "; cin >> t;
		cout << "\ncac uoc so cua " << t << " la: ";
		xuatgiatri(t);
		cout << "\nso luong cac uoc so cua " << t << " la: " << demSo(t);
		cout << "\ncan bac hai cua so " << t << " xap xi: " << canbachai(t);
		cout << "\nso nho hon hoac bang " << t << " ma la luy thua cua 2 la: " <<timluythua(t);
		break;
	case 5:
		cout << "\nEx5 selected \n";
		double temp;temp = 0;
		double so;
		so= 1;
		double p;
		cout << "nhap so mu x: "; cin >> p;
		int h; h = 0;
		while (so - temp >= SAISO) {
			temp = so;
			so = so + pow(p, i) / factorial(i);
			h++;
		}
		cout << "e^" <<i<<" la "<< so;
		break;
	case 6:
		cout << "\nEx6 selected \n";
		break;
	default:
		cout << "\nprogram ended ";
	}
	if (menu > 0) {
		cout << "\nfress any key to continue";
		_getch();
	}
}
void ChayChuongTrinh() {
	int menu, soMenu=6;
	do {
		menu = ChonMenu(soMenu);
		XuLyMenu(menu);
	} while (menu > 0);
}

