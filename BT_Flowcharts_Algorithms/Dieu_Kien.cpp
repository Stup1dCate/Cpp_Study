//1. f(x) = { 2x^2 + 5x +9	khi x>=5 
//			{ 2x^2 + 4x -9	khi x<5
/*
		#include<iostream>
		#include<cmath>
		using namespace std;
		int main(){
			float x;
			cout<<"Nhap vao gia tri x: ";
			cin>>x;
			float T=1;
			if (x >= 5){
				T= 2.0*(pow(x, 2.0)) + 5.0*x + 9.0;
			}
			else{
				T= 2.0*(pow(x, 2.0)) + 4.0*x - 9.0;
			}
			cout<<"Dap so cua phuong trinh la: "<<T;
			return 0;
		}
*/


//2. Nhap vao so luong tien bat ky. Voi 3 loai tien menh gia: 1000d, 2000d, 5000d, 10000d, 20000d, 50000d,
// Lap chuong tình tìm tat ca các phuong án có the tu 3 loai menh gia tren de co so luong tien nhap vao 
/*
	#include<iostream>
	using namespace std;
	void TruongHop(int n);
	int main(){
		long long n;
		cout<<"Nhap vao so tien (vnd): ";
		cin>>n;
		int TH=0;
		TruongHop(n);
	}
	void TruongHop(int n){
		int TH=0;
	  		for (int t1 = 0; t1 <= n / 1000; t1++) {
			    for (int t2 = 0; t2 <= n / 2000; t2++) {
				    for (int t5 = 0; t5 <= n / 5000; t5++) {
					    for (int t10 = 0; t10 <= n / 10000; t10++) {  
					    	for (int t20 = 0; t20 <= n / 20000; t20++) {
				                int tong = t1 * 1000 + t2 * 2000 + t5 * 5000 + t10*10000+t20*20000;
				                if (tong == n) {
				                TH++;
				                cout << "Truong hop " << TH << ": " << t1 << " to 1k, " << t2 << " to 2k, " << t5 << " to 5k, " <<t10<<" to 10k, "<<t20<<" to 20k, "<<endl; 
			                }
			            }
			        }
			    }
			}
	    }
	}
*/		



//3. Viet chuong trình nhap vào mot so nguyên có ba chu so. Hãy in ra cách doc cua nó.


























//4. Viet chuong trình nhap 3 canh cua mot tam giác. Hãy cho biet dó là tam giác gì? 
/*
		#include<iostream>
		using namespace std;
		int main(){
			int a, b, c;
			cout<<"Nhap vao canh thu nhat cua tam giac: ";
			cin>>a;
			cout<<"Nhap vao canh thu hai: ";
			cin>>b;
			cout<<"Nhap vao canh thu ba: ";
			cin>>c;
			if(a+b>c && a+c>b && b+c>a){
				if(a==b && b==c){
					cout<<"Ba canh vua nhap tao thanh tam giac deu."<<endl;
				}
				else if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a){
					cout<<"Ba canh vua nhap tao thanh tam giac vuong."<<endl;
				}
				else if(a==b || b==c || c==a){
					cout<<"Ba canh vua nhap tao thanh tam giac can."<<endl;
				}
				else{
					cout<<"Ba canh vua nhap tao thanh tam giac thuong."<<endl;
				}
			}
			else{
				cout<<"Ba canh vua nhap khong the tao thanh tam giac."<<endl;
			}
		}
*/


//5. Tinh tong cac chu so cua mot so duong nhap vao.
/*
		#include<iostream>
		using namespace std;
		int tong(int n);
		int main(){
			int n;
			cout<<"Nhap vao mot so: ";
			cin>>n;
			tong(n);
			cout<<"Tong cac chu so cua so "<<n<<" la: "<<tong(n);
			return 0;	
		}
		int tong(int n){
			if(n<10 && n>=0){
			return n;
			}
			if (n<0){
				return 0;
			}
			int t=1, s=0;
			while(n>0){
				t=n%10;
				s+=t;
				n/=10;
			}
			return s;
		}
*/



//6. Tìm sô hoàn hao (Tong cac uoc so khác nó bang chính nó)
/*
		#include<iostream>
		using namespace std;
		int kt(int &n);
		int main(){
			int n;
			cout<<"Nhap vao mot so can kiem tra: ";
			cin>>n;
			kt(n);
			return 0;
		}
		int kt(int &n){
			int t=0, N;
			N=n;
			for(int i=1;i<n;i++){
				if(n % i==0){
					t+=i;
				}
			}
			if(t==N){
				cout<<"So "<<N<<" la so hoan hao"<<endl;
			}
			else{
				cout<<"So "<<N<<" khong phai so hoan hao"<<endl;
			}
		}
*/



//7. tim to hop châp k cua n.
/*
		#include<iostream>
		using namespace std;
		long gt1(int n, int k);
		long gt2(int n, int k);
		long gt3(int n, int k);
		int main(){
			int n, k;
			cout<<"Nhap n: ";
			cin>>n;
			cout<<"Nhap k: ";
			cin>>k;
			if (k<0 || k > n ){
				cout<<"So da nhap khong hop le !";
				return 0;
			}
		
			gt1(n, k);
			gt2(n, k);
			gt3(n, k);
			cout<<"To hop chap k cua n la: "<< (gt1(n, k))/(gt2(n, k)*gt3(n, k));
			return 0;
		}
		long gt1(int n, int k){
			int s1=1;
			for(int i=1;i<=n;i++){
				s1*=i;
			}
			return s1;
		}
		long gt2(int n, int k){
			int s2=1;
			for(int i=1;i<=k;i++){
				s2*=i;
			}
			return s2;
		
		}
		long gt3(int n, int k){
			int s3=1;
			for(int i=1;i<=n-k;i++){
				s3*=i;
			}
			return s3;
		}
*/

	
