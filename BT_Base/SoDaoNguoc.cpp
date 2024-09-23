

#include<iostream>
using namespace std;
int doi(int &n);
int main(){
	int n;
	cout<<"Nhap so can dao nguoc: ";
	cin>>n;
	cout<<"So dao nguoc la: "<<doi(n);	
	return 0;
}
int doi(int &n){
	int S=0;
	while (n>0){
		int t=n%10;
		S=S*10+t;
		n/=10;
	}
	return S;
}
