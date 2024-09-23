//B1: Viet ham nhap xuat chuoi 
/*
#include <iostream>
using namespace std;

string input(){
    string s;
    getline(cin, s);
    return s;
}

void print(string& s){
    cout<<s<<endl;
}

int main(){
    string s;
    s = input();
    print(s);
    return 0;
}
*/



/*B2: 	a) Dem xem trong chuoi co bao nhieu ki tu hoa ? bao nhieu ki tu thuong ?
		b) Tim ma ASCII cua moi ki tu 
		c) viet chuong trinh chuyen di cac chu cai dau o moi chu va cac chu con lai viet thuong
		d) Dem so luong phan tu cua chuoi 
		e) Dem so luong ki tu cua moi tu 
		f) Sap xep cac ki tu theo chieu tang dan cua ma ascii
*/
/*
#include <iostream>
using namespace std;

string input(){
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin, str);
    return str;
}
void Check_Hoa(string &str){
	int sum = 0, sum1 = 0;
    for(int i = 0; i<str.length(); i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){sum++;}
    }
    cout << "So ki tu duoc viet hoa la: "<<sum<<endl;
}
void Check_Thuong(string &str){
	int sum1 = 0;
	for(int i = 0; i<str.length(); i++){
        if(str[i] >= 'a' && str[i] <= 'z'){sum1++;}
    }
    cout<<"So ki tu duoc viet thuong la: "<<sum1<<endl;
}
void Xoa (string &str){
	//xoa cac khoang trang
	int i=0;
	while (i<str.length()){
		if (str[i]==' ' && str[i+1]==' '){
		str.erase(i, 1);	
		}
		else{i++;}
	}
	// bien doi tat ca ky tu thanh kytu thuong:
	for (int i=0; i<str.length(); i++){
		if (str[i]>=65 && str[i]<=90){
	  		    str[i]+=32;
			}
		}
	// bien doi nhung kytu tu o dau thanh nhung kytu hoa:	
	for (int i=0;i<str.length();i++){
		if (str[i] ==' ' && str[i+1] !=' '){
				str[i+1]-=32;
			}
		}
	str[0]-=32;		
	cout<<"chuoi sau chinh sua la: "<<str<<endl;	
}
int Count(string &str){
	int count = 0;
	for(int i=0; i<str.length(); i++){
		if(str[i] != ' '){
			count++;
		}
	}
	return count;
}
void sort(string str){
	cout << "Ma ASCII cua moi ki tu trong chuoi la:" << endl;
    for (int i = 0; i < str.length(); i++) {
        for(int j = i+1 ;j<str.length(); j++){
        	if(int(str[i])>int(str[j])){
        		char temp = str[i];
        		str[i] = str[j];
        		str[j] = temp;
			}
		}
    }
    cout<<"Danh sach cac ki tu duoc sap xep theo chieu tang dan cua ma ascii: "<<endl;
    for (int i = 1; i < str.length(); i++) {
    	cout<<"'"<<str[i]<<"': "<<int(str[i])<<endl;
    }
}
int main(){
    string str;
    str = input();
   	Check_Hoa(str);
   	Check_Thuong(str);
   	Xoa(str);
   	cout << "Ma ASCII cua moi ki tu trong chuoi la:" << endl;
   	for (int i = 0; i < str.length(); i++) {
        char c = str[i];
        cout<<"'"<<c<< "': " <<int(c)<< endl;
    }
    cout<<"So luong phan tu cua chuoi ki tu la: "<<Count(str)<<endl;
	sort(str);
    return 0;
}
*/


//B3: a)  
/*
#include<iostream>
using namespace std;

string input(){
    string str;
    cout<<"Nhap chuoi: ";
    getline(cin, str);
    return str;
}
void Xoa (string &str){
	//xoa cac khoang trang
	int i=0;
	while (i<str.size()){
		if (str[i]==' ' && str[i+1]==' '){
			str[i]='\0';
		}
		else{i++;}
	}	
	cout<<"Day sau chinh sua la: "<<str<<endl;	
}
int main()
{
	string str;
	str = input();
	Xoa(str);
	return 0;
}
*/


//B4: tim mot tu dai nhat cua mot chuoi



