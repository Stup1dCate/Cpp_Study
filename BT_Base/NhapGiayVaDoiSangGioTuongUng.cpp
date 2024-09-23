// Viet chuong trinh nhap vao t giay va in ra man hinh gio-phut-giay tuong ung
#include<iostream>
using namespace std;
int solve(int t){
	int p=0;
	int h=0;
	while(t >=60){
		t-=60;
		p++;
		if(p>=60){
			p-=60;
			h++;
		}
	}
	cout<<h<<"h "<<p<<"m "<<t<<"s";
}

int main(){
	int t;
	do{
	cout<<"Nhap vao so giay can tinh (so nguyen duong): "; cin>>t;
		if(t < 0){
			cout<<"So nhap vao khong hop le ! Vui long nhap lai: "<<endl;
		}
		else{
			break;
		}
	}
	while(true);
	cout<<"Thoi gian tuong ung voi "<<t<<" giay la: ";
	solve(t);
	return 0;	
}
