//														VECTOR


#include<iostream>
#include<string>
#include<vector> // khai báo thu viên de su dung vecto
using namespace std;
int main(){
	vector<int> v;	// khai bao: vecto <kieu du lieu> ten_vecto.
	v.push_back(10);	// (ten_vecto).push_back(): dday mot gia tri vao trong vecto can them.
	cout<<v.size()<<endl;	// (ten_vecto).size(): gia tri cua vecto do.
	
	// truy cap vao vecto thong qua cac chi so.
	cout<<"Cac phan tu co trong vecto v la: "<<endl;
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	
	// duyet cac phan tu trong vecto
	for (int i=0;i<v.size();i++){	// duyet cac phan tu trong vecto tu 0 -> v.size()  
		cout<<v[i]<<" "<<endl;
	}
	
	for (int x : v) {		//duyet cac phan tu bang for-each. Vecto dung kieu du lieu nao thi x theo kieu du lieu do 
		cout<< x<<endl;
	}
	cout<<"Phan tu dau tien cua vecto la: "<<v[0]<<endl;	// (ten_vecto)[n]: gia tri cua vecto tai vi tri n.
	cout<<"Phan tu cuoi cung trong vecto la: "<<v[v.size()-1]<<endl;	//v.size()-1: phan tu cuoi cung trong vecto.
	cout<<"Phan tu cuoi cung trong vecto la: "<<v.back()<<endl;		// back() ~ v.size()-1
	



// dung vecto thay the cho mang.
	int n;
	cout<<"Nhap vao so luong phan tu cua mang: ";
	cin>>n;
	vector<int> k;
	cout<<"Nhap mang: ";
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		k.push_back(x);
	}
	cout<<"Cac phan tu trong mang la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<k[i]<<" ";
		}
		cout<<endl;
		
		
		
		
// su dung vecto voi kieu du lieu STRING
	vector<string> p;
	p.push_back("Kieu du lieu");
	p.push_back(" string");
	for(int i=0; i<p.size();i++){
		cout<<p[i];
	}
	return 0;
}

//			kieu du lieu VECTOR duoc dung giong nhu mangr.










































