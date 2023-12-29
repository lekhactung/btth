#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

const int maxVal =100;

int main(){ 
    int arr[maxVal];
    char choice;
    int n;
    bool init=false;
    do{
        system("cls");
        cout << "a. nhap mang voi n phan tu \n"
            << "b. in mang vua nhap \n"
            << "c. dem chan, le\n"
            << "d. tim so lon nhat, so nho nhat\n"
            << "e. xoa phan tu\n"
            << "f. fibonancy\n";
        cout << "chon chuong trinh: ";
        cin >> choice;
        switch (choice){
        case 'x' : case 'X': {
            cout << "cam on";
            break;
        }
        case 'a': case 'A':
        {
            do{
                cout << "nhap so gia tri trong mang : ";
                cin >> n;
                for (int i=0; i<n;i++){
                    cin >> arr[i];
                }
                if(n<0){
                    cout << "vui long nhap lai";
                }
            } while (n<0);
            init = true;
            break;
        }

        case 'b': case 'B':
        {
            if(init){
                cout << " mang dang luu la : ";
                for(int i=0;i<n;i++){
                    cout  << arr[i] << " ";
                }
            } else {
                cout << "chua khai bao";
            }
            break;
        }

        case 'c': case 'C':
        {
            int sochan=0,sole=0;
            if(init){
                for(int i=0;i<n;i++){
                    if(arr[i] % 2 ==0){
                        sochan++;
                    }else {
                        sole++;
                    }
                }
                cout << "chan = " << sochan << "\nle = " << sole << endl;
            } else {
                cout << "chua khai bao";
            }
            break;
        }
        
        case 'd' : case 'D':
        {
             if(init){
                float max_neg=0,dem1=0,dem2=0,min_pos=0;
                do{
                    for(int i=0;i<n;i++){
                        if(arr[i]<0){
                            dem1++;
                            max_neg=arr[i];
                            break;
                        }
                    }
                     for(int i=0;i<n;i++){
                       
                        if(arr[i]>=0){
                            dem2++;
                            min_pos=arr[i];
                            break;
                        }
                    }
                    for (int i=0;i<n;i++){
                        if((arr[i]<0) && max_neg<arr[i]){
                            max_neg=arr[i];
                        }
                        if((arr[i]>=0) && min_pos>=arr[i]){
                            min_pos=arr[i];
                        }
                    }
                    if(dem1==0){
                        cout << "khong co gia tri am, ";
                    }  else{
                        cout << "so am lon nhat la: " << max_neg << ", ";

                    }
                    if(dem2==0){
                        cout << "khong co gia tri duong ";
                    } else{
                        cout << "so duong nho nhat la: " << min_pos; 
                    }
                    break;
                } while(dem1!=0 || dem2!=0);
            } else {
                cout << "chua khai bao";
            }
            break;
        }
        
       case 'e' : case 'E':
       {
         if(init){
            int vt;
            do{
                cout << "nhap vi tri can xoa: 1 -> " << n;
                cin >> vt;
                if((vt < 1 && vt!=1) || vt > n){
                    cout << "vui long chon vi tri hop le: ";
                }
            } while((vt < 1 && vt!=1) || vt > n);
            if(vt==-1){
                cout << "dung xoa";
            } else{
                cout << "da xoa!";
                for (int i = vt - 1; i <n; i++) {
						arr[i] = arr[i + 1];
				}
				n--;
            }
            break;
         }
       }

        case 'f' : case 'F':
        {
            int n;
            cin >> n;
            int arr2[n];
            arr2[0]=1;
            arr2[1]=1;
            cout << arr2[0] << " "  <<endl << arr2[1] << " " << endl;
            for(int i=2;i<=n;i++){
                arr2[i]=arr2[i-2]+arr2[i-1];
                cout << arr2[i] << endl;
            }
            break;
        }
        default:{
            cout << " vui long nhap lai";
            break;
            }
        }

        system("pause");
    } while (choice!='x' && choice !='X');

    return 0;
}