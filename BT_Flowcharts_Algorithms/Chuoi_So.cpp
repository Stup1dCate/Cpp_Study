//1. S(n) = 1+2+3+...+n
/*
		#include<iostream>
		using namespace std;
		int tong(int n);
		int main(){
			int n;
			cout<<"Nhap vao gia tri can tinh: ";
			cin>>n;
			tong(n);
			cout<<"Tong cac so tu 1 den "<<n<<" la: "<<tong(n);
			return 0;
		}
		int tong(int n){
			int t=0;
			for (int i=1;i<=n;i++){
				t+=i;
			}
			return t;
		}
*/


//2. S(n) = 1^2+2^2+3^2+...+n^2
/*
		#include<iostream>
		using namespace std;
		int tong(int n);
		int main(){
			int n;
			cout<<"Nhap vao gia tri can tinh: ";
			cin>>n;
			tong(n);
			cout<<"Tong binh phuong cac so tu 1 den "<<n<<" la: "<<tong(n);
			return 0;
		}
		int tong(int n){
			int t=0;
			for (int i=1;i<=n;i++){
				t+=i*i;
			}
			return t;
		}
*/


//3. S(n) = 1+1/2 +1/3 +...+ 1/n
/*
		#include<iostream>
		using namespace std;
		float tong(int n);
		int main(){
			int n;
			cout<<"Nhap vao gia tri can tinh: ";
			cin>>n;
			tong(n);
			cout<<"S(n) = "<< tong(n);
			return 0;
		}
		float tong(int n){
			float t=0;
			for (int i=1;i<=n;i++){
				t+=(1.0/i);
			}
			return t;
		}
*/


//4. S(n) = 1/2 + 1/4 +...+ 1/2n
/*
		#include<iostream>
		using namespace std;
		float tong(int n);
		int main(){
			int n;
			cout<<"Nhap vao gia tri can tinh: ";
			cin>>n;
			tong(n);
			cout<<"S(n) = "<< tong(n);
			return 0;
		}
		float tong(int n){
			float t=0;
			for (int i=1;i<=n;i++){
				t+=1.0/(2.0*i);
			}
			return t;
		}
*/


//5. S(n) = 1+ 1/3 + 1/5 +...+1/2n+1
/*
		#include<iostream>
		using namespace std;
		float tong(int n);
		int main(){
			int n;
			cout<<"Nhap vao gia tri can tinh: ";
			cin>>n;
			tong(n);
			cout<<"S(n) = "<< tong(n);
			return 0;
		}
		float tong(int n){
			float t=0;
			for (int i=0;i<=n;i++){
				t+=1.0/(2.0*i+1);
			}
			return t;
		}
*/


//6. S(n) = 1/2 + 3/4 + 5/6 +...+ (2n+1)/(2n+2)
/*
		#include<iostream>
		using namespace std;
		float tong(int n);
		int main(){
			int n;
			cout<<"Nhap vao gia tri can tinh: ";
			cin>>n;
			tong(n);
			cout<<"S(n) = "<< tong(n);
			return 0;
		}
		float tong(int n){
			float t=0;
			for (int i=0;i<=n;i++){
				t+=(2.0*i+1)/(2.0*i+2);
			}
			return t;
		}
*/


//7. T(x, n) = x^n
/*
		#include<iostream>
		#include<cmath>
		using namespace std;
		int T(int x);
		int main(){
			int x, n;
			cout<<"Nhap vao so can tinh: ";
			cin>>x;
			cout<<"Nhap vao so mu cua so "<<x<<": ";
			cin>>n;
			cout<<"T(x, n) = "<<pow(x, n);
			return 0;
		}
*/


//8. S(n) = x + x^3 + x^5 +...+ x^(2n+1) 
/*
		#include<iostream>
		#include<cmath>
		using namespace std;
		long long tong(unsigned int n, int x);
		int main(){
			int x, n;
			cout<<"Nhap vao so can tinh: ";
			cin>>x;
			cout<<"Nhap vao so mu cua so "<<x<<": ";
			cin>>n;
			tong(n, x);
			return 0;
		}
		long long tong(unsigned int n, int x){
			cout<<"S(n) = ";
			int t=0;
			for(int i=1;i<=(2.0*n+1);i+=2){
				t+= pow(x, i);
			}
			cout<<t;
		}
*/


//9. S(n) = 1 + 1/(1+2) + 1/(1+2+3) + ... + 1/(1+2+3+...+n) <=> 2/n(n+1)
/*
		#include<iostream>
		using namespace std;
		float tong(unsigned int n);
		int main(){
			int n;
			cout<<"Nhap n: ";
			cin>>n;
			tong(n);
			return 0;
		}
		float tong(unsigned int n){
			cout<<"S(n) = ";
			float t=0;
			for(int i=1;i<=n;i++){
				t+= 2.0/(i*(i+1.0));
			}
			cout<<t;
		}
*/


//10. S(n) = 1 + x + x^3/3! +x^5/5! + ... + ((x^(2n+1))/(2n+1)!)
/*
		#include<iostream>
		#include<cmath>
		using namespace std;
		int main () {
		    int n;
		    float x, T=1, S=1;
		    cout<<"Nhap x: ";
		    cin>>x;
		    cout<<"Nhap n: ";
		    cin>>n;
		    for(int i=0; i<= n;i++) { // tinh boi so
		        T = pow(x, (2*i+1));
		        int N = 1;
			        for(int j=1;j<=i*2+1; j++) { // tinh giai thua
			            N*=j;
			        }
			    S +=T/N; // tinh S(n)
		    }
		    cout<<"S(n) = "<<S;
			return 0;
		}
*/


//11. S(n) = x + x^2/(1+2) + x^3/(1+2+3) + ... + x^n/(1+2+3+...+n)
/*
		#include<iostream>
		#include<cmath>
		using namespace std;
		int main(){
			int n;
			float x, T=1, S=0;
			cout<<"Nhap x: ";
			cin>>x;
			cout<<"Nhap n: ";
			cin>>n;
			for (int i=1; i<=n;i++){
				T = pow(x, i);
				int N=0;
				for(int j=0;j<=i;j++){
					N+=j;
				}
				S+=T/N;
			}
			cout<<"S(n) = "<<S;
			return 0;	
		}
*/


//12. S(n) = sqrt(1/2 + sqrt (2/3 + sqrt(3/4+...+ n/n+1)))
/*
		#include<iostream>
		#include<cmath>
		using namespace std;
		float hamU(int &n);
		int main(){
			int n;
			cout<<"Dap so: "<<hamU(n);
			return 0;
		}
		float hamU(int &n){
			cin>>n;
			float s=0;
			for(int i=1;i<=n;i++){
				s=sqrt(s+1.0*i/(i+1));
			}
			return s;
		}
*/


//13. S(n) = x - x^2 + x^3 - x^4 + ... +(-1)^(n+1).x^n
/*
		#include<iostream>
		using namespace std;
		
		int tong(int x, int n) {
		    int sum = 0, ptc = 1, dau = 1; 
		
		    for(int i = 1; i <= n; i++) {  
		        ptc = ptc * x;            
		        sum += ptc;          
		        dau = -dau;             
		    }
		
		    return sum;
		}
		
		int main() {
		    int x, n;
		    cin >> x >> n;            
		    cout << tong(x, n);        
		    return 0;
		}
*/		



