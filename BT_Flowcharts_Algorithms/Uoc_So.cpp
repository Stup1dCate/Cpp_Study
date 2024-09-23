
//1.liet kê tat ca "uoc so" cua so nguyên duong n.
/*
	#include <iostream>
	using namespace std;
	int kt(int &n);
	int main(){
		int n;
		cout<<"Nhap vao so can kiem tra: ";
		cin>>n;
		kt(n);
		return 0;
	}
	
	int kt(int &n){
		cout<<"Cac uoc so cua "<<n<<" lan luot la: \n";
		for(int i=1;i<=n;i++){
			if(n % i==0){
				cout<<i<<" ";
			}
		}
	}
*/


//2.tính tong tat ca "uoc so" cua so nguyên duong n.
/*
	#include <iostream>
	using namespace std;
	int kt(int &n);
	int main(){
		int n;
		cout<<"Nhap vao so can kiem tra: ";
		cin>>n;
		kt(n);
		
		return 0;
	}
	
	int kt(int &n){
		int t=0;
		cout<<"Tong tat ca cac uoc so cua so "<<n<<" la: ";
		for(int i=1;i<=n;i++){
			if(n % i==0){
				t+=i;
			}
		}
		cout<<t;
	}
*/


//3.tính tích tat ca "uoc so" cua so nguyên duong n.
/*
	#include <iostream>
	using namespace std;
	int kt(int &n);
	int main(){
		int n;
		cout<<"Nhap vao so can kiem tra: ";
		cin>>n;
		kt(n);
		
		return 0;
	}
	
	int kt(int &n){
		int t=1;
		cout<<"Tich tat ca cac uoc so cua so "<<n<<" la: ";
		for(int i=1;i<=n;i++){
			if(n % i==0){
				t*=i;
			}
		}
		cout<<t;
	}
*/


//4.dem so luong "uoc so" cua so nguyên duong n.
/*
	#include <iostream>
	using namespace std;
	int kt(int &n);
	int main(){
		int n;
		cout<<"Nhap vao so can kiem tra: ";
		cin>>n;
		kt(n);
		
		return 0;
	}
	
	int kt(int &n){
		int t=0;
		cout<<"So luong uoc so cua so "<<n<<" la: ";
		for(int i=1;i<=n;i++){
			if(n % i==0){
				t++;
			}
		}
		cout<<t;
	}
*/


//5.liet kê tat ca "uoc so le" cua so nguyên duong n.
/*
	#include <iostream>
	using namespace std;
	int kt(int &n);
	int main(){
		int n;
		cout<<"Nhap vao so can kiem tra: ";
		cin>>n;
		kt(n);
		
		return 0;
	}
	
	int kt(int &n){
		int t=0;
		cout<<"Cac so la uoc so le cua so "<<n<<" lan luot la: ";
		for(int i=1;i<=n;i++){
			if(n % i==0 && i % 2 != 0){
				cout<<i<<" ";
			}
		}
	}
*/


//6.tính tong tat ca "uoc so chan" va "uoc so le" cua so nguyên duong n.
/*
	#include <iostream>
	using namespace std;
	int kt1(int &n);
	int kt2(int &n);
	int main(){
		int n;
		cout<<"Nhap vao so can kiem tra: ";
		cin>>n;
		kt1(n);
		kt2(n);
		
		return 0;
	}
	
	int kt1(int &n){
		int t=0;
		cout<<"Tong tat ca cac uoc so chan cua so "<<n<<" la: ";
		for(int i=1;i<=n;i++){
			if(n % i==0 && i % 2 == 0){
				t+=i;
			}
		}
		cout<<t;
		cout<<endl;
	}
	int kt2(int &n){
		int t=0;
		cout<<"Tong tat ca cac uoc so le cua so "<<n<<" la: ";
		for(int i=1;i<=n;i++){
			if(n % i==0 && i % 2 != 0){
				t+=i;
			}
		}
		cout<<t;
	}
*/
