#include<iostream>
using namespace std;
int main(){
int a, b, c, d;
	do{
	cout<<"Nhap vao 4 so tu 0 den 9: "<<endl;
	cout<<"so thu nhat: ";cin>>a;
	cout<<"so thu hai: ";cin>>b;
	cout<<"so thu ba: ";cin>>c;
	cout<<"so thu tu: ";cin>>d;
		if(a>9||b>9||c>9||d>9||a<0||b<0||c<0||d<0){
			cout<<"Cac so da nhap khong hop le ! Vui lon nhap lai "<<endl;
		}
		else {break;}
	}
	while(true);

int arr[4]={a, b, c, d};
	cout<<"Tat ca cac so co dang ab,cd duoc lap thanh tu 4 so tren la:"<<endl;
	for(int x=0;x<4;x++){
		for(int y=0;y<4;y++){
		if(y!=x){
			for(int z=0;z<4;z++){
			if(z!=x && z!=y){
				for(int t=0;t<4;t++){
				if(t!=x && t!=y && t!=z){
				if(arr[x]!=0 && arr[t]!=0) {cout<<arr[x]<<arr[y]<<","<<arr[z]<<arr[t]<<endl;}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}


