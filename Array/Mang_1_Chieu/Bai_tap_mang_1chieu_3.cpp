//Bai 2: Cho day gom n so nguyen duong 
//a) Dem xem day tren co bao nhieu so hoan chinh (so hoan trinh la so co cac uoc so ngoai tru chinh no bang chinh no)
//b) Tinh tong cac chu so cua moi phan tu trong chuoi tren
//c) Sap xep lai chuoi theo thu tu tang dan.

#include<iostream>
using namespace std;

int CauA(int a[], int n){
	cout<<"Cac so hoan chinh co trong day la: "<<endl;
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=1;j<a[i];j++){
			if(a[i]%j==0){
				sum+=j;
			}
		}
		if(sum == a[i]){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}


int tong(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10; 
        n /= 10; 
    }
    return sum;
}

int CauB(int a[], int n){
  cout<<"Tong cac chu so cua cac phan tu trong day la: "<<endl;
  for (int i = 0; i < n; i++) {
        cout << tong(a[i]) <<" ";
    }
}



void CauC(int a[], int n){
	cout<<endl;
	cout<<"Day so sau khi sap xep theo thu tu tang dan la: "<<endl;
	for (int i=n-1;i>0;i--){
		for (int j=0;j<i;j++){
			if(a[j]>a[j+1]){
			int temp = a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
			}	
		}
    }
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}



int main(){
	int a[1000], n;
	cout<<"Nhap vao so luong phan tu cua day: "; cin>>n;
	cout<<"Nhap day: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]: "; cin>>a[i];
	}
	CauA(a, n);
	CauB(a, n);
	CauC(a, n);
	return 0;
}
