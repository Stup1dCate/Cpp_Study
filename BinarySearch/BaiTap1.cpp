//B1: tim khoang chua gia tri n:
/*
#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int Binary_Search(int a[], int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid;
		if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
	return -1;
}
int main(){
	int a[]={3, 6, 7, 12, 18, 21, 22, 36, 56, 71, 88, 93, 100};
	int n = sizeof(a)/sizeof(a[0]);
	int x; cout<<"Nhap x: ";cin>>x;
	if(Binary_Search(a, n, x)==-1){
		cout<<"(-1, -1)"<<endl; 
	}
	else{
		cout<<"Doan chua gia tri cua "<<x<<" la: ("<<a[Binary_Search(a, n, x) - 1]<<", "<<a[Binary_Search(a, n, x) + 1]<<")"; 
	}
	return 0;
}
*/



//B2: tim gia tri dau tien lon hon x (nhap vao) suat hien trong mang
/*
#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid;
		if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
	return r;
}
int main(){
	int a[]={3, 6, 7, 12, 18, 21, 22, 36, 56, 71, 88, 93, 100};
	int n = sizeof(a)/sizeof(a[0]);
	int x; cout<<"Nhap phan tu can kiem tra: "; cin>>x;
	int result=BinarySearch(a, n, x);
	if(result != -1 && result + 1 < n){
		cout<<"Gia tri cua phan tu be nhat nhung lon hon "<<x<<" la: "<<a[result + 1];
	}
	else{
		cout<<"Khong ton tai phan tu be nhat nhung lon hon "<<x<<endl;
	}
	return 0;
}
*/




//B3: Tim phan tu lon nhat nhung nho hon x(nhap vao)
/*
#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int x){
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid;
		if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
	return l;
}
int main(){
	int a[]={3, 6, 7, 12, 18, 21, 22, 36, 56, 71, 88, 93, 100};
	int n = sizeof(a)/sizeof(a[0]);
	int x; cout<<"Nhap phan tu can kiem tra: "; cin>>x;
	int result=BinarySearch(a, n, x);
	if(result != -1 && result + 1 < n){
		cout<<"Gia tri cua phan tu lon nhat nhung be hon "<<x<<" la: "<<a[result - 1];
	}
	else{
		cout<<"Khong ton tai phan tu lon nhat nhung be hon "<<x<<endl;
	}
	return 0;
}
*/




//B4: ap dung voi string char 
/*
#include <iostream>
#include <string>
using namespace std;

int BinarySearch(string a[], int n, string x){
	int l=0, r=n-1;
	while(l<=r){
		int mid=(l+r)/2;
		if(a[mid]==x) return mid;
		if(a[mid]<x) l=mid+1;
		else r=mid-1;
	}
	return -1;
}

int main() {
    string a[] = {"apple", "banana", "grape", "orange", "strawberry", "watermelon"};
    int n = sizeof(a) / sizeof(a[0]);
    string x; cout <<"Nhap xau can tim: "; cin>>x;
    int result = BinarySearch(a, n, x);
    if (result != -1) {
        cout <<"Tim thay "<<x<<" tai vi tri "<<result<<endl;
    } 
	else {
        cout <<"Khong tim thay "<<x<<" trong mang"<<endl;
    }
    return 0;
}
*/




//B5: 





































