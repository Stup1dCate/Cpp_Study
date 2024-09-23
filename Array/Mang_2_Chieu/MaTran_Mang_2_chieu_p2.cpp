//1. Sap xep cac phan tu trong ma tran theo thu tu tang dan tu trai qua phai tu tren xuong duoi
/*
		#include<iostream>
		using namespace std;
		void sx(int n, int m, int a[10][10]);
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
			sx(n, m, a);
			cout<<"Ma tran sau khi sap xep theo thu tu tang dan tu trai qua phai tu tren xuong duoi la: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<a[i][j]<<"   ";
				}
				cout<<endl;
			}
		}
		void sx(int n, int m, int a[10][10]){
			for (int i=0;i<n*m-1;i++) {
		        for (int j=i+1;j<n*m;j++) {
		            if (a[i/m][i%m]>a[j/m][j%m]) {
		                int temp=a[i/m][i%m];
		                a[i/m][i%m]=a[j/m][j%m];
		                a[j/m][j%m]=temp;
		            }
		        }
		    }
		}
*/




//2. Tim phan tu min va max tren duong cheo chinh
/*
		#include<iostream>
		using namespace std;
		int main(){
			int n, a[10][10];
			cout<<"Nhap vao cap cua ma tran: ";
			cin>>n;
			cout<<"Nhap ma tran: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
			cout<<"Ma tran ban dau la: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					cout<<a[i][j]<<"   ";
				}
				cout<<endl;
			}
			int max=a[0][0];
			cout<<"Gia tri lon nhat tren duong cheo chinh la: ";
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i==j){
						if(a[i][j]>max){
							max=a[i][j];
						}
					}
				}
			}
			cout<<max<<endl;
			int min=a[0][0];
			cout<<"Gia tri nho nhat tren duong cheo chinh la: ";
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(i==j){
						if(a[i][j]<min){
							min=a[i][j];
						}
					}
				}
			}
			cout<<min<<endl;
			return 0;
		}
*/



//3. Dem tan suat xuat hien cua mot phan tu trong ma tran
/*
		#include<iostream>
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
			int x, t=0;
			cout<<"Chon phan tu can tim kiem: ";
			cin>>x;
			for(int i=0;i<n;i++){
				for(int j=0;j<n;j++){
					if(a[i][j]==x){
						t++;
					}
				}
			}
			cout<<"Tan suat xuat hien cua phan tu "<<x<<" la: "<<t<<" lan."<<endl;
			
			return 0;
		}
*/



//4. Tim ma tran nghich dao cua ma tran vuong cap 3
/*

		#include<iostream>
		using namespace std;
		double Pt(int a[10][10]);
		int main(){
			int a[10][10];
			cout<<"Nhap vao ma tran vuong cap 3: "<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
			Pt(a);
			return 0;
		}
		
		double Pt(int a[10][10]){
			
			float T;
			T=a[0][0]*a[1][1]*a[2][2]+a[0][1]*a[1][2]*a[2][0]+a[0][2]*a[1][0]*a[2][1]-(a[0][2]*a[1][1]*a[2][0]+a[1][0]*a[0][1]*a[2][2]+a[2][1]*a[1][2]*a[0][0]);
			if(T==0){
				cout<<"Khong ton tai ma tran nghich dao vi Det = 0."<<endl;
				return 0;
			}
			float D=1/T;
			cout<<endl;
			cout<<"Det = "<<T<<endl;
			cout<<endl;
			
			
			int b[10][10];
			for(int i=0;i<3;i++){
		        for(int j=0;j<3;j++){
		            b[0][0]=a[1][1]*a[2][2]-a[2][1]*a[1][2];
		            b[0][1]=-(a[1][0]*a[2][2]-a[2][0]*a[1][2]);
		            b[0][2]=a[1][0]*a[2][1]-a[2][0]*a[1][1];
		            b[1][0]=-(a[0][1]*a[2][2]-a[2][1]*a[0][2]);
		            b[1][1]=a[0][0]*a[2][2]-a[2][0]*a[0][2];
		            b[1][2]=-(a[0][0]*a[2][1]-a[2][0]*a[0][1]);
		            b[2][0]=a[0][1]*a[1][2]-a[1][1]*a[0][2];
		            b[2][1]=-(a[0][0]*a[1][2]-a[1][0]*a[0][2]);
		            b[2][2]=a[0][0]*a[1][1]-a[1][0]*a[0][1];
		        }
		    }
			
			cout<<"Pt: "<<endl;
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					cout<<b[i][j]<<"   ";
				}
				cout<<endl;
			}
			cout<<endl;
			cout<<"Pta: "<<endl;
			for(int j=0;j<3;j++){
				for(int i=0;i<3;i++){
					cout<<b[i][j]<<"   ";
				}
				cout<<endl;
			}
			cout<<endl;
			cout<<"Ma tran nghich dao cua ma tran ban dau la: "<<endl;
			for(int j=0;j<3;j++){
				for(int i=0;i<3;i++){
					cout<<b[i][j]*D<<"   ";
				}
				cout<<endl;
			}
		}	
*/	

//5(*). Tim so 'hoang hau' (so lon nhat tren dong, cot và 2 duong cheo di qua no)  


#include<iostream>
using namespace std;
//double Pt(int a[10][10]);
void c2c3(int a[10][10], int &n);
int main(){
	int n, a[10][10];
	cout<<"Nhap vao cap cua ma tran vuong: ";
	cin>>n;
	if(n<3){
		cout<<"Ma tran muon co 'Queen' phai la ma tran vuong >= cap 3 !"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	c2c3(a, n);
	return 0;
}
void c2c3(int a[10][10], int &n){
	if(n==3){
		int max=a[0][0];
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(max<a[i][j]){
					max=a[i][j];
				}
			}
		}
		cout<<"Queen = ";
		cout<<max;
	}
}
bool kt(int a[10][10], int &n){
	
}








































