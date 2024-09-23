//doi cac gia tri: sin, cos, tan, cot tu do->radian va nguoc lai.
// rad = do x pi/180

#include<iostream>
#include<cmath>
#include<algorithm>
#include <iomanip>
using namespace std;
const double pi = 3.141592654;
double S(double &n);
double X(double &m);
int main(){
	double n, m;
	S(n);
	X(m);
return 0;
}

double S(double &n){
	cout<<"Nhap vao gia tri goc bat ki (Do): ";
	cin>>n;
	cout<<"Gia tri luong giac tinh theo Radian cua goc do la: "<<endl;
	cout<<"Sin("<<n<<") = "<<sin(n)<<endl;
	cout<<"Cos("<<n<<") = "<<cos(n)<<endl;
	cout<<"Tan("<<n<<") = "<<(sin(n)/cos(n))<<endl;
	cout<<"Cot("<<n<<") = "<<1/tan(n)<<endl;
	cout<<endl;
	return n;
}
double X(double &m){
	do{
		cout<<"Nhap vao gia tri goc bat ki (Do): ";
		cin>>m;
		if (m<0 || m>360){
				cout<<"Goc khong hop le !"<<endl;
		}
		else{
			break;
		}
	}
	while(true);
	cout<<"Gia tri luong giac tinh theo Degree cua goc do la: "<<endl;
	
	double rad = m*(pi/180);
	cout<<"Sin("<<m<<") = "<<sin(rad)<<endl;
	cout<<"Cos("<<m<<") = "<<cos(rad)<<endl;
	cout<<"Tan("<<m<<") = "<<(sin(rad)/cos(rad))<<endl;
	cout<<"Cot("<<m<<") = "<<1/tan(rad)<<endl;
	cout<<endl;
	return m;
}


























