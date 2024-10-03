//Quick sort: Do phuc tap cua thuat toan: O(n.log(n)) -> O(n^2)
#include<iostream>
#include<fstream>
using namespace std;
void QuickSort(int a[], int low, int high) {
    if (low < high) {
        int pivot = a[high];
        int i=low-1;

        for (int j=low; j<high; j++) {
            if (a[j] <= pivot) {
                i++;
                swap(a[i], a[j]);
            }
        }
        swap(a[i + 1], a[high]);
        QuickSort(a, low, i);
        QuickSort(a, i + 2, high);
    }
}
void print(int arr[], int size) {
    for (int i = 0; i<size; i++) {
        cout << arr[i] << " ";
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

    QuickSort(a, 0, n - 1);

    cout<<"Mang sau khi sap xep la: "<<endl;
    print(a, n);

    return 0;
}