//B5: kiem tra xem chuoi x co thuoc chuoi con cua chuoi s khong. Co thi tra ve vi tri dau tien ma no xuat hien 
//Khong thi tra ve -1
//B6: Dem xem chuoi x xuat hien bao nhieu lan trong chuoi s
//B5 + B6: 
/*
#include <iostream>
#include <string>
using namespace std;

int Check(string s, string x) {
    for (int i = 0; i <= s.length()-x.length();i++) {     
        bool kiemtra = true;
        for (int j = 0; j < x.length(); j++) {
            if (s[i + j] != x[j]) {
                kiemtra = false;
                break;
            }
        }
        if (kiemtra) {
        	//tra ve vi tri xuat hien chuoi can tim
            return i;
        }
    }
    // neu khong co tra ve -1
    return -1; 
}
int Count(string s, string x){
	int count = 0;
    for (int i = 0; i <= s.length()-x.length();i++) {     
        bool kiemtra = true;
        for (int j = 0; j < x.length(); j++) {
            if (s[i + j] != x[j]) {
                kiemtra = false;
                break;
            }
        }
        if (kiemtra) {
            count ++;
        }
    }
    return count; 
}
int main() {
    string s, x;
    cout << "Nhap chuoi s: "; getline(cin, s);
    cout << "Nhap chuoi x: "; getline(cin, x);

    int vitri = Check(s, x);
    int solan = Count(s, x);
    
    if (vitri != -1) {
        cout <<"Chuoi x xuat hien trong chuoi s tai vi tri "<<vitri <<" va xuat hien "<<solan<<" lan."<< endl;
    } 
	else {
        cout <<"Chuoi x khong xuat hien trong chuoi s."<<endl;
    }
    return 0;
}
*/



//B7: xoa n ki tu cua chuoi s bat dau tu vi tri k nhap vao
/*
#include<iostream>
#include<string>
using namespace std;
string input (){
	string s;
	cout<<"Nhap chuoi: ";
	getline(cin, s);
	return s;
}
void Xoa(string &s, int k, int n) {
    string newString;
    for (int i=0; i<s.length(); i++) {
        if (i<k|| i>=k+n) {
            newString += s[i];
        }
    }
    s=newString; 
}
int main(){
	string s;
	s = input();
	int k, n; 
	cout<<"Nhap vi tri can xoa trong chuoi: "; cin>>k;
	cout<<"Nhap so luong phan tu can xoa tinh tu vi tri "<<k<<": "; cin>>n;
	
	Xoa(s, k, n);
	cout<<"Chuoi ki tu sau khi xoa cac phan tu theo yeu cau la: "<<s<<endl;

	
	return 0;
}

*/



//B8: chen chuoi s2 vao vi tri k cua chuoi s1
/*
#include<iostream>
#include<string>
using namespace std;
string insert(const string& s1, const string& s2, int k) {
    string result;
    for (int i = 0; i<s1.length();i++) {
        if (i==k) {
            result+=s2;
        }
        result+=s1[i];
    }
    if (k>=s1.length()) { 
        result+=s2;
    }
    return result;
}

int main(){
	string s1, s2;
	cout<<"Nhap chuoi s1: "; getline(cin, s1);
	cout<<"Nhap chuoi s2: "; getline(cin, s2);
	int k; cout<<"Nhap vi tri can chen: "; cin>>k;
	insert(s1, s2, k);
	cout<<"Chuoi moi co dang: "<<insert(s1, s2, k)<<endl;
	return 0;
}
*/



//B9: thay the chuoi con x bang chuoi y.
/*
#include <iostream>
#include <string>
using namespace std;

int Check(string s, string x) {
    for (int i = 0; i <= s.length()-x.length();i++) {     
        bool kiemtra = true;
        for (int j = 0; j < x.length(); j++) {
            if (s[i + j] != x[j]) {
                kiemtra = false;
                break;
            }
        }
        if (kiemtra) {
            return i;
        }
    }
    return -1; 
}

string Replace(const string& s, const string& x, const string& y) {
    string result = "";
    int s_length = s.length();
    int x_length = x.length();

    for (int i = 0; i < s_length;) {
        bool match = true;
        for (int j = 0; j < x_length; ++j) {
            if (i + j >= s_length || s[i + j] != x[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            result += y;
            i += x_length; 
        } else {
            result += s[i++];
        }
    }
    return result;
}

int main() {
    string s, x, y;

    cout << "Nhap chuoi: "; getline(cin, s);
    cout << "Nhap chuoi con can thay the (x): "; getline(cin, x);
    cout << "Nhap chuoi con thay the (y): "; getline(cin, y);
 	int vitri = Check(s, x);

    if (vitri != -1) {
        cout<<"Chuoi "<<x<<" xuat hien trong chuoi ban dau tai vi tri "<<vitri<<endl;
        string result = Replace(s, x, y);
        cout<<"Chuoi moi sau khi thay the la: "<<result<<endl;
    } else {
        cout <<"Chuoi x KHONG xuat hien trong chuoi s."<<endl;
    }
    return 0;
}
*/












