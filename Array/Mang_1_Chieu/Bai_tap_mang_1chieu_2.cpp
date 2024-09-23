//(làm các bt su dung hàm)
//Bai 1: tinh trung binh cong cac so le o vi trí chan.

#include<iostream>
using namespace std;
void nhap(int &n, int a[]);
float tb(int &n, int a[]);
bool kt(int n, int a[]);
int main(){
	int n, a[1000];
	nhap(n, a);
	kt(n, a);
	tb(n, a);
	cout<<"Trung binh cong cua cac so le o vi tri chan trong mang la: "<<(tb(n, a))/s;
	return 0;
}
void nhap(int &n, int a[]){
	cout<<"Nhap vao so luong phan tu cua mang: ";
	cin>>n;
	cout<<"Nhap mang: ";
	for(int i=0; i<n;i++){
		cin>>a[i];
	}
}
bool kt(int n, int a[]){
	int s=0;
	for(int i=0;i<n;i++){
		if(i==0 && a[i] % 2 != 0){
				return true;
				s++;	
		}
		else if(i%2==0 && a[i]%2 != 0){
				return true;
				s++;
		}
	}
	return false;
}
float tb(int &n, int a[]){
	int t=0;
	if(kt){
		for(int i=0; i<n; i++){
			t+=a[i];
		}
	}
	return t;
}


#include <iostream>
using namespace std;

void nhap(int &n, int a[]);
float tbc(int n, int a[]);

int main() {
    int n, a[1000];
    nhap(n, a);

    float trung_binh = tbc(n, a);

    if (trung_binh == -1) {
        cout << "Khong co so le o vi tri chan trong mang." << endl;
    } else {
        cout << "Trung binh cong cua cac so le o vi tri chan trong mang la: " << trung_binh << endl;
    }

    return 0;
}

void nhap(int &n, int a[]) {
    cout << "Nhap vao so luong phan tu cua mang: ";
    cin >> n;
    cout << "Nhap mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

float tbc(int n, int a[]) {
    int tong = 0;
    int dem = 0;

    for (int i = 0; i < n; i += 2) {  // Duy?t qua các v? trí ch?n
        if (a[i] % 2 != 0) {          // Ki?m tra s? l?
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0) {
        return -1; // Tr? v? -1 n?u không có s? l? ? v? trí ch?n
    }

    return static_cast<float>(tong) / dem; // Tr? v? trung bình c?ng
}





//Bai 2: tim vi trí cua so max và min trong mang.
/*
#include<iostream>
using namespace std;
void nhap(int &n, int a[]);
void max(int &n, int a[]);
void min(int &n, int a[]);

int main(){
	int n, a[1000], i;
	nhap(n, a);
	max(n, a);
	min(n, a);
	return 0;
}

void nhap(int &n, int a[]){
	cout<<"Nhap vao so luong ki tu trong mang: ";
	cin>>n;
	cout<<"Nhap mang: ";
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
}
void max(int &n, int a[]){
	int max=a[0], c=0;
	for (int i=0;i<n;i++){
		if(max<a[i]){
			max=a[i];
			c=i;
		}
	}
	cout<<"Gia tri lon nhat trong mang nam o vi tri: "<<c+1<<endl;
}
void min(int &n, int a[]){
	int min=a[0], b=0;
	for (int i=0;i<n;i++){
		if(min>a[i]){
			min=a[i];
			b=i;
		}
	}
	cout<<"Gia tri nho nhat trong mang nam o vi tri: "<<b+1;
}
*/





//Bai 3: dêm cac so chính phuong trong mang.
/*
#include<iostream>
#include<cmath>
using namespace std;
void nhap(int &n, int a[]);
int kt(int &n,int a[]);
int main(){
	int n, a[1000];
	nhap(n, a);
	kt(n, a);
	cout<<"So luong so chinh phuong co trong mang la: "<<kt(n, a);
	return 0;
}
void nhap(int &n, int a[]){
	cout<<"Nhap vao so luong ki tu trong mang: ";
	cin>>n;
	cout<<"Nhap mang: ";
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
}
int kt(int &n, int a[]){
	int s=0;
	for (int i=0; i<n; i++){
		if (sqrt(a[i])==(int)sqrt(a[i])){
			s++;
		}
	}
	return s;
}
*/





//Bai 4: Hien thi tat ca các sô nguyên tô có trong mang.
/*
#include <iostream>
using namespace std;
bool kt(int n);
void xuat(int n, int a[]);
void nhap(int &n, int a[]);
int main(){
    int n, a[1000];
    nhap(n, a);
    xuat(n, a);
    return 0;
}
void nhap(int &n, int a[]){
	cout<<"Nhap vao so luong ki tu trong mang: ";
	cin>>n;
	cout<<"Nhap mang: ";
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
}

bool kt(int n){
    if (n <= 1)
        return false;
    for (int i = 2; i <n;i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void xuat(int n, int a[]){
    cout << "Cac so nguyen to co trong mang la: ";
    bool ngto = false;
	
    for (int i = 0; i < n; i++){
        if (kt(a[i])){
            cout << a[i] << " ";
            ngto = true;
        }
    }
    if (!ngto){
        cout << "Khong co so nguyen to trong mang";
    }
    cout << endl;
}
*/





//Bai 5: Thay thê cac gia tri âm trong mang = sô 0.
/*
#include<iostream>
using namespace std;
void nhap(int &n, int a[]);
bool kt(int n, int a[]);

int main(){
	int n, a[1000];
	nhap(n, a);
	kt(n, a);
	cout<<"Mang sau khi thay doi la: ";
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}

void nhap(int &n, int a[]){
	cout<<"Nhap vao so luong ki tu trong mang: ";
	cin>>n;
	cout<<"Nhap mang: ";
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
}
bool kt(int n, int a[]){
	for(int i=0;i<n;i++){
		if(a[i]<0){
			a[i]=0;
		}
	}
	return 0;
}
*/





//Bai 6: xoá các phân tu âm trong mang.
/*
#include<iostream>
using namespace std;
void nhap(int &n, int a[]);
bool kt(int &n, int a[]);
void xoa(int &n, int a[]);
int main(){
	int n, a[1000];
	nhap(n, a);
	xoa(n, a);
	cout<<"Mang sau khi xoa het cac phan tu am la: ";
	for (int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
void nhap(int &n,int a[]){
	cout<<"Nhap vao so luong ki tu trong mang: ";
	cin>>n;
	cout<<"Nhap mang: ";
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
}

void xoa(int &n,int  a[]){
	int k=0;
		for(int i=0;i<n;i++){
		if(a[i]>=0){
			a[k++]=a[i];
			
		}
	}
	n=k;
}
*/


