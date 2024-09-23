///                                               BAI TAP MANG MOT CHIEU



// BAI 1: 
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: "<<endl;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Cac phan tu am co trong mang la: ";
	for(int i=0;i<n;i++){
		if(a[i]<0){
			cout<<a[i]<<" ";
		}
	}	
	return 0;
}
*/


//BAI 2:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int s=0;
	for(int i=0;i<n;i++){
		if (a[i]<0){
			s+=1;
		}
	}
	cout<<"so luong phan tu am trong mang la: "<<s;
	return 0;
}
*/



// BAI 3:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"cac phan tu cua mang lan luot la: ";
	for (int i=0; i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
*/



//BAI 4:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int s=0;
	cout<<"tong cac gia tri cua phan tu trong mang la: ";
	for (int i=0;i<n;i++){
		s+=a[i];
	}
	cout<<s;
	return 0;
}
*/






//BAI 5:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"cac phan tu chan cua mang lan luot la: ";
	for(int i=0;i<n;i++){
		if (a[i]%2==0){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	cout<<"cac phan tu le cua mang lan luot la: ";
	for(int i=0;i<n;i++){
		if (a[i]%2==1){
			cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	return 0;
}
*/




//BAI 6:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int M=a[0];
	cout<<"phan tu lon nhat trong mang la: ";
	for (int i=0;i<n;i++){
		if (M<a[i]){
			M=a[i];
		}
	}
	cout<<M<<endl;
	int m=a[0];
	cout<<"phan tu nho nhat trong mang la: ";
	for (int i=0;i<n;i++){
		if (m>a[i]){
			m=a[i];
		}
	}
	cout<<m<<endl;
	return 0;
}
*/









//BAI 7:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x, y;
	cout<<"vi tri can chen them ky tu vao trong mang: ";
	cin>>x;
	cout<<"gia tri cua ky tu can chen vao la: ";
	cin>>y;
	for(int i=n;i>x;i--){
		a[i]=a[i-1];
	}
	a[x]=y;
	n++;
	
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
*/





//BAI 9:

#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"mang sau khi sap xep theo thu tu tang dan la: ";
	for (int i=n;i>0;i--){
		for (int j=0;j<n;j++){
			if(a[j]>a[j+1]){
				int b = a[j];
				a[j]=a[j+1];
				a[j+1]=b;
			}	
		}
    }
    
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}

	return 0;
}








// BAI 15:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"mang gom cac so chan: ";
    for (int i=0;i<n;i++){
    	if (a[i]%2==0){
    		cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	
	cout<<"mang gom cac so le: ";
	for (int i=0;i<n;i++){
    	if (a[i]%2==1){
    		cout<<a[i]<<" ";
		}
	}
	cout<<endl;
	
	return 0;
}
*/









//BAI 16:
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	cout<<"mang sau khi dao nguoc la: ";
	for (int i=0; i<n/2; i++)
	{
        int b = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = b;
    }
    for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
*/









//BAI 14:
/*
#include <iostream>
using namespace std;

int main() {
  	int n1, n2, a1[1000], a2[1000];
  	cout<<"nhap so luong ky tu cua mang thu nhat: ";
  	cin>>n1;
  	
  	cout<<"nhap mang thu nhat: ";
	for(int i=0;i<n1;i++){
		cin>>a1[i];
	}
	
  	cout<<"nhap so luong ky tu cua mang thu hai: ";
	cin>>n2;
	
	cout<<"nhap mang thu hai: ";
	for(int i=0;i<n2;i++){
		cin>>a2[i];
	}
	
	int n3 = n2+n1;
	int a3[n3];
	
    	for (int i = 0; i < n1; i++) {
        a3[i] = a1[i];
    }

    	for (int i = 0; i < n2; i++) {
        a3[n1+i] = a2[i];
    }

    cout << "Mang sau khi ket hop: ";
    for (int i = 0; i < n3; i++) {
        cout << a3[i] << " ";
    }
    cout<<endl;

    return 0;
}
*/










//BAI 12: xoa cac phan tu trung lap trong mot mang
/*
#include <iostream>
using namespace std;
int main()
{
    int a[1000], n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin>>n;
    int j = 0;
    cout<<"Nhap mang: "<<endl;
    for(int i=0;i<n;i++){
    	cin>>a[i];
    }

    for (int i = 0; i < n; i++){
        if (a[i] != a[i + 1]){
            a[j++] = a[i];
        }
    }
    n = j;
    cout<<"Mang sau khi xoa cac phan tu trung lap la: \n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}




//Xoa mot phan tu ra khoi mang: 
/*
#include<iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	cout<<"nhap mang: ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int x;
	cout<<"nhap vi tri phan tu can xoa: ";
	cin>>x;
	for(int i=x-1;i<=n;i++){
		a[i]=a[i+1];
		n--;
	}
	cout<<"mang sau khi xoa phan tu "<<x<<" la: ";
	for (int i=0;i<=n;i++){
		cout<<a[i]<<" ";
	}
		return 0;
}
*/








