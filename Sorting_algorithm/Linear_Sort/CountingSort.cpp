// 										Counting sort: O(n + k)
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
void CountingSort(int a[], int n) {
	int max_value = a[0];
    for (int i=1; i<n; i++) {
        if (a[i] > max_value) {
    		max_value = a[i];
        }
    }
    int count[max_value + 1] = {0};
    
    for (int i=0; i<n; i++) {
        count[a[i]]++;
    }
    for (int i=1; i<=max_value; i++) {
        count[i] += count[i-1];
    }
    int sorted_array[n];
    for (int i=n-1; i>=0; i--) {
        sorted_array[count[a[i]]-1] = a[i];
        count[a[i]]--;
    }
    for (int i=0; i<n; i++) {
        a[i] = sorted_array[i];
    }
}
void print(int a[], int n){
	for(int i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
int main() {
    srand(time(0));
    int n;
    cout << "Nhap so phan tu cua mang: "; cin >> n;
    int *a = new int[n];
    for (int i=0; i<n; i++) {
        a[i]=rand()%100; 
    }
    cout<<"Mang ban dau duoc khoi tao ngau nhien co dang: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    CountingSort(a, n);
    cout<<"Mang khoi tao sau khi sap xep la: "<<endl;
	print(a, n);

    delete[] a;
    return 0;
}
