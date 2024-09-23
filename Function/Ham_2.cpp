/*
#include <iostream>
using namespace std;
int TongCacSoLe(int a[], int n, int s = 0)
{
    
    for(int i = 0; i < n; i++)
    {
    if(a[i] % 2==1){
        s+=a[i];
        }
    }
    return s;
}

int main()
{
    int a[10];
    int n;
	cout<<"nhap vao so phan tu cua mang: ";
    cin >> n;
    cout<<"nhap mang: \n";
    for(int i = 0; i < n; i++)
    {
    	cout<<"a["<<i<<"]: ";
        cin >> a[i];
    }
	cout<<"tong cac so le trong mang la: ";
    cout << TongCacSoLe(a, n);

    return 0;
}
*/





/*
#include <iostream>
#include <math.h>
using namespace std;

bool SoNT(int n){
	if (n<=1){
		return 0;
	}
    for(int i = 2; i <n; i++){
        if (n % i == 0 ){  						
            return 0;
		}
    }
    return 1;
}

int Tong(int a[], int n, int s=0){
	
     for(int i = 0; i < n; i++){
        if (SoNT(a[i])){
            s+=a[i];
        }
    }
    return s;
}

int main()
{
    int n;
    int a[100];
	cout<<"nhap vao so phan tu cua mang: ";
    cin >> n;
	cout<<"nhap mang: \n";
	
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
	cout<<"Tong cac so nguyen to co trong mang la: ";
    cout<<Tong(a, n);

    return 0;
}
*/

/*
#include <iostream>
using namespace std;
void swap(int a, int b)
{
    int c=a;
    a=b;
    b=c;
    
}

int main()
{
    int a, b;

    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b;

    return 0;
}
*/





/*
#include <iostream>
using namespace std;
void SX(int numbers[], int n)
{
    int s;
    for (int i=n-1;i>0;i--){
        for (int j=0;j<i;j++){
            if (numbers[j]>numbers[j+1]){
                s=numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=s;
            }
        }
    }
}

void nhap(int a[], int n){


    for(int i = 0; i < n; i++)
    
        cin >> a[i];
    
}

void xuat(int a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{
    int numbers[10];
    int n;
	cout<<"nhap vao so luong phan tu cua mang: ";
    cin >> n;
    cout<<"nhap mang: ";
    nhap(numbers, n);
    SX(numbers, n);
    xuat(numbers, n);

    return 0;
}
*/



/*
#include<iostream>
using namespace std;

int ngto(int n){
	if (n <=1 ){
	return 0;
    }
    for (int i=2;i<n;i++){
    	if (n%i==0){
    		return 0;
		}		
	}
	return 1;
}

int tong(int n){
	if (n==1)
	return 1;
	return n+tong(n-1);
} 
	
long long giaithua(int n){
	if (n==1)
	return 1;
	return n*giaithua(n-1);
}

int main (){
	int n;
	cout<<"Nhap vao mot so: ";
	cin>>n;


	if (ngto(n))
		cout<<n<<" la so nguyen to."<<endl;
	else{
		cout<<n<<" khong phai so nguyen to."<<endl;
	}

	cout<<"Giai thua cua "<<n<<" la: "<<giaithua(n)<<endl; 
	cout<<"Tong tu 1 den "<<n<<" la: "<<tong(n); 
	return 0;
}
*/



/*
#include <iostream>
using namespace std;
// kiem tra so nguyen to
int ngto(int n){
	if (n<=1)
	return 0;
	for (int i=2;i<n;i++){
		if (n%i==0){
			return 0;
		}
	}
	return 1;
}

int main (){
	int n, s;
	cout<<"nhap vao mot so: ";
	cin>>n;
	cout<<"tong cac so nguyen to tu 2 den "<<n<<" la: "<<s<<endl;
	
	return 0;
}
*/
/*
#include <iostream>
using namespace std;

bool ngto(int n) {
    if (n < 2) 
        return false;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, s = 0;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    for (int i = 2; i <n; ++i) {
        if (ngto(i)) {
            s += i;
        }
    }

    cout << "Tong cac so nguyen to tu 2 den " << n << " la: " << s << endl;

    return 0;
}
*/


/*
#include <iostream>
using namespace std;

bool ngto(int n) {
    for (int i=2;i<n;i++){
  
    	if (n%i==0||n<=1){
    		return false;
		}
	}
    return true;

}

int tong(int n) {
    if (n==2)
    {
    	return 2;
	}
	if (ngto(n))
	{
		return n + tong(n-1);
	}
	return tong(n-1);
}

int main() {
    int n;

    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << "Tong cac so nguyen to tu 2 den " << n << " la: " << tong(n) << endl;

    return 0;
}
*/









































