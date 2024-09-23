//viet chuong trinh nhap vao mot câu van (mot cau bat ky bang tieng Anh) in ra man hinh so luong nguyen am, so chu viet hoa, so luong dau cau.

#include<iostream>
#include<string>
using namespace std;

void NguyenAm(string str){
	int sum =0;
	for(int i=0; i<str.length();i++){
		if(str[i] == 'u' || str[i] == 'e' || str[i] == 'o' || str[i] == 'a'|| str[i] == 'i') {sum++;}
	}
	cout<<"So luong nguyen am co trong cau tren la: "<<sum<<endl;
}
void DauCau(string str){
	int sum1=0;
	for(int i=0; i<str.length();i++){
			if(str[i]=='.'||str[i]==','||str[i]==';'){
				sum1++;
			} 
			else if(str[i]==':'||str[i]=='?'||str[i]=='!'){
				sum1++;
			}
			else if(str[i]=='('||str[i]==')'||str[i]=='-'||str[i]=='_'){
				sum1++;  
			}
			else if (str[i]=='\"' || str[i]== '\''){
				sum1++;                                                                   
		}
	}
	cout<<"So luong dau cau trong cau tren la: "<<sum1<<endl;
}
void ChuHoa(string str){
	int sum3=0;
	for(int i=0; i<str.length();i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){sum3++;}
	}
	cout<<"So chu cai da duoc viet hoa la: "<<sum3<<endl;
}
int main(){
	string str;
	cout<<"Nhap cau van can kiem tra: "<<endl;
	getline(cin, str);
	cout<<endl;
	NguyenAm(str);
	DauCau(str);
	ChuHoa(str);
	return 0;
}






