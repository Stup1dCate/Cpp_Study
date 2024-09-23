// 										Insertion sort - O(n^2)
#include<iostream>
#include<fstream>
using namespace std;
void InsertionSort(int a[], int n) {
    for (int i=1;i<n;i++) {
        int tmp = a[i];
        int j=i-1;
	        while (j>=0 && a[j]>tmp) {
	            a[j+1] = a[j];
	            j--;
	        }
        a[j+1] = tmp;
    }
}
void print(int a[], int size) {
    for (int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main() {
    int n, a[1000];
    freopen("quickk.txt", "r", stdin);
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout<<"Day so truoc khi sap xep co dang: "<<endl;
    print(a, n);
    InsertionSort(a, n);
    cout<<"Day so sau khi sap xep la: "<<endl; print(a, n);
  	return 0;
}
