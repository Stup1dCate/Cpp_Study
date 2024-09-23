//										Heap sort: Do phuc tap cua thuat toan: O(n.log(n)) -> O(1)
#include <iostream>
#include <fstream>
using namespace std;
void heapify(int a[], int n, int i) {
    int tmp = i;
    int l_child = 2*i+1;
    int r_child = 2*i+2;

    if (l_child<n && a[l_child] > a[tmp]) tmp = l_child;
    if (r_child<n && a[r_child] > a[tmp]) tmp = r_child;
    
    if (tmp!= i) {
        swap(a[i], a[tmp]);
        heapify(a, n, tmp);
    }
}
void heapsort(int a[], int n) {
    for (int i=n/2-1; i>=0; i--){
        heapify(a, n, i);
    }
    for (int i=n-1; i>=0; i--){
        swap(a[0], a[i]);
        heapify(a, i, 0);
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
    freopen("quickk.txt","r", stdin);
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>a[i];
	}	
    cout<<"Mang truoc khi sap xep la: "<<endl;
    print(a, n);
    heapsort(a, n);
    cout<<"Mang sau khi sap xep la: "<<endl;
    print(a, n);

    return 0;
}









