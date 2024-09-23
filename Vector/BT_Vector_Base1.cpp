//Bài tap 1: Tính tong các phan tu trong vector

#include<iostream>
#include<vector>
using namespace std;
int main(){	
	int n;
		cout<<"Nhap vao so luong phan tu cua vector: ";
		cin>>n;
		vector<int> v;
		cout<<"Nhap cac phan tu cua vector: ";
		for(int i=0;i<n;i++){
			int x;
			cin>>x;
			v.push_back(x);
		}
		cout<<"Tong cac phan tu trong vector la: ";
		int t=0;
		for (int i=0;i<v.size();i++){
			t+=v[i];
		}
		cout<<t<<" ";
		return 0;
}

//Bài tap 2: Tìm giá tri max và min trong vector


#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao so luong phan tu trong vector: ";
	cin>>n;
	vector<int> v;
	if(n==0){
	cout<<"Vector rong!";
	return 0;
	}
	cout<<"Nhap cac phan tu cua vector: ";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}

	int max=v[0];
	for(int i=0;i<v.size();i++){
		if(max<v[i]){
			max=v[i];
		}
	}
	cout<<"Gia tri lon nhat trong vector la: "<<max<<endl;
	
	int min=v[0];
	for(int i=0;i<v.size();i++){
		if(min>v[i]){
			min=v[i];
		}
	}
	cout<<"Gia tri nho nhat trong vector la: "<<min<<endl;
	return 0;
}


//Bài tap 3: Ðao nguoc thu tu cua các phan tu trong vector

#include<iostream>
#include<algorithm>	//thu vien <algorithm> cho phep su dung (reverse)
#include<vector>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao so luong phan tu trong vector: ";
	cin>>n;
	vector<int> v;
	cout<<"Nhap cac phan tu trong vector: ";
	for(int i=0;i<n;i++){
		int x; 
		cin>>x;
		v.push_back(x);
	}
	reverse(v.begin(), v.end());	// dao nguoc cac phan tu tu dau den cuoi.
	
	cout<<"Cac phan tu cua vector sau khi dao nguoc thu tu la: ";
	for(int x:v){
		cout<<x<<" ";
	}
	return 0;
}


