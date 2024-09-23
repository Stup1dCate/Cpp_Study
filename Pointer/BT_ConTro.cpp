//Bai1: Tao mang dong có n phan tu nguyên (toi da 10 phan tu). Nhap vào 1 so nguyên x và thêm x vào cuoi mang vua tao.

//#include<iostream>
//using namespace std;
//int main(){
//	int a[10];
//	int n;
//	cout<<"Nhap vao so luong phan tu cua mang: ";
//	cin>>n;
//	int *b=new int [n];
//	cout<<"nhap mang: ";
//	for(int i=0;i<n;i++){
//		cin>>b[i];
//	}
//	
//	int *new_arr= new int [n+1], x;
//	
// 	cout<<"nhap vao phan tu can them: ";
// 	cin>>x;
//	for(int i=0;i<n;i++){
//		new_arr[i]=b[i];
//		
//	}
//	new_arr[n]=x;
//	
//	delete[] b;
//	
//	b=new_arr;
//	
//	cout<<"cac phan tu sau khi them: "<<endl;
//	for(int i=0;i<n+1;i++){
//		cout<<b[i]<<" ";
//	}
//	
//}



//Bai1: Tao mang dong có n phan tu nguyên (toi da 10 phan tu). Nhap vào 1 so nguyên x và thêm x vào cuoi mang vua tao.
/*
#include<iostream>
#include<string>
using namespace std;
void nhap(string songuyen, int &n);
void mang(int *arr, int size);
void xuat(int *arr, int size);
void them(int* &arr, int &size, int moi);

int main(){
	int n, x;
	
	nhap("Nhap vao so luong phan tu cua mang: ", n);
	int *num=new int[n];
	cout<<"Nhap mang: ";
	mang(num, n);
	
	nhap("Nhap vao gia tri can them: ", x);
	them(num, n, x);
	
	cout<<"Mang sau khi them la: "; 
	xuat(num, n);
	return 0;
	
}

void nhap(string songuyen, int &n)
{
	cout<<songuyen;
	cin>>n;	
}

void mang(int *arr, int size)
{
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}

void xuat(int *arr, int size)
{
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void them(int* &arr, int &size, int moi)
{
	//Tao 1 mang moi
	int new_size = size +1;
	int *temp=new int [new_size];
	
	//copy lai tona bo mang ban dau vao mang moi
	for(int i=0 ;i<size; i++){
		temp[i]=arr[i];
	}
	
	//them phan tu moi vao cuoi mang
	temp[new_size -1 ]= moi;
	
	//gan mang moi vao mang ban dau va tang len mot don vi
	delete [] arr;
	arr= temp;
	size= new_size;	
}
*/








//Bai 2: Tao mang dong có n phan tu nguyên (toi da 10 phan tu). Nhap vào 1 so nguyên duong x (0 <= x <= 9) và xóa phan tu o vi trí x.

/*
#include<iostream>
#include<string>
using namespace std;
void nhap(string songuyen, int &n);
void mang(int *arr, int size);
void xuat(int *arr, int size);
void xoa(int* &arr, int &size, int xoa);

int main(){
	int n, x;
	
	nhap("Nhap vao so luong phan tu cua mang: ", n);
	int *num=new int[n];
	cout<<"Nhap mang: ";
	mang(num, n);
	
	nhap("Nhap vao vi tri can xoa: ", x);
	xoa(num, n, x);
	cout<<"Mang sau khi xoa: ";
	xuat(num, n);
	
	return 0;
	
}
void nhap(string songuyen, int &n)
{
	cout<< songuyen;
	cin>>n;	
}
void mang(int *arr, int size)
{
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
}
void xuat(int *arr, int size)
{
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void xoa(int* &arr, int &size, int xoa){
	// xoa phan tu can xoa tren mang cu
	
	for (int i=xoa-1; i<size;i++){
		arr[i]=arr[i+1];
	}

	// tao mang moi co size-1. copy cac phan tu tu mang cu sang mang moi
	
	int new_size= size-1;
	int *temp = new int[new_size];
	// gan mang moi cho mang cu.
	
	for(int i=0; i<new_size; i++){
		temp[i] = arr[i];	
	}
	delete[] arr;	
	arr= temp;
	size= new_size; //thay size cu cua mang bang size moi
}
*/


	
	

