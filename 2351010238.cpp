#include <iostream>
using namespace std;
const int max = 20;

int main() {
	int arr[max];
	int choice;
	bool init = false;
	int n;
	do {
		system("cls");
		cout << "1. nhap gia tri cho mang \n"
			<<"2. xuat cac gia tri dang luu trong mang\n"
			<<"3. tinh tong so chan, tich so le\n"
			<<"4. xoa phan tu\n"
			<<"5. sap xep theo thu tu giam dan\n"
			<<"0. thoat chuong trinh\n"
			<< "chuong trinh muon thuc hien: ";
		cin >> choice;

		switch (choice) {
			case 0: 
			{
				cout << "cam on!";
				break;
			}
			case 1:
			{
				cout << "nhap so phan tu: ";
				do {
					cin >> n;
					if (n <= max && n > 0) 
					{
						for (int i = 0; i < n; i++)
						{
							cin >> arr[i];
						}
						init = true;
					}
					else
					{
						cout << "so phan tu khong hop le, vui long nhap lai so phan tu:";
					}
					
				} while (n > max || n <= 0);
				break;
			}
			case 2:
			{
				if (init) 
				{
					cout << "mang dang luu tru la: ";
					for (int i = 0; i < n; i++)
					{
						cout << arr[i] << " ";
					}
				}
				else 
				{
					cout << "mang chua duoc khoi tao!";
				}
				break; 
			}
			case 3: 
			{
				if (init) {
					int chan = 1, le = 0, demchan = 0, demle = 0;
					for (int i = 0; i < n; i++)
					{
						if (arr[i] % 2 == 0)
						{
							chan *= arr[i];
							demchan++;
						}
						else
						{
							le += arr[i];
							demle++;
						}
					}
					if (demchan == 0)
					{
						cout << "khong co so chan";
					}
					else
					{
						cout << "tich chan= " << chan;
					}
					if (demle == 0)
					{
						cout << "khong co so le";
					}
					else
					{
						cout << "tong le= " << le;
					}
				}
				else {
					cout << "mang chua duoc khoi tao!";
				}
				break;
			}
			case 4:
			{
				if (init) {
					int vt;
					do {
						cout << "nhap vi tri can xoa (1 - " << n << ") (-1 de dung xoa): ";
						cin >> vt;
						if ((vt < 1 && vt != 1) || vt > n) {
							cout << "vui long chon lai vi tri hop le: ";
						}
					} while ((vt < 1 && vt != -1) || vt > n);
					if (vt == -1) {
						cout << "dung xoa";
					}
					else {
						cout << "da xoa!";
						for (int i = vt - 1; i <= n - 1; i++) {
							arr[i] = arr[i + 1];
						}
						n--;
					}

				}
				else {
					cout << "mang chua duoc khoi tao!";
				}
			}
			case 5:
			{
				if (init) {
					int temp;
					for (int i = 0; i <n-1; i++) {
						for (int j = i + 1; j < n; j++) {
							if (arr[i] < arr[j]){
								temp = arr[i];
								arr[i] = arr[j];
								arr[j] = temp;
							}
						}
					}
					cout << "da sap xep xong!";
				}
				else {
					cout << "mang chua duoc khoi tao!";
				}
			}
			default:
				break;
		} 
		system("pause");
	} while (choice!=0);

	system("pause");
	return 0;
}