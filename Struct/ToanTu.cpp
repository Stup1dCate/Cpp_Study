#include<iostream>
using namespace std;
struct Point{
	int x;
	int y;
	//du lieu vao (istream)
	friend istream& operator>>(istream &is, Point &p){ // phai truyen them chieu (&)
		cout<<"x: ";
		is>>p.x;
		cout<<"y: ";
		is>>p.y;
		
		return is;
	}
	//du lieu dau ra: 
	friend ostream& operator<<(ostream &os, Point p){ // khong can truyen tham chieu(&) vi ham nay chi lay gia tri ra 
		os<<p.x<<" "<<p.y;
		
		return os;
	}
	//nap trong toan tu 'tong'
	friend Point operator+(Point p1, Point p2){
		Point p3; 
		p3.x=p1.x+p2.x;
		p3.y=p1.y+p2.y;
		cout<<endl;
		return p3;
	}
};
int main(){
	Point p1, p2;
//	cin>>p1;
//	cout<<"Cac gia tri: "<<p1.x<<" "<<p1.y;
//	cout<<p1;
	
	cout<<"Nhap p1: \n";
	cin>>p1;
	cout<<"Nhap p2: \n";
	cin>>p2;
	
	Point p3=p1+p2;
	cout<<"p1+p2= "<<p3;
	return 0;
}
