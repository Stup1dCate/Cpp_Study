#include<iostream>
#define MAX 10000
using namespace std;

int main(){
	int a[MAX], n;
	cout<<"Nhap vao so luong phan tu cua day A: ";cin>>n;
	cout<<"Nhap day: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]: "; cin>>a[i];
	}
	cout<<"Day so vua nhap la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
int max_start = 0;
    int max_length = 0;
    int current_start = 0;
    int current_length = 0;

    for (int i = 0; i < n; ++i) {
        int j = i;
        while (j + 1 < n && a[j] < a[j + 1]) {
            j++;
        }

        if (j > i) {
            current_length = j - i + 1;
            if (current_length > max_length) {
                max_length = current_length;
                max_start = i;
            }
        }
    }

    if (max_length > 0) {
        cout << "Day con tang dai nhat: ";
        for (int k = max_start; k < max_start + max_length; ++k) {
            cout << a[k] << " ";
        }
        cout << endl; 
	}
	return 0;
}
