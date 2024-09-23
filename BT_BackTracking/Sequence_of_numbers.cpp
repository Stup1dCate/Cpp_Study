//1. S = 1^2 + 2^2 + 3^2 + ... + n^2
/*
	#include<iostream>
	using namespace std;
	int Tong(int n){
		if(n==1) return 1;
		return n*n + Tong(n-1);
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//2. S = 1 + 1/2 + 1/3 +...+1/n
/*
	#include<iostream>
	using namespace std;
	float Tong(int n){
		if(n==1) return 1;
		return 1.0/n + Tong(n-1);
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//3. S = 1/1*2 + 1/2*3 + 1/3*4 +...+1/n*(n+1)
/*
	#include<iostream>
	using namespace std;
	float Tong(int n){
		if(n==1) return 1.0/2.0;
		return 1.0/(n*(n+1)) + Tong(n-1);
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	} 
*/


//4. S = 1/2 + 2/3 + 3/4 +...+n/(n+1)
/*
	#include<iostream>
	using namespace std;
	float Tong(int n){
		if(n==1) return 1.0/2.0;
		return (n+0.0)/(n+1) + Tong(n-1);
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//5. S = 1 + 1.2 + 1.2.3 +...+ 1.2...n
/*
	#include<iostream>
	using namespace std;
	long long giaithua(int n){
		int sum=1;
		for(int i=1; i<=n;i++){
			sum*=i;
		}
		return sum;
	}
	float Tong(int n){
		if(n==1) return 1.0;
		return giaithua(n) + Tong(n-1);
	}
	
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//6. S = x + x^2 + x^3 +...+ x^n
/*
	#include<iostream>
	#include<cmath>
	using namespace std;
	int Tong(int n, int x){
		if(n==1) return x;
		return pow(x, n) + Tong(n-1, x);
	}
	int main(){
		int n, x; cin>>n>>x;
		cout<<Tong(n, x);
		return 0;
	}
*/


//7. S = x + x^3 + x^5 +...+ x^(2n+1)
/*
	#include<iostream>
	#include<cmath>
	using namespace std;
	int Tong(int n, int x){
		if(n==1) return x;
		return pow(x, n) + Tong(n-2, x);
	}
	int main(){
		int n, x; cin>>n>>x;
		cout<<Tong(n, x);
		return 0;
	}
*/


//8. S = 1 + 1/1+2 + 1/1+2+3 +...+ 1/1+2+3+...+n
/*
	#include<iostream>
	using namespace std;
	int sum(int n){
		int sum = 0;
		for(int i=0;i<=n;i++){
			sum+=i;
		}
		return sum;
	}
	float Tong(int n){
		if(n==1) return 1;
		return 1.0/sum(n) + Tong(n-1);
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//9. S = x + x^2/1+2 + x^3/1+2+3 +...+ x^n/1+2+3+...+n
/*
	#include<iostream>
	#include<cmath>
	using namespace std;
	int sum(int n){
		int sum = 0;
		for(int i=0;i<=n;i++){
			sum+=i;
		}
		return sum;
	}
	int Tong(int n, int x){
		if(n==1) return x;
		return pow(x, n)/sum(n)+Tong(n-1, x);
	}
	int main(){
		int n, x; cin>>n>>x;
		cout<<Tong(n, x);
		return 0;
	}
*/


//10. S = x + x^2/2! + x^3/3! +...+ x^n/n!
/*
	#include<iostream>
	#include<cmath>
	using namespace std;
	int sum(int n){
		int sum = 0;
		for(int i=0;i<=n;i++){
			sum*=i;
		}
		return sum;
	}
	int Tong(int n, int x){
		if(n==1) return x;
		return pow(x, n)/sum(n)+Tong(n-1, x);
	}
	int main(){
		int n, x; cin>>n>>x;
		cout<<Tong(n, x);
		return 0;
	}
*/


