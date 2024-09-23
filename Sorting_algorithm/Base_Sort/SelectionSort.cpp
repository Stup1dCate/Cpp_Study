//										Selection sort - O(n^2) 
#include<iostream>
#include<fstream>
using namespace std;
void SelectionSort(int a[], int n) {
    int i, j, tmp_index;
    for (i=0;i<n-1;i++) {
        tmp_index = i;
        for (j=i+1;j<n;j++) {
            if (a[j]<a[tmp_index]) tmp_index = j;
        }
        if (tmp_index!=i) swap(a[tmp_index], a[i]);
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
    for (int i=0;i<n; i++) {
        cin>>a[i];
    }
    cout<<"Day so truoc khi sap xep co dang: "<<endl;
    print(a, n);
    SelectionSort(a, n);
    cout<<"Day so sau khi sap xep la: "<<endl;
    print(a, n);
    return 0;
}
