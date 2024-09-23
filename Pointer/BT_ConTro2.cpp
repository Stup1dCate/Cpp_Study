//B1: viet chuong trinh hoan vi 2 so (con tro x va y) 
/*
#include <iostream>
void hoanVi(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;
    std::cout<<"Nhap vao gia tri so thu nhat (a): "; std::cin>>a;
    std::cout<<"Nhap vao gia tri so thu hai (b): "; std::cin>>b;
    hoanVi(&a, &b);
    std::cout<<"Sau khi hoan vi: a = "<<a<<", b = "<<b<<std::endl;
    std::cout<<"Dia chi cua gia tri a la: "<<&a<<std::endl;
    std::cout<<"Dia chi cua gia tri b la: "<<&b<<std::endl;
    return 0;
}
*/



//B2: khai bao mot mang gom n so nguyen. 
/* 
a) su dung con tro de nhap tung gia tri cua tung phan tu cua mang
b) xuat cac phan tu cua mang ra man hinh 
c) tim phan tu max trong mang va tra ve dia chi cua no
*/
/*
#include <iostream>

void Nhap(int *arr, int n) {
    for (int i=0;i<n;i++) {
        std::cout<<"arr["<<i+1<<"]: ";
        std::cin>>*(arr+i); // *(arr + i) <=> arr[i];  a + i <=> &a[i]
    }
}
void Xuat(int *arr, int n) {
    std::cout<<"Cac phan tu cua mang vua nhap la: ";
    for (int i = 0; i<n; i++) {
        std::cout<<*(arr+i)<<" ";
    }
    std::cout<<"\n";
}

int *Max(int *arr, int n) {
    if (n <= 0) {
        return nullptr; 
    }
    int *maxPtr = arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *maxPtr) {
            maxPtr = arr + i;
        }
    }
    return maxPtr;
}

int main() {
    int n;
    std::cout << "Nhap so luong phan tu cua mang: "; std::cin >> n;

    int *a = new int[n];
    Nhap(a, n);
    Xuat(a, n);
    int *maxPtr = Max(a, n);
    
    if (maxPtr!=nullptr) std::cout <<"Phan tu lon nhat la: "<<*maxPtr<<", co dia chi la: " <<maxPtr<<std::endl;  
	else std::cout << "Mang rong." << std::endl;
    

    delete[] a;
    return 0;
}
*/




//B3: 
/*
#include<iostream>
#define max 100

void nhap(int *p, int size){
	do{
		std::cout<<"Nhap mang: "<<std::endl;
		for(int i=0;i<size;i++){
			std::cout<<"p["<<i+1<<"]: ";
			std::cin>>*(p+i);
		}
		for(int i=0;i<size;i++){
			if(*(p+i) >= max) std::cout<<"Mang chu gia tri khong hop le. Vui long nhap lai."<<std::endl;
			else{break;}
		}
	}
	while(true);
}
void xuat(int *p, int size){
	std::cout<<"Mang vua nhap la: "<<std::endl;
	for(int i=0;i<size;i++){
		std::cout<<*(p+i)<<" ";
	}
	std::cout<<std::endl;
}
int main(){
	int n;
	int *p = new int[n]; 
	do{
		std::cout<<"Nhap so luong phan tu cua mang (<100): "; std::cin>>n;
		if(n>=max){
		std::cout<<"So luong phan tu cua mang khong hop le. Vui long nhap lai: "<<std::endl;
		}
		else{break;}
	}
	while (true);
	
	nhap(p, n);
	xuat(p, n);
	
	delete[] p;
	return 0;
}
*/



//B5: Su dung con tro sao chep mang nay sang mang khac
/*
#include<iostream>
using namespace std;
void coppyArray(int *a, int n, int *dest){
	for(int i=0;i<n;i++){
		*(dest+i)=*(a+i); //gia tri tuong ung cua cac phan tu 
	}
}
int main(){
	int a[1000], n;
	cout<<"Nhap vao so luong phan tu cua mang: "; cin>>n;
	cout<<"Nhap mang ban dau: "<<endl;
	for(int i=0;i<n;i++){
		cin>>*(a+i);
	}
	int *dest = new int[1000]; //khai bao con tro dest
	
	coppyArray(a, n, dest);
	
	cout<<"Dia chi cua cac phan tu tuong ung cua mang ban dau la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<&a[i]<<" ";
	}
	cout<<endl;
	cout<<"Dia chi cua cac phan tu tuong ung cua mang sau khi sao chep la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<&dest[i]<<" ";
	}
	
	delete[] dest;
	return 0;
}
*/




