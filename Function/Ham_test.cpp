#include<iostream>
#include<string>
using namespace std;

void KiemTraSoNguyenTo (int n){
	for (int i=2;i<n;i++){
		if (n%i==0){
			cout<<n<<" khong phai la so nguyen to"<<endl;
			return;
		}
	}
	cout<<n<<" la so nguyen to"<<endl;
	return;
}

int main (){
	int x, y;
	cout<<"nhap vao so thu nhat: ";
	cin>>x;
	cout<<"nhap vao so thu hai: ";
	cin>>y;

	KiemTraSoNguyenTo(x);
	KiemTraSoNguyenTo(y);
	return 0;
}

