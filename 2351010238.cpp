#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	char chon;
	int a,b,c,max,min;
	bool initE = false;
	do
	{
		system("cls");
		cout << "b. tinh tong S \n"
			<< "c.tinh dien tich hinh tron \n"
			<< "d.kiem tra snt \n"
			<< "e.nhap 3 so nguyen, tim so lon nhat, so nho nhat \n"
			<< "f.sap xep thu tu tang dan cua cau e \n"
			<< "x.thoat ctrinh \n";
		cin >> chon;

		switch (chon){
		case 'x' : case 'X' : 
		{
			cout << "cam on da su dung ctrinh!";
			break;
		}

		case 'b' : case 'B':
		{
			cout << "chuc nang tinh tong s: \n ";
			int n, sum = 0;
			cout << "nhap n: ";
			cin >> n;
			for (int i = 0; i <= n; i++)
			{
				sum += i;
			}
			cout << "tong la: " <<sum;
			break;
		}

		case 'c': case 'C':
		{
			cout << "chuc nang tinh dien tich hinh tron: \n";
			const double PI = 3.1416;
			double s, r;
			cout << "nhap ban kinh r: ";
			cin >> r;
			s = PI*r*r;
			cout << "dien tich hinh tron la : " << fixed << setprecision(4)<<s;
			break;
		}
		
		case 'd' : case 'D':
		{
			cout << "chuc nang kiem tra snt \n ";
			bool SNT = true;
			cout << "nhap snt can kiem tra: ";
			int n; cin >> n;
			if (n < 2) {
				SNT = false;
			}
			for (int i = 2; i <= n / 2; i++) {
				if (n%i == 0)
				{
					SNT = false;
					break;
				}
			}
			cout << n << " " << (SNT ? "la" : "khong la") << " SNT" << endl;
			break;
		}

		case 'e' : case 'E':
		{
			cout << "chuong trinh tim so lon nhat cua 3 so \n";
			cout << "nhap 3 so can so sanh : ";
			cin >> a >> b >> c;
			min = a;
			if (min > b) {
				min = b;
			}
			if (min > c) {
				min = c;
			}

			max = a;
			if (max < b) {
				max = b;
			}
			if (max < c) {
				max = c;
			}

			cout << "so nho nhat la: " << min << ", so lon nhat la: " << max;
			initE = true;
			break;
		}

		case 'f': case 'F':
		{
			if (initE) {
				int sogiua = a + b + c - max - min;
				cout << "tu lon den be: " << max << " " << sogiua << " " << min;
				cout << "tu be den lon: " << min << " " << sogiua << " " << max;
			}
			else {
				cout << "vui long lam cau e truoc";
			}
			break;
		}
		default:
			cout << " vui long nhap lai : ";
			break;
		}
		system("pause");
	} while (chon != 'x' && chon!='X');

	return 0;
}