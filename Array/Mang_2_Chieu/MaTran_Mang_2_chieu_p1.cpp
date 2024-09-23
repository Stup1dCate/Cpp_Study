//1. Tinh tong cac so duong trong matran so thuc
/*
		#include <iostream>
		using namespace std;
		int main(){
			int n, m, a[10][10];
			cout<<"Nhap vao so dong cua ma tran: ";
			cin>>n;
			cout<<"Nhap vao so cot cua ma tran: ";
			cin>>m;
			cout<<"Nhap ma tran: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
			int sum=0;
			cout<<"Tong cac gia tri duong trong ma tran la: ";
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(a[i][j]>0){
						sum+=a[i][j];
					}
				}
			}
			cout<<sum;
			return 0;
		}
*/


//2. Tinh trung binh nhan cua cac so duong trong matran
/*
		#include <iostream>
		using namespace std;
		int main(){
			int n, m, a[10][10];
			cout<<"Nhap vao so dong cua ma tran: ";
			cin>>n;
			cout<<"Nhap vao so cot cua ma tran: ";
			cin>>m;
			cout<<"Nhap ma tran: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
			float T=1, s=0;
			cout<<"Trung binh nhan cua cac so duong trong ma tran la: ";
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(a[i][j]>0){
						T*=a[i][j];
						s++;
					}
				}
			}
			cout<<T/s;
			return 0;
		}
*/


//3. Tinh tong cac gia tri tren cung mot dong hoac cung mot cot tu chon cua matran
/*
		#include <iostream>
		using namespace std;
		int main(){
			int n, m, a[10][10];
			cout<<"Nhap vao so dong cua ma tran: ";
			cin>>n;
			cout<<"Nhap vao so cot cua ma tran: ";
			cin>>m;
			cout<<"Nhap ma tran: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
			int x;
			cout<<"Chon cac yeu cau: "<<endl;
			cout<<"1. Xoa hang."<<endl;
			cout<<"2. Xoa cot."<<endl;
			cout<<"Chon so (1 & 2): ";
			cin>>x;
			if(x == 1){
				int h;
				cout<<"Nhap vao hang can xoa: ";
				cin>>h;
				if(h< 1 || h>n){
					cout<<"So da nhap khong hop le !";
					return 0;
				}
				else{
					for(int i=h-1;i<n;i++){
						for(int j=0;j<m;j++){
							a[i][j]=a[i+1][j];
						}
					}
					n--;
				}
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						cout<<a[i][j]<<"   ";
					}
					cout<<endl;
				}
			}
			else if(x==2){
				int c;
				cout<<"Nhap vao cot can xoa: ";
				cin>>c;
				if(c< 1 || c>m){
					cout<<"So da nhap khong hop le !";
					return 0;
				}
				else{
					for(int i=0;i<n;i++){
						for(int j=c-1;j<m;j++){
							a[i][j]=a[i][j+1];
						}
					}
					m--;
				}
				cout<<"Ma tran sau khi xoa cot so "<<c<<" la: "<<endl;
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						cout<<a[i][j]<<"   ";
					}
					cout<<endl;
				}
			}
			else {
				cout<<"So da chon khong hop le ! Ket thuc chuong trinh. "<<endl;
			}
			return 0;
		}
*/



//4. Thay tat ca cac gia tri am trong matran thanh tri tuyet doi cua no
/*
		#include <iostream>
		using namespace std;
		int main(){
			int n, m, a[10][10];
			cout<<"Nhap vao so dong cua ma tran: ";
			cin>>n;
			cout<<"Nhap vao so cot cua ma tran: ";
			cin>>m;
			cout<<"Nhap ma tran: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
			cout<<"Ma tran sau khi chuyen tat ca phan tu am thanh duong la: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					if(a[i][j]<0){
						a[i][j]=-a[i][j];
					}
				}
			}
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<a[i][j]<<" ";
				}
				cout<<endl;
			}
			return 0;
		}
*/



//5(*). Dem so luong gia tri "yen ngua" trong matran (gia tri "yen ngua" la gia tri lon nhat tren dong nhung nho nhat tren cot)
/*

		#include <iostream>
		using namespace std;
		void kt(int n, int m, int a[10][10]);
		int main(){
			int n, m, a[10][10];
			cout<<"Nhap vao so dong cua ma tran: ";
			cin>>n;
			cout<<"Nhap vao so cot cua ma tran: ";
			cin>>m;
			cout<<"Nhap ma tran: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
			kt(n, m, a);
			return 0;
		}
		
		
		void kt(int n, int m, int a[10][10]) {
			for (int i=0; i<n;i++) {
		        int max=a[i][0];
		        int cot=0;
		
		        for (int j=0;j<m;j++) {
		            if (a[i][j]>max) {
		                max=a[i][j];
		                cot=j;
		            }
		        }
			        bool KT = true;
			        for (int k=0;k<n;k++) {
			            if (a[k][cot]<max) {
			                KT=false;
			                break;
			            }
			        }
		        if (KT) {
		            cout << "So 'yen ngua' la: " <<max<<endl;
		            break;
		        } 
				else {
		        	cout<<"Khong co gia tri 'yen ngua' trong ma tran tren."<<endl;
		        	break;
				}
			}
		}
*/



//6(*). Tim ma tran con co tong lon nhat (tong cac gia tri trong ma tran con)


// 	         									TEST

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
   int n, m, a[10][10];
		cout<<"Nhap vao so dong cua ma tran: ";
		cin>>n;
		cout<<"Nhap vao so cot cua ma tran: ";
		cin>>m;
		cout<<"Nhap ma tran: "<<endl;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cout<<"a["<<i<<"]["<<j<<"]: ";
				cin>>a[i][j];
			}
		}

	    int max_sum = 0;
	    int max_i = 0;
	    int max_j = 0;
	
	    for (int i = 0; i < n; i++) {
	        for (int j = 0; j < m; j++) {
	            int sum = 0;
	            for (int k = i; k < n; k++) {
	                for (int l = j; l < m; l++) {
	                    sum += a[k][l];
	                    if (sum > max_sum) {
	                        max_sum = sum;
	                        max_i = i;
	                        max_j = j;
	                    }
	                }
	            }
	        }
	    }
	
	    cout << "Ma tran con thuoc ma tran ban dau, có tong cac phan tu lon nhat la: \n";
	    for (int i = max_i; i < n; i++) {
	        for (int j = max_j; j < m; j++) {
	            cout<<a[i][j]<<" ";
	        }
	        cout<<endl;
	    }
	
	    return 0;
	}














