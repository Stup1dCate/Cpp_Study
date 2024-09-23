#include<iostream>
#include<fstream>

// ifstream: ios::in
// ofstream: ios::out
using namespace std;
int main(){
	ifstream ifs;
	// ifstream khong the dung de ghi de vao file.
	ifs.open("testfile.txt");
	if(!ifs.is_open()){
		cout<<"Khong the mo fie.";
		return true;
	}
	
	ifs.close();
	
	ofstream ofs;
	
	ofs.open("testfile.txt", ios::app);//ket hop duoc voi ios::app de them cac ki tu vao cuoi file.
	if(!ofs.is_open()){
		cout<<"Khong the mo fie.";
		return true;
	}
	ofs<<" Hello";
	
	ofs.close();
	return 0;
}
