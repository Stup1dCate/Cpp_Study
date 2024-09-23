//														STRUCT
#include<iostream>
#include<string>
using namespace std;
struct Sinhvien{
	// Chua các thuôc tính: 
	string ten;
	int tuoi;
	string birt;
	// Chua các hàm:
	void ds(){
		cout<<ten<<" la hoc sinh gioi !"<<endl;
	}
	Sinhvien() {}
	Sinhvien(string _tuoi, int _ten){
		ten = _ten;
		tuoi = _tuoi;
	}
	
};
int main(){
//	Sinhvien sv_1{ "Tung", 18 }; Khai bao truoc theo thu tu cac thong tin da cho ben tren 	
	Sinhvien sv_1;
	
	cout<<"Nhap ten sinh vien: ";
	getline(cin, sv_1.ten);

	cout<<"Nhap tuoi sinh vien: ";
	cin>>sv_1.tuoi;
	cin.ignore();
	
	cout<<"Nhap ngay thang nam sinh: ";
	getline(cin, sv_1.birt);
	
	cout<<"Ten: "<<sv_1.tuoi<<endl;
	cout<<"Tuoi: "<<sv_1.ten<<endl;
	cout<<"Ngay sinh: "<<sv_1.birt<<endl;

	
	sv_1.ds();
	
	return 0;
}


