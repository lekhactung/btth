#include <iostream>
using namespace std;

long SoLuongUocLuong(long n)
{
    for(int i=1;i<=n;i++){
        cout << i << " ";
    }
    return 0;
}

bool SoNguyenTo(long n)
{
    if(n<2){
        return false;
    } else if(n>=2){
        for(int i=3;i<n/2;i++){
            if(n%i==0){
                return false;
                break;
            }
        }
    }
    return true;
}

long SoDaoNguoc(long n)
{
    long sodao =0;
    while ( n!=0 ){
        int tmp = n%10;
        sodao = sodao*10+tmp;
        n/=10;
    }
    return sodao;

}

void SensorNum(long n)
{
    while(n>0){
        int tmp = SoDaoNguoc(n)%10;
        cout << " num : " << tmp << endl;
        n/=10;
    }
}

int main(){
    int choice;
    do{
        system("cls");
        cout << "1- KIEM TRA SO DOI XUNG \n"
            << "2- IN SO NGUYEN TO TRONG PHAM VI TU A-B \n"
            <<"3- SO DOI XUNG <= N \n"
            <<"LUA CHON: ";
        cin >> choice; 

        switch (choice)
        {
        case 1:
            int n;
            cout << "nhap so nguyen can kiem tra: ";
            cin >> n;
            if(SoDaoNguoc(n)==n){
                cout << "n la so doi xung" << endl;
            } else{
                cout << "n khong phai so doi xung" << endl;
            }
            break;
        case 2:
            int a ,b ;
            cout << "nhap khoang gia tri: ";
            cin >> a >> b;
            for (int i =a;i<=b;i++)
            {
                cout << i<< " ";
            }
            break;
        case 3:
        {
            int n;
            do{
                cout << "nhap gia tri n : ";
                cin >> n;
                if(n<=0){
                    cout << "vui long nhap lai!";
                }
            }while (n<=0);
            for (int i=0;i<=n;i++){
                if(SoDaoNguoc(i)==i){
                    cout << i << " ";
                }
            }
            cout << endl;
        break;
        }
        default:
            break;
        }
        
    system ( "pause");
    }while ( choice !=0);
    
    return 0;
}