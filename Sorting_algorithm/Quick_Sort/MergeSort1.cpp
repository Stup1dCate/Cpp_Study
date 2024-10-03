//Merge sort - O(n.log(n))
#include<iostream>
#include<fstream>
using namespace std;
void Try(int a[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int l_half[n1];
    int r_half[n2];
	//khoi tao 2 mang chia doi
	    for (int i=0; i<n1; i++) l_half[i] = a[left + i];
	    for (int j=0; j<n2; j++) r_half[j] = a[mid + 1 + j];

    int i=0, j=0, k=left;
    //kiem tra cac phan tu cua 2 mang da chia doi xem phan tu nao nho hon thi gan vao truoc
    while (i<n1 && j<n2) {
        if (l_half[i] <= r_half[j]) {
            a[k] = l_half[i];
            i++;
        } else {
            a[k] = r_half[j];
            j++;
        }
        k++;
    }
    //neu mot trong 2 mang da nhap het phan tu thi chi can nhap not so luong phan tu cua mang con lai
    while (i < n1) {
        a[k] = l_half[i];
        i++; k++;
    }
    while (j < n2) {
        a[k] = r_half[j];
        j++; k++;
    }
}
void MergeSort(int a[], int left, int right) {
    if (left < right) {
        int mid = left + (right-left)/2.0;

        MergeSort(a, left, mid);
        MergeSort(a, mid + 1, right);
        Try(a, left, mid, right);
    }
}
void print (int a[], int size){
	for(int i=0;i<size;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main() {
    int a[1000], n;
	freopen("quickk.txt","r",stdin);
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
    cout<<"Mang truoc khi sap xep la: "<<endl;
    print(a, n);
    cout<<endl;
    MergeSort(a, 0, n - 1);

    cout<<"Mang sau khi sap xep la: "<<endl;
    print(a, n);

    return 0;
}
