//Gia tri max cua tung hang
/*
#include <iostream> 
using namespace std; 
int main() { 
	int n, m;
	int arr[10][10];
	cout<<"nhap so hang: ";
	cin>>n;
	cout<<"nhap so cot: ";
	cin>>m;
	
	
	cout<<"nhap mang: \n";
	for(int i=0; i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"arr["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
		}
	}
	
	
	for(int i =0 ;i<n;i++){
		int max=arr[i][0];
		for(int j=0; j<m;j++){
			if (arr[i][j]>max){
				max=arr[i][j];	
			}
		}
		cout<<"Gia tri lon nhat cua hang "<<i+1<<" la: ";
		cout<<max<<endl;
	}
  return 0;
}
*/






//Tinh tong cac gia tri bien cua ma tran
/*
#include <iostream>
using namespace std;
int main(){
	int n, m, S=0, arr[10][10];
	cout<<"nhap so hang: ";
	cin>>n;
	cout<<"nhap so cot: ";
	cin>>m;
	
	
	cout<<"nhap mang: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<"arr["<<i<<"]["<<j<<"]: ";
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if (i==0||j==0||i==n-1||j==m-1){
				S+=arr[i][j];
			}
		}
	}
	cout<<"tong cac gia tri bien la: "<<S;
	return 0;
}
*/




