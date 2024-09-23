
#include<iostream>
using namespace std;
int uocso(int n, int m){
	while( n!=0){
		int temp = n;
		n = m % n;
		m = temp;
	}
	return m;
}
int main(){
	int n, m;
	cout<<"n: ";
	cin>>n;
	cout<<"m: ";
	cin>>m;
	cout<<uocso(n, m);
	return 0;
}

