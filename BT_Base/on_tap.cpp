#include<iostream>
using namespace std;
int main(){
	int n, a[100];
	cout<<"nhap n: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int k;
	cout<<"nhap k: ";
	cin>>k;
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++){
			if (a[i]+a[j]==k){
				cout<<i<<" "<<j;
				return 0;
			}
		}
	}
	return 0;
	
}
	

