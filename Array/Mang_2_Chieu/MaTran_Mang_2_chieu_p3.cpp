//1. tinh tich cua 2 ma tran.
/*
#include<iostream>
using namespace std;
void nhap(int a1[10][10], int a2[10][10],int n1,int m1,int n2,int m2);
void nhanpt(int a1[10][10], int a2[10][10], int &n1,int &m1,int &n2,int &m2);
int main(){
	int a1[10][10], a2[10][10], n1, m1, n2, m2;
	cout<<"Nhap vao ma tran thu nhat: "<<endl;
	cout<<"Nhap so dong: ";
	cin>>n1;
	cout<<"Nhap so cot: ";
	cin>>m1;
	cout<<"Nhap vao ma tran thu hai: "<<endl;
	cout<<"Nhap so dong: ";
	cin>>n2;
	cout<<"Nhap so cot: ";
	cin>>m2;
	if(m1!=n2){
		cout<<"2 ma tran khong phu hop."<<endl;
		return 0;
	}
	nhap(a1, a2, n1, m1, n2, m2);
	nhanpt(a1, a2, n1, m1, n2, m2);
	return 0;
}



void nhap(int a1[10][10], int a2[10][10], int n1,int m1,int n2,int m2)	{
	cout<<"Nhap vao cac phan tu ma tran thu nhat: "<<endl;
	for(int i=0;i<n1;i++){
		for(int j=0;j<m1;j++){
			cout<<"a1["<<i<<"]["<<j<<"]: ";
			cin>>a1[i][j];
		}
	}
	cout<<"Nhap vao cac phan tu ma tran thu hai: "<<endl;
	for(int i=0;i<n2;i++){
		for(int j=0;j<m2;j++){
			cout<<"a2["<<i<<"]["<<j<<"]: ";
			cin>>a2[i][j];
		}
	}
}



void nhanpt(int a1[10][10], int a2[10][10], int &n1,int &m1,int &n2,int &m2){
	int a3[10][10]={0};
	cout<<endl;
	for(int k=0;k<n1;k++){
		for(int h=0;h<m2;h++){
			for(int o=0;o<m1;o++){
			a3[k][h]+=a1[k][o]*a2[o][h];
			}
			cout<<a3[k][h]<<"  ";
		}
		cout<<endl;

	}
}

*/






//2. xoay ma tran 90do sang trai(phai).
/*
#include<iostream>
using namespace std;
void xoay90(int a[10][10], int &n, int &m);
int main(){
	int a[10][10], n, m;
	cout<<"Nhap vao so dong cua ma tran: ";
	cin>>n;
	cout<<"Nhap vao so cot cua ma tran: ";
	cin>>m;
	cout<<"Nhap cac phan tu cua ma tran: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	cout<<"Ma tran ban dau co dang: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	xoay90(a, n, m);
	
	return 0; 
}

void xoay90(int a[10][10], int &n, int &m){
    cout << "Ma tran sau khi xoay 90 do sang phai co dang: " << endl;
    for (int i=0;i<m;i++){
        for (int j=n-1;j>= 0;j--){
            cout<<a[j][i]<<"  ";
        }
        cout<<endl;
    }
}
*/




//3. tim dinh thuc ma tran bang pp Gauss

#include<iostream>
using namespace std;
void dt();
int main(){
	int a[10][10], n, m;
	cout<<"Nhap vao so dong cua ma tran: ";
	cin>>n;
	cout<<"Nhap vao so cot cua ma tran: ";
	cin>>m;
	cout<<"Nhap cac phan tu cua ma tran: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
	cout<<"Ma tran ban dau co dang: "<<endl;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
	return 0;
}

void dt(){
	
}















