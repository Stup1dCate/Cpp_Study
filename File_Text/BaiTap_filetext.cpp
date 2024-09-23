#include<iostream>
#include<fstream>
using namespace std;

void selectionSort(int a[], int n) {
    int i, j, min_index;
    for (i=0;i<n-1;i++) {
        min_index = i;
        for (j=i+1;j<n;j++) {
            if (a[j]<a[min_index])
                min_index = j;
        }
        if (min_index!=i)
            swap(a[min_index], a[i]);
    }
}

void print(int a[], int size) {
    for (int i = 0; i<size; i++){
        cout<<a[i]<<" ";
    }
}

int main() {
    ifstream input_file("selection.txt");
    if (!input_file) {
        cerr << "Khong the mo file !" <<endl;
        return true;
    }
    int n; 
    input_file>>n;
    int a[n]; 

    for (int i = 0; i < n; i++) {
        input_file >> a[i];
    }
    selectionSort(a, n);
    cout << "Day so sau khi sap xep la: "; print(a, n);
    return 0;
}
