#include<iostream>
using namespace std;
bool kt(int n){
	if(n<2){
		cout<<" khong co nguyen to nao be hon 2."<<endl;
		return false;
	}
	for(int i=2;i*i<=n;i++){
		if(n%i==0)	{
			return false;
		}
	}
	return true;
}
void in(int n){
	cout<<"Cac so nguyen to be hon "<<n<<" la: "<<endl;
	for(int i=2;i<n;i++){
		if(kt(i)){
			cout<<i<<" ";
		}
	}
}
int main(){
	int n;
	cout<<"Nhap mot so bat ky: ";
	cin>>n;
	in(n);
	return 0;
}