//B6: cho mang 1 chieu gom n phan tu. Xoa phan tu o vi tri k.
/*
#include<iostream>
using namespace std;
void input(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]: ";
		cin>>*(a+i);
	}
}
void delete_int(int *a, int &n, int k){
	for(int i=k-1;i<=n;i++){
		*(a+i)=*(a+i+1);
	}
	n--;
}
int main(){
	int a[1000], n, k;
	cout<<"Nhap so luong phan tu cua mang: "; cin>>n;
	cout<<"Nhap mang: "<<endl;
	input(a, n);
	cout<<"Mang ban dau la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
	cout<<"Nhap vi tri phan tu can xoa: "; cin>>k;
	delete_int(a, n, k);
	cout<<"Mang sau khi xoa phan tu tai vi tri "<<k<<" la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	
	return 0;
}
*/



//B7: them mot phan tu vao mang
/*
#include<iostream>
using namespace std;
void input(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]: ";
		cin>>*(a+i);
	}
}
void add_int(int *a, int &n, int k, int x){
	for(int i=n;i>x;i--){
		*(a+i)=*(a+i-1);
	}
	a[x]=k;
	n++;
}
int main(){
	int a[1000], n, k, x;
	cout<<"Nhap so luong phan tu cua mang: "; cin>>n;
	cout<<"Nhap mang: "<<endl;
	input(a, n);
	cout<<"Mang ban dau la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
	cout<<"Nhap phan tu can them: "; cin>>k;
	cout<<"Nhap vi tri cua phan tu do: "; cin>>x;

	add_int(a, n, k, x);
	
	cout<<"Mang sau khi them phan tu "<<k<<" tai vi tri "<<x<<" la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	
	return 0;
}
*/




//B8: Xoa cac phan tu la so nguyen to trong mang 1 chieu
/*
#include<iostream>
using namespace std;
void input(int *a, int n){
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]: ";
		cin>>*(a+i);
	}
}
bool check(int &n){
	if(n<2) return true;
	for(int i=2;i*i<=n;i++){
		if(n%i==0) return true;
	}
	return false;
}
void remove_primes(int *a, int &n){
	cout<<"Mang sau khi xoa cac phan tu la so nguyen to: "<<endl;
	for(int i=0;i<n;i++){
		if(check(*(a+i))){
			cout<<*(a+i)<<" ";
		}
	}
}
int main(){
	int a[1000], n;
	cout<<"Nhap so luong phan tu cua mang: "; cin>>n;
	cout<<"Nhap mang: "<<endl;
	input(a, n);
	cout<<"Mang ban dau la: "<<endl;
	for(int i=0;i<n;i++){
		cout<<*(a+i)<<" ";
	}
	cout<<endl;
	remove_primes(a, n);
	
	return 0;
}
*/




