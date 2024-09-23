//										Bubble sort: Do phuc tap cua thuat toan: O(n^2)
#include<iostream>
#include<fstream>
using namespace std;
void BubbleSort(int a[], int n){
	for(int i=n;i>0;i--){
		for(int j=0;j<i;j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}
}
void print(int a[], int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main(){
	int n, a[1000];
	freopen("quickk.txt", "r", stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Mang truoc khi sap xep la: "<<endl;
	print(a, n);
	cout<<"Mang sau khi sap xep la: "<<endl;
	BubbleSort(a, n);
	print(a, n);
	return 0;
}
