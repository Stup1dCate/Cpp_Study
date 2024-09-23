
//											BTVN: HAM
//Bai 1: kiem tra chan le
/*
#include<iostream>
using namespace std;
int chanle(int n){
	if(n%2==0)
	return 1;
	return 0;
}
int main (){
	int n;
	cout<<"Nhap vao so can kiem tra: ";
	cin>>n;
	if (chanle(n))
	cout<<n<<" la so chan"<<endl;
	else 
	cout<<n<<" la so le";
}
*/



//Bai 2: kiem tra so nguyen to va so armstrong
//vd: arms: 407-370-153-...
/*
#include<iostream>
using namespace std;

int ngto(int n){
	if(n<=1)
	return 0;
	for (int i=2;i<n;i++){
		if (n%i==0){
		return 0;
		}
	}
	return 1;
}
int arms(int n){
	if (n<100){
	return false;
}
	int s=0, t=0;
		while (n > 0){
			t=n%10;
			s+=t*t*t;
			n/=10;
	}
	return true;
}
int main(){
	int n;
	cout<<"nhap vao so can kiem tra: ";
	cin>>n;
	
	if(ngto(n)==true && arms(n)==true){
		cout<<"so "<<n<<" vua la so nguyen to vua la so armstrong.";
	}
	else if (ngto(n)==true && arms(n)==false){
		cout<<"so "<<n<<" la so nguyen to nhung khong phai la so armstrong.";
	}
	else if (ngto(n)==false && arms(n)==false && n>0){
		cout<<"so "<<n<<" khong phai so nguyen to va khong phai la so armstrong.";
	}
	else if (ngto(n)==false && arms(n)==true){
		cout<<"so "<<n<<" la so armstrong nhung khong phai so nguyen to.";
	}
	else {
		cout<<"so nhap vao khong hop le.";
	}
	
}
*/



//Bai 3: chuyen nhi phan sang thap phan
/*
#include <iostream>
#include<cmath>
using namespace std;
int chuyen(int n){
	int tp=0, i=0, N;
	while (n!=0){
		N=n%10;
		n/=10;
		tp+=N*pow(2,i);
		++i;
	}
	return tp;
}
int main (){
	int n;
	cout<<"nhap vao mot so nhi phan: ";
	cin>>n;
	cout<<"so nhi phan sau khi chuyen doi sang thap phan la: "<<chuyen(n);
	return 0;
}
*/



//Bai 4: chuyen doi so thap phan sang so nhi phan:
/*
#include <iostream>
using namespace std;
int main(){

    int tp, t, N, np = 0, i = 1;
    cout << "Nhap so thap phan can chuyen doi: ";
    cin >> tp;
    N = tp;
    while (N != 0){
        t = N%2;
        N /= 2;
        np += t*i;
        i *=10;
    }
    cout << "So nhi phan tuong ung la: " << np;
    return 0;
}
*/

//
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"nhap chuoi: ";
	getline(cin, str);
	cout<<"do dai cua chuoi la: "<<str.length();
}
*/





//Bai 5: tim so manh (strong numbers)
/*
#include<iostream>
using namespace std;

long long gt(int n){
	int m=1;
	for(int i=1;i<=n;i++){
		m*=i;	
	}
	return m;
}

long long kt(int n){
	int s=0;
	int N=n;
	while(N>0){
		int t=N%10;	
		s+=gt(t);
		N/=10;
	}
	return s==n;
}

void khoang(int dau, int cuoi){
	cout<<"cac so manh trong khoang tu "<<dau<<" den "<<cuoi<<" la: "<<endl;
	for (int i=dau;i<=cuoi;i++){
		if(kt(i)){
			cout<<i<<endl;
	}
}
cout<<endl;
}

int main(){
	int dau, cuoi;
	cout<<"nhap so bat dau: ";
	cin>>dau;
	cout<<"nhap so ket thuc: ";
	cin>>cuoi;
	khoang(dau, cuoi);
	return 0;
}
*/



//Bai 6: tim cac so nguyen to trong day bang cac ham 

/*
#include<iostream>
using namespace std; 
bool ktra(int &n){
	if (n<2) return false;
	for (int i=2;i<n;i++){
		if (n%i==0) return false;
	}
	return true;
}

void xuat(int a[], int &n){
	cout<<"cac so nguyen to co trong day la: \n";
	for (int i=0;i<n;i++){
		if (ktra(a[i])){
		cout<<a[i]<<" ";
		}
	}
	cout<<endl;
}

int main ()
{
	int n, a[n];
	cout<<"nhap vao so luong so co trong mang: ";
	cin>>n;
	cout<<"nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	xuat(a, n);
	return 0;
}
*/
