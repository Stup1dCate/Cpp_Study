//1. Tim ma tran trung binh cua 2 ma tran nhap vao (2 matrix cung kich thuoc va trung binh cua nó = tông cac phan tu tai vi tri tuong ung).
/*
#include<iostream>
using namespace std;
void tb(int a1[10][10], int a2[10][10],int &n,int &m);
int main(){
	int a1[10][10], a2[10][10], n, m;
	cout<<"\tNhap vao kich thuoc cua 2 ma tran: "<<endl;
	cout<<"Nhap vao so dong: ";
	cin>>n;
	cout<<"Nhap vao so cot: ";
	cin>>m;
	cout<<"Nhap cac ki tu cua ma tran thu nhat: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a1["<<i<<"]["<<j<<"]: ";
			cin>>a1[i][j];
		}
	}
	cout<<"Nhap cac ki tu cua ma tran thu hai: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a2["<<i<<"]["<<j<<"]: ";
			cin>>a2[i][j];
		}
	}
	tb(a1, a2, n, m);
	return 0;
}

void tb(int a1[10][10], int a2[10][10],int &n,int &m){
	int a3[10][10];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a3[i][j]=(a1[i][j]+a2[i][j])/2.0;
		}
	}
	cout<<endl;
	cout<<"Ma tran trung binh cua 2 ma tra vua nhap la: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		cout<<a3[i][j]<<"   ";
		}
		cout<<endl<<endl;
	}
}
*/






//2. Tim ma tran phan chieu (hoan doi doi xung các phan tu o 2 ben duong cheo chinh).
// TH dac biet cua bai toan hoan vi cot va dong trong ma tran !
/*
#include<iostream>
using namespace std;
void phanchieu(int a[10][10], int n);
int main(){
	int a[10][10], n;
	cout<<"Nhap vao cap cua ma tran vuong: ";
	cin>>n;
	cout<<"Nhap ma tran: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	cout<<"Ma tran an dau co dang: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	cout<<endl;
	phanchieu(a, n);
	return 0;
}
void phanchieu(int a[10][10], int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i!=j){
				swap(a[i][j], a[j][i]);
			}
		}
	}
	cout<<"Ma tran sau khi phan chieu la: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<a[j][i]<<"  ";
		}
		cout<<endl;
	}
}
*/




//3. ma tran vong xoay-ma tran da luong-(Spiral Matrix)
//(ma tran vuong, sap xep cac phan tu tang dan tu góc tren ben trái theo chièu kim dông ho cho den trung tam ma tran).


#include<iostream>
using namespace std;
int main(){
	int a[10][10], n;
	cout<<"Nhap vao cap cua ma tran vuong: ";
	cin>>n;
	cout<<"Nhap ma tran: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	return 0;
}

void sx(int a[10][10], int n){
	
}































