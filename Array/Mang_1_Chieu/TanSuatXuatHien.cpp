#include<iostream>
#define MAX 10000
#define M_SIZE 99
using namespace std;

int main(){
    int n, a[M_SIZE];
    do{
        cout<<"Nhap so luong phan tu cua mang (max = 99 phan tu): ";
        cin>>n;
        if(n <= 0 || n > M_SIZE){
            cout<<"So luong phan tu khong hop le. Vui long nhap lai: "<<endl;
        }
        else{
            break;
        }
    }
    while(true);
    do {
        cout << "Nhap mang: " << endl;
        for(int i = 0; i < n; i++) {
            cout<<"a[" << i + 1 << "]: ";
            cin>>a[i];
            if(a[i] >= MAX) {
                cout<<"Mang co phan tu khong hop le. Vui long nhap lai mang: "<<endl;
                i=-1; 
            }
        }
    } 
    while(false);
    
    
    int b[M_SIZE] = {0};
    for(int i = 0; i < n; i++) {
        b[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(b[i] > 0) {
            cout << "So " << i << " xuat hien " << b[i] << " lan."<<endl;
        }
    }
    return 0;
}
