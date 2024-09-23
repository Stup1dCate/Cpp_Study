

/*Bài 1: Viet chuong trình nhap vào 1 chuoi gom các ký tu tu a -> z và có the chua khoang trong.
Hãy loai bo các khoang trong o dau và cuoi chuoi.

#include <iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"nhap chuoi: ";
	getline(cin, str);
	
	while (str[0]==' '){
		str.erase (0, 1);
	}
	while (str[str.length()-1]==' '){
		str.erase (str.length()-1,1); 
	}
	
	cout<<"chuoi sau khi xoa het khoang trong la: "<<str<<".";
	return 0;
}
*/


/*2: Viet chuong trình nhap vào 1 chuoi gom các ký tu a -> z và có the chua khoang trong.
Hãy loai bo các khoang trong thua o giua các tu.

#include<iostream>
#include<string>
using namespace std;
int main(){
	string str;
	cout<<"nhap chuoi: ";
	getline (cin, str);
	
	int i=0;
	while (i<str.length()){
		if (str[i]==' ' && str[i+1]==' '){
			str.erase(i, 1);
			
		}
		else{
			i++;
		}
	}
	cout<<"chuoi sau khi chinh sua: "<<str<<endl;
	return 0;
}
*/

/*3: Viet chuong trình nhap vào 1 chuoi gom các ký tu a -> z, A -> Z và có the chua khoang trong.
Hãy viet hoa các chu cái o dau moi tu, các chu cái còn lai de o dang viet thuong.

#include<iostream>
#include<string>
using namespace std;
int main (){
	string str;
	cout<<"nhap chuoi: ";
	getline (cin, str);
	
	if (str[0] != ' '){
		str[0]-=32;
	}
	for (int i=0;i<str.length();i++){
		if (str[i]==' ' && str[i+1]!=' '){
			str[i+1]-=32;
		}
	}
	cout<<"chuoi sau khi chuyen la: "<<str;	
}
*/

//4: Viet chuong trình nhap vào 1 chuoi gom các ký tu a -> z, A -> Z và có the chua khoang trong.
//Hãy chuan hóa chuoi dó  

// vd:             vU    nGOc                TUnG             .

/*
#include<iostream>
#include<string>
using namespace std;
int main (){
	string str;
	cout<<"nhap chuoi: ";
	getline(cin,str);
		
	int i=0;
		while (i<str.length()){
			if (str[i]==' ' && str[i+1]==' '){
			str.erase(i, 1);	
		}
				else{
					i++;
				}
	}
	/////// bien doi tat ca ky tu thanh kytu thuong:
	for (int i=0; i<str.length(); i++){
		if (str[i]>=65 && str[i]<=90){
	  		    str[i]+=32;
			}
		}
	/////// bien doi nhung kytu tu o dau thanh nhung kytu hoa:	
	for (int i=0;i<str.length();i++){
		if (str[i] ==' ' && str[i+1] !=' '){
				str[i+1]-=32;
			}
		}
    
	str[0]-=32;
		
			cout<<"chuoi sau chinh sua la: "<<str;
			
	return 0;
}
*/