//11. S = sqrt(2 + sqrt( 2+ ... +sqrt(2))) (n dau' can)
/*
	#include<iostream>
	#include<cmath>
	using namespace std;
	float Tong(int n){
		if(n==1) return sqrt(2);
		return sqrt(2+Tong(n-1));
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//12. S = x - x^2 + x^3 - x^4 +...+ (-1)^(n+1).x^n
/*
	#include<iostream>
	using namespace std;
	int sum(int n, int x){
		int S=0.0, ptc=1, dau=1;
		if(n==1) return x;
		for(int i=0;i<n;i++){
			ptc*=x;
			S+=ptc*dau;
			dau=-dau;
		}
		return S;
	}
	int main(){
		int n, x; cin>>n>>x;
		cout<<sum(n, x);
		return 0;
	}
*/


//13. Y1 = 1; Y2 = 2; Y3 = 3. Tinh Yn = Yn-1 + 2.Yn-2 + 3.Yn-3
/*
	#include<iostream>
	using namespace std;
	int Tong(int n){
		if(n==1||n==2||n==3) return n;
		return Tong(n-1) + 2.0*Tong(n-2) + 3.0*Tong(n-3);
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//14. A1 = 1; A2 = 2; A3 = 3. Tinh An = 24.An-1 + 25.An-2 + 10.An-3 + 2018
/*
	#include<iostream>
	using namespace std;
	int Tong(int n){
		if(n==1||n==2||n==3) return n;
		return 24.0*Tong(n-1) + 25.0*Tong(n-2) + 10.0*Tong(n-3) + 2018;
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//15. f1 = f2 = 1 va fn = fn-1 + fn-2 (day so fibonacci).
// S = 1/1+fn + 2/1+fn + 3/1+fn +...+ n/1+fn
/*
	#include<iostream>
	using namespace std;
	long Fi(int n){
		if(n<=2) return 1;
		return Fi(n-1)+Fi(n-2);
	}
	float Tong(int n){
		if(n==1) return 1.0/2.0;
		return Tong(n-1) + n/(1.0+Fi(n));
	}
	int main(){
		int n; cin>>n;
		cout<<Tong(n);
		return 0;
	}
*/


//16. x1 = 1; xn = n(x1 + x2 + x3 +...+xn-1) 
/*
	#include<iostream>
	using namespace std;
	int Tong(int n){
		if(n==1) return 1;
		else{
			int sum =0;
			for(int i=1; i<n; i++){
				sum+=Tong(i);
			}
			return n*sum;
		}
	}
	int main(){
		int n; cin>>n;
		cout <<Tong(n);
		return 0;
	}
*/

/*
	#include<iostream>
	using namespace std;
	int Tong(int n, int arr[], int index) {
	    if (index == 0) return arr[index];
		else {
	        return index*(Tong(n, arr, index - 1)+arr[index]);
	    }
	}
	int main() {
	    int n; cin >> n;
	    int arr[n];
	    for (int i=0;i<n;i++) {
	        arr[i]=i+1;
	    }
	    cout<<Tong(n, arr,n - 1);
	    return 0;
	}
*/


//17. Tinh to hop chap k cua n phan tu 

/*
	#include <iostream>
	using namespace std;
	unsigned long long factorial(int n) {
	    if (n == 0 || n == 1) return 1;
	    else  return n*factorial(n-1); 
	}
	unsigned long long combination(int n, int k) {
	    if (k == 0 || k == n) return 1;
	    else return factorial(n) / (factorial(k) * factorial(n-k));
	}
	
	int main() {
	    int n, k;
	    cout<<"Nhap gia tri cua n: "; cin >> n;
	    cout<<"Nhap gia tri cua k: "; cin >> k;
	    if (k < 0 || k > n) {
	       	cout << "Gia tri k khong hop le!" <<endl;
	    } 
		else {
	        unsigned long long ans = combination(n, k);
	    	cout<<"Tong hop chap "<<k<<" cua "<<n<<" la: "<<ans<<endl;
	    }
	    return 0;
	}
*/


//18. Tim so hang thu n cua day Fibonacci
/*
	#include<iostream>
	using namespace std;
	long long Fi(int n){
		if (n<=2) return 1;
		return Fi(n-1) + Fi(n-2);
	}
	int main(){
		int n; cin>>n;
		cout<<Fi(n);
		return 0;
	}
*/




