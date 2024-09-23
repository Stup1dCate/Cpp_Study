/*                           Các che do làm viec voi file (mode):
1. ios::in --> Mo file o che do doc neu file dã ton tai. 
=> chi mo file o che do doc va khong chinh sua duoc. Chi mo duoc file da ton tai.
2. ios::out --> Mo file o che do ghi và xoá het noi dung trong file,
neu file không ton tai thì se tao file.
3. ios::trunc --> Mo file o che do ghi và xoá het noi dung trong file,
neu file không ton tai thì se tao file.
4. ios::app --> Mo file o che do ghi và chi ghi vào cuoi chu không xoá các du liuu cu.
5. ios::ate --> Mo file và di chuyen con tro xuong cuoi file.
6. ios::binary --> Làm viec voi file nhi phân.
*/

#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream fs;
	
	fs.open("testfile.txt", ios::in);
	if(!fs.is_open()){
		cout<<"Khong mo duoc file";
		return true;
	}
	string name;
	getline(fs, name);
	cout<<name;
	
	fs.open("testfile1.txt", ios::out); // file "testfile1.txt" se tu dong duoc tao trong thu vien.
	fs<<"Hihihiihihihi";
	fs.close();
	
	fs.open("testfile1.txt", ios::out | ios::trunc);// mo file va xoa het cac noi dung cu de ghi vao noi dung moi.
//	ket hop 2 che do voi nhau.
	fs<<"Hi";
	fs.close();
		
	fs.open("testfile1.txt", ios::out | ios::app); // mo file va them ki tu vao cuoi file va khong lam cac ki tu khac bien mat
	fs<<" ahihi memaybeo"; // cac ki tu muon them.
	fs.close();
	
	fs.open("testfile.txt", ios::in | ios::ate);// sau khi mo file con tro se xuat hien o cuoi dong nen khong hien ra man hinh bat ki ki tu nao
	if(!fs.is_open()){
		cout<<"Khong mo duoc file";
		return true;
	}
	string name;
	getline(fs, name);
	cout<<name;
	
	
	return 0;
}