//B9:
/*
#include <iostream>
#include <string>
using namespace std;

struct Infor {
    string mssv;
    string name;
    float diem_base, diem1, diem2, diem_tong;
};

void input_list(Infor list[], int &n) {
    for (int i=0;i<n;i++) {
        cout<<"Nhap thong tin thi sinh thu "<<i+1<<endl;
        cout<<"Ma so sinh vien: "; cin>>list[i].mssv;
        cout<<"Ho va ten: ";
        cin.ignore();  
        getline(cin, list[i].name);
        cout<<"Diem mon co ban: "; cin>>list[i].diem_base;
        cout<<"Diem mon chuyen nganh 1: "; cin>>list[i].diem1;
        cout<<"Diem mon chuyen nganh 2: "; cin>>list[i].diem2;
        list[i].diem_tong = list[i].diem_base+list[i].diem1+list[i].diem2;
    }
    cout<<endl;
}
void print_list(Infor list[], int &n){
	cout<<"\t\t\tDanh sach thong tin sinh vien trong ki thi: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Sinh vien thu "<<i+1<<": \n"<<endl;
		cout<<"Ma so sinh vien: "; cout<<list[i].mssv<<endl;
        cout<<"Ho va ten: "; cout<<list[i].name<<endl;
        cout<<"Diem mon co ban: "; cout<<list[i].diem_base<<endl;
        cout<<"Diem mon chuyen nganh 1: "; cout<<list[i].diem1<<endl;
        cout<<"Diem mon chuyen nganh 2: "; cout<<list[i].diem2<<endl;
        cout<<"Tong diem 3 mon la: "; cout<<list[i].diem_tong<<endl;
        cout<<endl;
	}
}
void score_max(Infor list[], int &n){
	cout<<"Sinh vien co diem cao nhat la: ";
	float max=list[0].diem_tong;
	string mssv_max = list[0].mssv;
	string ten = list[0].name;
	for(int i=1;i<n;i++){
		if(list[i].diem_tong>max) 
			max=list[i].diem_tong;
			ten=list[i].name;
			mssv_max=list[i].mssv;
	}
	cout<<ten<<" mssv: "<<mssv_max<<" co diem tong la: "<<max<<endl;
}
void sort_by_ChuyenNganh(Infor list[], int &n) {
	cout<<"\t\t\tDanh sach sinh vien sau khi sap xep theo diem chuyen nganh: "<<endl;
    for (int i=0;i<n-1;i++) {
        for (int j=0;j<n-i-1; j++) {
            float tongDiem1 = list[j].diem1+list[j].diem2;
            float tongDiem2 = list[j + 1].diem1+list[j + 1].diem2;
            if (tongDiem1 < tongDiem2) {
            	swap(list[j], list[j + 1]);
			}
        }
    }
    for (int i=0;i<n;i++) {
        cout<<i+1<<". "<<list[i].name<<": "<<list[i].diem1+list[i].diem2<<endl;
    }
}
void diem_5(Infor list[], int &n){
	cout<<"\t\t\tCac thi sinh co it nhat mot mon thi diem thap hon 5: "<<endl;
	for(int i=0;i<n;i++){
		if(list[i].diem1 < 5 ||list[i].diem2 < 5||list[i].diem_base < 5){
			cout<<i+1<<". "<<list[i].name<<endl;
		}
		else{
			cout<<"Khong co sinh vien nao co diem thap hon 5 !"<<endl;
			return;
		}
	}
}
int main() {
    int n; cout<<"Nhap so luong sinh vien: "; cin>>n;
    Infor *list=new Infor[n];

    input_list(list, n);
	print_list(list, n);
	score_max(list, n);
	diem_5(list, n);
	sort_by_ChuyenNganh(list, n);
	
    delete[] list; 
    return 0;
}
*/




//B10:
/*
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout<<"Enter the number of rows (n): "; cin>>n;
    cout<<"Enter the number of columns (m): "; cin>>m;
    
    int **a = new int*[n]; 

    for (int i=0; i<n; i++) {
        a[i] = new int[m];
    }

    cout<<"Enter elements of the array:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<"Enter element at index ("<<i<<", "<<j<<"): ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    cout<<"The elements of the array are:"<<endl;
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cout<<a[i][j]<< " ";
        }
        cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
*/





//B11:
/*
#include <iostream>
using namespace std;
int main() {
    int n, m;
    cout<<"Enter the number of rows (n): "; cin>>n;
    cout<<"Enter the number of columns (m): "; cin>>m;
    
    int **a = new int*[n]; 

    for (int i=0; i<n; i++) {
        a[i] = new int[m];
    }

    cout<<"Enter elements of the array:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<"Enter element at index ("<<i<<", "<<j<<"): ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    
    cout<<"The elements of the array are:"<<endl;
    int *ptr = &a[0][0]; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<*ptr<<" ";
            ptr++; 
        }
    	cout<<endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}
*/




//B12:
/*
#include<iostream>
using namespace std;
void find_element(int **a, int x, int n, int m){
	int count=0;
	cout<<"Cac phan tu co gia tri bang "<<x<<" gom cac phan tu o cac vi tri sau: "<<endl;
	for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if(a[i][j]==x){
            	cout<<"("<<i<<", "<<j<<")"<<endl;
            	count++;
			}
        }
    }
    cout<<"Tong cong "<<count<<" phan tu trung lap."<<endl;
}
int main(){
	int n, m;
    cout<<"Enter the number of rows (n): "; cin>>n;
    cout<<"Enter the number of columns (m): "; cin>>m;
    
    int **a = new int*[n]; 
	
    for (int i=0; i<n; i++) {
        a[i] = new int[m];
    }
    cout<<"Enter elements of the array:"<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout<<"Enter element at index ("<<i<<", "<<j<<"): ";
            cin>>a[i][j];
        }
    }
    cout<<endl;
    
    int x; cout<<"Nhap vao phan tu can tim kiem: "; cin>>x;
    find_element(a, x, n ,m);
    
    
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;

}
*/





