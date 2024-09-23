//																File Text 

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream fs;
	// Mo file
	fs.open("C:\\Users\\Admin\\Desktop\\cpp\\FileText.cpp\\testfile.txt"); // dia chi cua file can mo (ten file nam o cuoi cung)

/*	
	if(fs.is_open()){ // (ten bien gan cho file).is_open(): kiem tra xem da mo duoc file can mo chua
		cout<<"Mo file thanh cong !";
	}
	else {
		cout<<"Mo file that bai !";
	}
*/

/*
	if(!fs.is_open()){
		return 1;
	}
	// ghi de vao file
	fs<<"Hello !"; // file text ben tren da duoc ghi dè thêm "Hello !" ~ câu lenh cout<<"";
*/
	
	// doc file
	string str;
	
	getline(fs, str);
	cout<<str;
	// dung cau truc string + getline de in ra man hinh cac chu cai trong file
	
	return 0;
}

