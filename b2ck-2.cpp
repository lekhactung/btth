#include <iostream>
using namespace std;

void NhapMang(long a[],long n)
{
    for (int i=0;i<n;i++){
        cout << "so cho ngoi cua phong thu " << i+1 << " : ";
        cin >> a[i];
    }
}
void XuatMang(const long a[],long n)
{
    for ( int i=0;i<n;i++){
        cout << i+1 << ": " << a[i] << endl;
    }
}
long PhamVi(const long a[],long n,long min,long max){
    do{
        cin >> min >> max;
        if(min >=max){
            cout<<"vui long nhap lai!";
        }
    }  while(min>=max);
        cout << "cac phong trong pham vi can tim la: \n ";
        for (int i = 0 ;i<n;i++){
            if(a[i]>=min && a[i] <= max){
                cout << i+1 << ": " << a[i] << " " <<endl;
            }
        }
    return 0;
}
long GiaTriMin(const long a[],long n){
    int min = a[0];
    for(int i=0;i<n;i++){
        if(a[i]<=min ){
            min =a[i];
        }
    }
    return min;
}
const int n = 5;
int main(){
    long a[n],min,max;
    NhapMang(a,n);
    int choice;
    do{
        system("cls");
        cout << "1- So cho hoc it nhat \n"
            << "2- In danh sach cac phong hoc va so cho \n"
            << "3- Phong hoc co so cho trong pham vi [x,y] \n"
            <<"4- In so cho cua n phong hoc dau tien \n"
            << "5- Ket thuc \n";
        cout << "chon chuong trinh : ";
        cin >> choice;
        
        switch (choice)
        {
        case 5:
            cout << "cam on da su dung chuong trinh!"; 
            cout << endl;
            break;
        case 1: 
            cout << "so cho it nhat cua cac phong hoc la: " << GiaTriMin(a,n) << endl;
            break;
        case 2:
            XuatMang(a,n);
            break;
        case 3:
            cout << "nhap pham vi can tim: " << endl;
            PhamVi(a,n,min,max); 
            break;
        case 4:
            int first;
            do{
                cout << "ban muon xem bao nhieu so phong dau tien : ";
                cin >> first;
            } while(first<=0);
            XuatMang(a,first);
        default:
            break;
        }
        system("pause");
    }while(choice!=5);

    return 0 ;
}