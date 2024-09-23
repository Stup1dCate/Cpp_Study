//Bài tap 4: Sap xep vector (tu nho den lon va nguoc lai)
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao so luong phan tu trong vector: ";
	cin>>n;
	vector<int> v;
	cout<<"Nhap cac vector: ";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	cout<<"Vector sau khi sap xep la: ";
	for(int i=0;i<v.size();i++){
		for(int j=i+1;j<v.size();j++){
			if(v[i]>v[j]){
				int temp=v[i];
				v[i]=v[j];
				v[j]=temp;
			}
		}
		cout<<v[i]<<" ";
	}
	return 0;
}

//Bài tap 5: Tính trung bình cong cua các phan tu trong vector

#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao so luong phan tu trong vector: ";
	cin>>n;
	vector<int> v;
	cout<<"Nhap cac vector: ";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	float t=0;
	cout<<"Trung binh cong cua cac phan tu trong vector la: ";
	for(int i=0;i<v.size();i++){
		t+=v[i];
	}
	cout<<t/n;
	return 0;
}


//Bài tap 6: Tìm vi trí cua mot phan tu trong vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao so luong phan tu trong vector: ";
	cin>>n;
	vector<int> v;
	cout<<"Nhap cac vector: ";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int k;
	cout<<"Nhap vao phan tu can tim: ";
	cin>>k; 
	cout<<"Phan tu can tim xuat hien o cac vi tri lan luot la: ";
	for(int i=0;i<v.size();i++){
		if(v[i]==k){
			cout<<i+1<<" ";
		}
	}
	return 0;
}



