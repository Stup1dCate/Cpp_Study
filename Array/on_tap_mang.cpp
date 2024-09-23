/*B�i 1: Viet chuong tr�nh nhap v�o 1 so nguy�n n (2 <= n <= 10). Nhap mang c� n sa nguy�n. 
//H�y sap xep lai mang d� theo thu tu giam dan v� in ra m�n h�nh. */

/*
#include <iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so luong ki tu trong mang: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1;i>0;i--){
		for(int j=0; j<i;j++){
			if (a[j]<a[j+1]){
				int m=a[j];
				a[j]=a[j+1];
				a[j+1]=m;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
*/





/*B�i 2: Vi?t chuong tr�nh nh?p v�o 1 s? nguy�n n (2 <= n <= 10). Nh?p m?ng c� n s? nguy�n v� nh?p s? nguy�n k. 
H�y ki?m tra xem trong m?ng c� xu?t hi?n 2 ph?n t? c� t?ng b?ng k hay kh�ng,
n?u c� h�y in ra m�n h�nh v? tr� c?a 2 ph?n t? d� (l?y 2 v? tr� d?u ti�n t�m du?c)


#include <iostream>
using namespace std;
int main (){

	int n, a[1000];
	cout<<"nhap vao so luong ki tu trong mang: ";
	cin>>n;
	
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	int k;
	cout<<"nhap vao mot so bat ki: ";
	cin>>k;
	
 	for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] + a[j] == k) {
                cout << "Vi tri cua 2 phan tu co tong bang " << k << " la " << i << " va " << j << endl;
                return 0;
            }
        }
    }
    
    cout << "hong tim thay 2 vi tri co phan tu bang " << k << endl;
    return 0;
}
*/
 
 
 
 
/*3: Viet chuong tr�nh nhap v�o 2 ma tran c� n h�ng v� m cot (0 < n <= 10, 0 < m <= 10). 
In ra tong cua 2 ma tran do 

#include <iostream>
using namespace std;
int main(){

	int n, m, a1[10][10], a2[10][10];
	
	cout<<"nhap vao so hang: ";
	cin>>n;
	cout<<"nhap vao so cot: ";
	cin>>m;
	
	cout<<"nhap vao ma tran thu nhat: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a1[i][j];
		}
		cout<<endl;
	}
	
	cout<<"nhap vao ma tran thu hai: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a2[i][j];
		}
		cout<<endl;
	}
	cout<<"tong cua hai ma tran la: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a1[i][j]+a2[i][j]<<" ";
		}
		cout<<endl;
	}

return 0;
}

*/






/*4 Viet chuong tr�nh nhap v�o 1 ma tran c� n h�ng v� m cot 
In ra m�n h�nh tong cua c�c so le xuat hien trong ma tran.


#include <iostream>
using namespace std;
int main ()
{
	int n, m, a[10][10];
	cout<<"nhap vao so hang cua ma tran: ";
	cin>>n;
	cout<<"nhap vao so cot cua ma tran: ";
	cin>>m;
	
	
	cout<<"nhap ma tran: \n";
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	int s=0;
	cout<<"tong cac so le la: ";
	for (int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] % 2 !=0){
				s+=a[i][j];
		}	
	}
}
	cout<<s;
return 0;

}
*/
 
// T�nh tong, tich v� gi� tri trung b�nh cua mot mang:
/*#include <iostream>
using namespace std;
int main(){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	cout<<"nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int S=0;
	cout<<"tong cua cac phan tu la: ";
	for (int i=0;i<n;i++){
		S+=a[i];
	}
	cout<<S<<endl;
	long P=1;
	cout<<"tich cua cac phan tu la: ";
	for (int i=0;i<n;i++){
		P*=a[i];
	}
	cout<<P<<endl;
	float T;
	T=(float) S/n;
	cout<<"gia tri trung binh cua mang la: "<<T<<endl;
	return 0;
}



//Tim max min cua mang:
#include <iostream>
using namespace std;
int main (){
	int n, a[1000];
	cout<<"nhap vao so phan tu cua mang: ";
	cin>>n;
	cout<<"nhap mang: ";
	for (int i=0;i<n;i++){
		cin>>a[i];
	}
	int Max = a[0];
	cout<<"phan tu co gia tri lon nhat trong mang la: ";
		for (int i=0;i<n;i++){
		if (Max <a[i]){
			Max=a[i];
		}
	}
	cout<<Max<<endl;
	int Min = a[0];
	cout<<"phan tu co gia tri nho nhat trong mang la: ";
		for (int i=0;i<n;i++){
		if (Min>a[i]){
			Min=a[i];
		}
	}
	cout<<Min<<endl;
	return 0;
}
 */
 
 
 
 //tim phan tu suat hien nhieu nhat trong mang va suat hien bao nhieu lan:
 /*
 #include <iostream>
 using namespace std;
 int main(){
	int n;
	int a[10][10];
	cout<<"nhap vao cap cua ma tran vuong: ";
	cin>>n;

	cout<<"nhap matran: \n";
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
	}
}
	cout<<"dinh thuc cua ma tran la: ";
	// tich duong cheo chinh:
	int P=1;
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				P*=a[i][j];
			}
		}
	}
	for (int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i==j){
				P*=a[i][j];
			}
		}
	}
	
	return 0;
}
*/

 
 
 
 
 
 
 
 
 
 








































