#include <iostream>
#include <cmath>
using namespace std;
int main (){
	float a, b, c;
	cout<<"nhap a: ";
	cin>>a;
	cout<<"nhap b: ";
	cin>>b;
	cout<<"nhap c: ";
	cin>>c;
	float delta = b*b-4*a*c;
	if (a==0){
		if (b==0){
			cout<<"nghiem cua phuong trinh la x = "<<-c<<endl;
		}
		else{
			cout<<"nghiem cua phuong trinh la x = "<<-c/b<<endl;
		}
	}
	else{
		if (delta > 0){
			float S1=(-b + sqrt(delta))/(2*a);
			float S2=(-b - sqrt(delta))/(2*a);
			cout<<"phuong trinh co 2 nghiem la: \n"<<"x1 = "<<S1<<"\n"<<"x2 = "<<S2<<endl;
		}
		else if (delta == 0){
			float x= -b/(2*a);
			cout<<"phuong trinh co nghiem kep x = "<<-b/(2*a)<<endl;
		}
		else{
			cout<<"phuong trinh da cho vo nghiem hoac khong co nghiem thuc"<<endl;
		}
	}
	return 0;
}