//B14:

#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
typedef Node* node;
node makeNode(int x) {
	node p = new Node();
	p->next = NULL;
	p->data = x;
	return p;
}

void print(node a) {
	node tmp = a;
	while (tmp != NULL) {
		cout << tmp->data << " ";
		tmp = tmp->next;
	}
	cout << endl;
}

int sum_list(node a) {
	int sum = 0;
	while (a != NULL) {
		sum += a->data;
		a = a->next;
	}
	return sum;
}

bool isprime(int x) {
	if (x < 2) return false;
	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0) return false;
	}
	return true;
}

int element_prime(node a) {
	int count = 0;
	while (a != NULL) {
		if (isprime(a->data)) {
			count++;
		}
		a = a->next;
	}
	return count;
}

int Size(node a) {
	int n = 0;
	while (a != NULL) {
		a = a->next;
		n++;
	}
	return n;
}

void add_first(node &a, int x) {
	node tmp = makeNode(x);
	if (a == NULL) a = tmp;
	else {
		tmp->next = a;
		a = tmp;
	}
}

void add_last(node &a, int x) {
	node tmp = makeNode(x);
	if (a == NULL) a = tmp;
	else {
		node p = a;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = tmp;
	}
}

void add_mid(node a, int x, int k) {
	int n = Size(a);
	if (x < 1 || x > n + 1) return;
	else if (x == 1) {
		add_first(a, k);
	}
	else if (x == n + 1) {
		add_last(a, k);
	}
	else {
		node p = a;
		for (int i = 0; i < x - 1; i++) {
			p = p->next;
		}
		node tmp = makeNode(k);
		tmp->next = p->next;
		p->next = tmp;
	}
}
void reverseList(node &a) {
    node prev = NULL, next=NULL;
    node current = a;

    while (current != NULL) {
        next = current->next; 
        current->next = prev; 
        prev = current;
        current = next; 
    }
    a = prev; 
}
void make_list(node a, node& oddList, node& evenList) {
    node oddPtr = NULL; 
    node evenPtr = NULL;

    node current = a;
    while (current != NULL) {
        if (current->data % 2 != 0) {
            if (oddPtr == NULL) {
                oddList = current;
                oddPtr = current;
            } else {
                oddPtr->next = current;
                oddPtr = oddPtr->next;
            }
        } 
		else {
            if (evenPtr == NULL) {
                evenList = current;
                evenPtr = current;
            } else {
                evenPtr->next = current;
                evenPtr = evenPtr->next;
            }
        }
        current = current->next;
    }
    if (oddPtr != NULL) {
        oddPtr->next = NULL;
    }
    if (evenPtr != NULL) {
        evenPtr->next = NULL;
    }
}

void freeList(node a) {
    while (a != NULL) {
        node temp = a;
        a = a->next;
        delete temp;
    }
}

int check_x(node a, int x) {
	while (a != NULL) {
		if (a->data == x) {
			return 1;
		}
		a = a->next;
	}
	return 0;
}
int main(){
	node a=NULL;
	node evenList = NULL, oddList = NULL;
	add_last(a, 1);
    add_last(a, 2);
    add_last(a, 3);
    add_last(a, 4);
    add_last(a, 5);
    add_last(a, 9);
    add_last(a, 8);
    add_last(a, 7);
    add_last(a, 6);
    add_last(a, 10);
	int x, y; cout<<"Nhap vao gia tri can them: "; cin>>y; 
	cout<<"Nhap vi tri can them: "; cin>>x;
	add_mid(a, x, y);
	cout<<"Danh sach sau khi them phan tu: "; print(a); 
	cout<<"Tong tat ca cac phan tu trong danh sach: "<<sum_list(a)<<endl;
	cout<<"So luong phan tu la nguyen to: "<<element_prime(a)<<endl;
	
	reverseList(a);
	cout<<"Danh sach sau khi dao nguoc: "; 
	print(a);
	
	make_list(a, evenList, oddList);
	
	cout << "Danh sach so le: "; 
    print(oddList);
    cout << "Danh sach so chan: ";
    print(evenList);
	
	int pos; cout<<"Nhap mot phan tu can kiem tra: "; cin>>pos;
	cout<<check_x(a, pos);
	
	freeList(evenList);
	freeList(oddList);	
	return 0;
}




















