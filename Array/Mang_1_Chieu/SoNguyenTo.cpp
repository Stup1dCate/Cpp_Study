//Cho day a gom n so nguyen duong nhap tu ban phim. Viet chuong trinh: 
//a) tim so nguyen to lon nhat cua day a
//b) tim tong tat ca cac chu so cua tat ca cac so trong day.

#include<iostream>
using namespace std;


bool ktraCauA(int n){
	if(n<2){
		return false;
	}
	for(int j=2;j<n;j++){
		if(n%j==0){
			return false;
		}
	}
	return true;
}
int CauA(int a[], int n){
	int max=a[0];
	bool NguyenToMax = false;
	
	for(int i=0;i<n;i++){
		if(ktraCauA(a[i])){
			NguyenToMax = true;
			if(max < a[i]){max=a[i];}
			}
		}
		
	if (NguyenToMax) {cout <<"So nguyen to lon nhat trong day tren la: "<<max<< endl;}
	else {cout <<"Khong co so nguyen to nao trong day tren."<<endl;}
		
	cout<<endl;
}




int TongCuaMotSo(int n){
	int k=0;
	while(n !=0){
		k+=n%10;
		n /=10;
	}
	return k;
}
int CauB(int a[], int n){
	int sum=0;
	cout<<"Tong cac chu so cua tat ca cac so co trong day la: ";
	for(int i=0;i<n;i++){
		sum+=TongCuaMotSo(a[i]);
	}
	cout<<sum;
}




int main(){
	int a[1000], n;
	cout<<"Nhap vao so luong phan tu cua day a: "; cin>>n;
	cout<<"Nhap vao day a:"<<endl;
	do{
		for(int i=0;i<n;i++){
			cout<<"a["<<i+1<<"]: "; cin>>a[i];
		}
		bool ktra = false;
			for(int i=0;i<n;i++){
		        if (a[i]<= 0) {
		            ktra=true;
		            cout<<"Day vua nhap co nhap tu khong hop le! Vui long nhap lai"<<endl;
		            break; 
		        }
			}
		    if (!ktra) {break;}
		}
	while(true);
	
	cout<<"Day vua nhap la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;

	CauA(a, n);
	CauB(a, n);
	return 0;
}











