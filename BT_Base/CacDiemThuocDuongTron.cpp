#include<iostream>
#define max 10000
using namespace std;
struct Point{
	double x;
	double y;
};
bool check(int x, int y){
	if(x*x+y*y < 4){
		return true;
	}
	return false;
}
int main(){
	int n;
	Point p[max];
	cout<<"Nhap vao so diem can xet: "; cin>>n;
	cout<<"Nhap vao toa do cac diem: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Nhap toa do diem thu "<<i+1<<":"<<endl;
		cout<<"Nhap hoanh do: "; cin>>p[i].x;
		cout<<"Nhap tung do: "; cin>>p[i].y;
	}
	for(int i=0;i<n;i++){
		if(check(p[i].x, p[i].y)){
			cout<<"Diem ("<<p[i].x<<";"<<p[i].y<< ") nam trong duong tron "<<endl;
		}
		else if(!check(p[i].x, p[i].y)){
			cout<<"Diem ("<<p[i].x<<";"<<p[i].y<< ") khong nam trong duong tron "<<endl;
		}
	}
	return 0;
}
