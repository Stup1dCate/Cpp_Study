//1. Tim chu so dau tien cua n
/*
#include<iostream>
using namespace std;
int first_num(int n){
	if(n<10 && n>0 || n<0 && n>-10){
		return n;
	}
	else{
		return first_num(n/10.0);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<first_num(n);
	return 0;
}
*/



//2. n co bao nhieu chu so
/*
#include<iostream>
using namespace std;
int Dem(int n){
	if(n<10 && n>0 || n<0 && n>-10){
		return 1;
	}
	else{
		return 1 + Dem(n/10.0);
	}
}
int main(){
	int n;
	cin>>n;
	cout<<Dem(n);
	return 0;
}
*/


//3. n co bao nhieu chu so le.
/*
#include<iostream>
using namespace std;
int Dem(int n){
	if(n<10 && n>0 && n %2!=0|| n<0 && n>-10 && n %2!=0){
		return 1;
	}	
	return ((n/10) % 2 != 0) + Dem(n/10.0);
}
int main(){
	int n;
	cin>>n;
	cout<<Dem(n);
	return 0;
}
*/


//4. Tong cac chu so cua so n
/*
#include<iostream>
using namespace std;
int Tong(int n){
	if(n<10 && n>0 || n<0 && n>-10){
		return 1;
	}
	return n%10+Tong(n/10.0);
}
int main(){
	int n;
	cin>>n;
	cout<<Tong(n);
	return 0;
}
*/


//5. kiem tra n co phai so tien' khong ? (vd: 123, 456, 2345,...) 
/*
#include<iostream>
using namespace std;
bool check(int n) {
    if (n < 10) {
        return true;
    }
    if ((n % 10) < ((n / 10) % 10)) {
        return false;
    }
    return check(n/10);
}

int main() {
    int n; cin >> n;
    if(check(n)) {cout<<"La so tien."<<endl;} 
	else {cout<<"Khong phai so tien."<<endl;}
    return 0;
}
*/


//6. Tim so lon nhat trong cac chu so cua so n nhap vao
/*
#include <iostream>
using namespace std;
int check(int n, int maxDigit) {
    if (n>0 && n<10) {
    	if(n >= maxDigit) return n;
        else return maxDigit;
    }
    int nextDigit = n % 10;
    
    if (nextDigit > maxDigit) {
        maxDigit = nextDigit;
    }
    return check(n/10, maxDigit);
}

int find(int n) {
    if (n == 0) {
        return 0; 
    }
    int maxDigit=n % 10;
    return check(n / 10, maxDigit);
}

int main() {
    int n; cin >> n;
    cout <<find(n)<<endl;
    return 0;
}
*/


//7. Uoc chung lon nhat cua 2 so nhap vao
/*
#include<iostream>
using namespace std;
int ucln(int a, int b){
	if(b==0) return a;
	return ucln(b, a%b);
}
int main() {
    int a, b; cin >> a>>b;
    cout <<ucln(a, b)<<endl;
    return 0;
}
*/


//8. Tim so nghich dao cua so n
/*
#include<iostream> 
#include<cmath>
using namespace std;
int Dem(int n){
	int sum=0;
	while(n>=10){
		n/=10;
		sum++;
	}
	return sum;
}

int Num(int n){
	if(n<10 && n>0){
		return n;
	}
	return (n%10)*pow(10, Dem(n-1)) + Num(n/10);
}

int main(){
	int n; cin>>n;
	cout<<Num(n);
	return 0;
}
*/


//9. Kiem tra so n co dang: 3^k khong ? 
/*
#include<iostream>
using namespace std;
float check(int n){
	if(n==1) return true;
	if(n%3!=0 || n<=0) return false;
	return check(n/3.0);
}
int main(){
	int n; cin>>n;
	if(check(n)){
		cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	return 0;
}
*/


//10. Tim uoc so le lon nhat cua mot so
/*
#include<iostream>
using namespace std;
int check(int n, int temp){
	if(temp > n){
		return 0;
	}
	if(n%temp==0 && temp%2!=0){
		int uocso_max = check(n, temp+1);
			if(uocso_max == 0) return temp;
		return uocso_max;
	}
	return check(n, temp+1);
}
int start(int n){
	if(n==0) return 0;
	return check(n, 1);
}

int main(){
	int n; cin>>n;
	if(start(n)!=0){
		cout<<start(n);
	}
	return 0;
}
*/


//11. Chuyen so thap phan sang nhi phan
/*
#include <iostream>
using namespace std;
int Binary(int n) {
    if (n == 0) {
        return 0;
    }
    Binary(n/2);
    cout<<n%2;
}

int main() {
    int n; cin >> n;
    Binary(n);
    return 0;
}
*/







