//Cach lam viec voi file text
/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream fs;
	
	fs.open("C:\\Users\\Admin\\Desktop\\cpp\\FileText.cpp\\testfile.txt");
	
	if(!fs.is_open()){
		return 1;
	}
//	string name;
//	int a;
//	
//	getline(fs, name);
//	fs>>a;
//	
//	cout<<"Name: "<<name<<endl;
//	cout<<"a: "<<a;
	fs<<"Hello";
	
	fs.close();//dung cau lenh nay de luu vao file sau khi chinh sua
	return 0;
}
*/




/*
#include<iostream>
#include<fstream>
using namespace std;
struct	person{
	string name;
	int age;
	
	person(){}
		
	person(string _name, int _age){
		name= _name;
		age= _age;
		
	}
};
int main(){
	person	*ps = new person[2];
	
	ps[0]= person("Vu Ngoc Tung", 18);
	ps[1]= person("Vu Tien Hung", 29);
	
	fstream fs;
	
	fs.open("C:\\Users\\Admin\\Desktop\\cpp\\FileText.cpp\\testfile.txt");
	
	if(!fs.is_open()){
		return 1;
	}
	// xuat thong tin ra man hinh. 
	for(int i=0;i<2;i++){
		fs<<ps[i].name<<endl;
		fs<<ps[i].age<<endl;
	}
}
*/



	
#include<iostream>
#include<fstream>
using namespace std;
struct	person{
	string name;
	int age;
	
	person(){}
		
	person(string _name, int _age){
		name= _name;
		age= _age;
		
	}
};
int main(){
	person	*ps = new person[2];
	
	ps[0]= person("Vu Ngoc Tung", 18);
	ps[1]= person("Vu Tien Hung", 29);
	
	fstream fs;
	
	fs.open("C:\\Users\\Admin\\Desktop\\cpp\\FileText.cpp\\testfile.txt");
	
	if(!fs.is_open()){
		return 1;
	}
	for(int i=0;i<2;i++){
		getline(fs, ps[i].name);
		fs>>ps[i].age;
		fs.ignore();
	}
	for(int i=0;i<2;i++){
		cout<<"Name: "<<ps[i].name<<endl;
		cout<<"Age: "<<ps[i].age<<endl;
	}
}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
