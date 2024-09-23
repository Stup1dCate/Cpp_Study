// vd: cHUC      mUnG NaM       MOI   CHuc    Mung    SInH       NhAT     ChUC    MUNG GiAnG         sINH    

#include<bits\stdc++.h>
using namespace std;
string input(){
	string s;
	getline(cin, s);
	return s;
}
//dao nguoc chuoi
void reverse_list(string s){
	for(int i=s.length(); i>=0;i--){
		cout<<s[i];
	}
	cout<<endl;
}
//dem cac tu 
int Count_word(string s){
	int count=0;
	for(int i=0;i<s.length();i++){
		if(s[i]==' ' && s[i+1]!=' '){
			count++;
		}
	}
	return count + 1;
}
//in ra tung tu mot
void print_word(string s){
    string b;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=' '){ 
            b.push_back(s[i]); 
        }
        else if(!b.empty()){ 
            cout<<b<<endl; 
            b.clear(); 
        }
    }
    if(!b.empty()){
        cout<<b<<endl;
    }
}
//chuan hoa lai chuoi: viet hoa chu cai dau tien, xoa cac khoang trang
void ChuanHoa(string &s){
	int len=s.length();
	for (int i=0; i <len-1;) {
	    if (s[i]==' '&&s[i + 1]==' ') {
	        for (int j=i+1;j<len-1; j++) {
	            s[j]=s[j + 1];
	        }
	        s[len-1]='\0';
	        len--; 
	    }
	    else {i++;}
	}
	for (int i=0; i<s.length(); i++){
		if (s[i]>=65 && s[i]<=90){
	  		    s[i]+=32;
		}
	}
	for (int i=0;i<s.length();i++){
		if (s[i] ==' ' && s[i+1] !=' '){
				s[i+1]-=32;
		}
	}	
	s[0] -=32;
	cout<<"chuoi sau chinh sua la: "<<endl; cout<<s<<endl;
}
//Dem so nguyen am trong chuoi ban dau	
int NguyenAm(string s){
	int count =0;
	for(int i=0;i<s.length();i++){
		if(s[i]=='a'||s[i]=='u'||s[i]=='e'||s[i]=='o'||s[i]=='i'){
			count++;
		}
	}
	return count;
}
//Kiem tra chuoi x co xuat hien trong chuoi ban dau khong ? va xuat hien bao nhieu lan ?
int Check_X(string s, string x) {
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
int Check_count_X(string s, string x) {
	int count =0;
    for (int i = 0; i <= s.length()-x.length();i++) {     
        bool kiemtra = true;
        for (int j = 0; j < x.length(); j++) {
            if (s[i + j] != x[j]) {
                kiemtra = false;
                break;
            }
        }
        if (kiemtra) {
        	count++;
        }
    }
    return count;
}

//so lan xuat hien cua moi ki tu trong chuoi
int count_word(string s, char word){
	int count = 0;
	for(int i=0;i<s.length();i++){
    	if(s[i] != ' ' && s[i]==word){
    		count++;
			}
		}
	return count;
}
int Count_single_word(string s){
	cout<<"Danh sach so lan xuat hien cua cac ki tu trong chuoi ban dau la: "<<endl;
	cout<<"Chu thuong: "<<endl;
	for(char i='a';i<='z';i++){
    	int count_1 = count_word(s, i);
		if(count_1 > 0){
			cout<<i<<"-"<<count_1<<endl;
		}
	}
	cout<<"Chu hoa: "<<endl;
	for(char i='A';i<='Z';i++){
    	int count_2 = count_word(s, i);
		if(count_2 > 0){
			cout<<i<<"-"<<count_2<<endl;
		}
	}
}
//kiem tra 2 chuoi co giong nhau khong
bool check_list(string &s, string &y){
	if(s.length()!=y.length()){
		return false;
	}
	for(int i=0;i<s.length();i++){
		if(s[i]!=y[i]){
			return false;
		}
	}
	return true;
}

void print(string s){
	cout<<s<<endl;
}

int main(){
	string s; cout<<"Nhap chuoi: "; s = input();
	ChuanHoa(s);
	cout<<"Chuoi sau khi dao nguoc: "<<endl; reverse_list(s); 
	cout<<"So tu trong chuoi tren la: "<<Count_word(s)<<endl;
	cout<<"Cac tu xuat hien trong chuoi ban dau la: "<<endl; print_word(s);
	cout<<"So nguyen am xuat hien trong day tren gom: "<<NguyenAm(s); cout<<endl;

	string x; cout<<"Nhap vao chuoi con can kiem tra: "; x=input();
	int key=Check_X(s, x);
	int count=Check_count_X(s, x);
	if(key==-1){
		cout<<"Chuoi can kiem tra KHONG xuat hien trong chuoi ban dau."<<endl;
	}
	else{
		cout<<"Chuoi can kiem tra CO xuat hien trong chuoi ban dau va xuat hien "<<count<<" lan"<<endl;
	}
	
	Count_single_word(s);
	
	string y; cout<<"Nhap vao chuoi bat ki can kiem tra: "; y=input();
	if(check_list(s, y)){
		cout<<"Chuoi can kiem tra trung voi chuoi ban dau."<<endl;
	}
	else{
		cout<<"Chuoi can kiem tra Khong trung voi chuoi ban dau."<<endl;
	}


	return 0;
}
