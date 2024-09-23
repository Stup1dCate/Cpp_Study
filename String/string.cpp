//STRING: 
/*
  str.substr(x,y):    	lay mot chuoi ky tu trong chuoi string bat dau tu ky tu thu x và lay ra y phan tu sau x.
  str.find (S):     	nhap vao mot doan ky tu S va in ra vi tri bat dau cua chuoi (kytu) S dó.
  str.erase (x, n):     Xoa mot chuoi n kytu trong string bat dau tu ki tu x
  str.replace(x, n, s): thay the N phan tu bang S phan tu tai vi tri x
  str.compare(s):       Sosanh chuoi str voi chuoi S. neu str = S => 0
                                                      neu str > S => 1
													  neu str < S => -1 
  str.insert(x, s):     chen mot chuoi S vao vi tri x cua chuoi ban dau 
  str.length(); str.size():   dem tong so luong byte cua mot chuoi.
*/		

//========================================================================================
//========================================================================================
/*                VD:
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"nhap chuoi: ";
    getline(cin,str);
	cout<<"do dai cua chuoi la: "<<str.length()<<endl;
	return 0;
}
*/


