// tinh day so Fibonacci
/*
#include<iostream>
using namespace std;
int Fi(int n){
	if (n<2){
	return n;
}
	return Fi(n-1)+Fi(n-2);
}
int main(){
	int n;
	cout<<"Vi tri cua so Fibonacci can tim: ";
	cin>>n;
	
	cout<<"So Fibonacci tai vi tri thu "<<n<<" la: "<<Fi(n);
	return 0;
}
*/


/*
// tim uoc chung lon nhat va boi chung nho nhat:
#include <iostream>
using namespace std;

int uoc(int a, int b){
    if (b == 0)
        return a;
    return uoc(b, a % b); // sau return a=b; b=a % b;
}

int boi(int a, int b){
    return (a*b) / uoc(a, b);
}

int main(){
    int a, b;
    cout << "Nhap vao so thu nhat: ";
    cin >> a;
    cout<<"Nhap vao so thu hai: ";
    cin>>b;

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << uoc(a, b) << endl;
    cout << "Boi chung nho nhat cua " << a << " va " << b << " la: " << boi(a, b) << endl;

    return 0;
}
*/


// 1/2 + 1/2*2 + 1/2*3 + ...
/*
#include<iostream>
using namespace std;
float tong(int n){
	float t=0;
	for(int i=1;i<=n;i++){
		t+=1.0/(2.0*i);
	}
	return t;
}
int main(){
	int n;
	cout<<"Nhap vao mot so: ";
	cin>>n;
	cout<<tong(n);
	return 0;
}
*/



//
/*
#include<iostream>
using namespace std;
float tong(int n){
	float t=0;
	for (int i=1;i<=n;i++){
		t+=i/(i+1.0);
	}
	return t;
}
int main(){
	int n;
	cout<<"Nhap vao mot so: ";
	cin>>n;
	cout<<tong(n);
	return 0;
}
*/


//
/*
#include<iostream>
using namespace std;
int lapphuong(int n){
	int y;
	y= n*n*n;
	return y;
}
int main(){
	int n;
	cout<<"nhap vao mot so: ";
	cin>>n;
	cout<<"gia tri lap phuong cua so "<<n<<" la: "<<lapphuong(n);
}
*/

//
/*
#include<iostream>
using namespace std;
int tt(int n){
	int t;
	t=n+1;
	return t;
}
int main(){
	int n;
	cout<<"nhap vao mot so: ";
	cin>>n;
	cout<<"so ke tiep la: "<<tt(n);
	return 0;
	
}
*/



// Bang cuu chuong:
/*
#include<iostream>
using namespace std;
void nhan(int n){
	
	for(int i=1;i<=10;i++){
		for(int j=1;j<=n;j++){
			cout<<j<<"x"<<i<<"="<<i*j<<"\t";
		}
		cout<<"\n";
	}
}
int main(){
	int n;
	cout<<"Nhap va so luong bang cuu chuong: ";
	cin>>n;
	nhan(n);
	return 0;
}
*/	


//tim so lon nhat va nho nhat trong n so nhap vao:
/*
#include<iostream>
using namespace std;
int main (){
	int n,a[1000]; 
	cout<<"Nhap vao so luong so can tim: \n";
	cin>>n;
	cout<<"Nhap so: \n";
	for(int i=0;i<n;i++){
		cout<<"Nhap so thu "<<i+1<<": ";
		cin>>a[i];
	}
	
	int max = a[0];
	for(int i=1;i<n;i++){
		if (max <a[i]){
			max = a[i];
		}
	}
	cout<<"So lon nhat trong cac so tren la: "<<max<<endl;
	
	int min = a[0];
	for(int i=1;i<n;i++){
		if (min >a[i]){
			min = a[i];
		}
	}
	cout<<"So nho nhat trong cac so tren la: "<<min<<endl;
	return 0;
}
*/


//
/*
#include<iostream>
using namespace std;
int giaithua(int  n){
	int t=1;
	for(int i=n;i>=1;i--){
		t*=i;
	}
	return t;
}
int main (){
	int n;
	cout<<"nhap vao so can tinh giai thua: ";
	cin>>n;
	giaithua(n);
	cout<<"giai thua cua "<<n<<" la: "<<giaithua(n);
	return 0;
}

*/




