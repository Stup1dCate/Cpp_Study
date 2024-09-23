#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
typedef Node* node;
//tim do lon cua linkedlist
int Size(node a) {
    int size = 0;
    node tmp = a;
    while (tmp != NULL) {
        size++;
        tmp = tmp->next;
    }
    return size;
}
//tao node moi
node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}
//print
void print(node &a){
	node tmp = a;
	while(tmp!=NULL){
		cout<<tmp->data<<" ";
		tmp=tmp->next;
	}
	cout<<endl;
}
//them mot phan tu vao cuoi
void add_last(node &a, int n){
	node tmp = makeNode(n);
	if(a==NULL) a=tmp;
	else{
		node p=a;
		while(p->next!=NULL){
			p=p->next;
		}
		p->next = tmp;
	}
}
//them vao dau
void add_first(node &a, int n){
	node tmp = makeNode(n);
	if(a==NULL){
		a=tmp;
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}
//them vao giua
void add_mid(node &a, int m, int k){
	int n = Size(a);
	if(m<1 || m>n+1){
		cout<<"Vi tri khong hop le !"<<endl; 
		return;
	}
	if(m==1){
		add_first(a, k);
		return;
	}
	else if(m==n+1){
		add_last(a, k);
		return;
	}
	node p = a;
	for(int i=1; i<m-1;i++){
		p=p->next;
	}
	node tmp = makeNode(k);
	tmp->next = p->next;
	p->next=tmp;
}

//tim kiem mot phan tu
void find_element(node &a, int x){
	if(a==NULL){
		return;
	}
	node p= a;
	while(p!=NULL){
		if(p->data == x){
			cout<<"co xuat hien phan tu "<<x<<" trong danh sach "<<endl;
			return;
		}
		p=p->next;
	}
	cout<<"Khong tim thay phan tu mong muon !"<<endl;
}
//xoa phan tu dau
void delete_first(node &a){
	if(a==NULL) return;
	a=a->next;
}
//xoa phan tu cuoi
void delete_last(node &a){
	if(a==NULL) return;
	node left = NULL, right=a;
	while(right->next!=NULL){
		left = right;
		right = right->next;
	}
	if(left == NULL){
		a=NULL;
	}
	else{
		left->next=NULL;
	}
}
//xoa phan tu giua
void delete_mid(node &a, int x){
	int n = Size(a);
	if(x>n+1 || x<1){
		cout<<"Vi tri khong hop le.";
		return;
	}
	node left = NULL, right = a;
	for(int i=1;i<x;i++){
		left=right;
		right=right->next;
	}
	if(left==NULL){
		a=a->next;
	}
	else{
		left->next=right->next;
	}
}
//xoa phan tu nhap vao
void delete_element(node &a, int x) {
    node prev = NULL;
    node temp = a;
    while (temp != NULL) {
        if (temp->data == x) {
        	//phan tu dang xet la phan tu dau tien (prev = NULL)
            if (prev == NULL) { 
                a = temp->next;
                return;
            } 
			else {
                prev->next = temp->next;
                return;
            }
            delete temp;
            return;
        } 
        //dich chuyen phan tu dang xet
		else {
            prev = temp;
            temp = temp->next;
        }
    }
}
//noi hai danh sach lien ket
void add_list(node &a, node &b){
	if(a==NULL){
		a=b;
		return;
	}
	node p=a;
	while(p->next!=NULL){
		p=p->next;
	}
	p->next=b;
}
//sap xep danh sach
void bubblesort(node &a) {
   	if(a==NULL || a->next==NULL) return;
   	bool swapped;
   	node last = NULL;
   	do{
		swapped = false;
		node p = a;
		while(p->next != NULL){
			if(p ->data > p->next->data){
				int tmp = p->data;
				p->data = p->next->data;
				p->next->data = tmp;
				swapped = true;
			   }
			   p=p->next;
		   }
		   last = p;
	   }
   while(swapped);
}
//Dao nguoc danh sach 
node reverse(node a) {
    if (a == NULL || a->next == NULL) return a;

    node reversed = reverse(a->next);
    a->next->next = a;
    a->next = NULL;
    
    return reversed;
}
int main(){
	node a = NULL;
    int n; cout << "Nhap so luong phan tu cua danh sach a: "; cin >> n;
    cout << "Nhap danh sach a: " << endl;
    for (int i = 0; i < n; i++) {
        int tmp; cin >> tmp;
        add_last(a, tmp);
    }

    if (a != NULL) {
        delete_last(a);
        delete_first(a);
        int k; cout << "Nhap phan tu can them: "; cin >> k;
        int m; cout << "Nhap vi tri phan tu can them: "; cin >> m;
        add_mid(a, m, k);
        print(a);
        int t; cout << "Nhap vi tri can xoa: "; cin >> t;
        delete_mid(a, t);
        print(a);
        int x; cout << "Nhap phan tu can tim: "; cin >> x;
        find_element(a, x);
        int f; cout << "Nhap vao gia tri phan tu can xoa: "; cin >> f;
        delete_element(a, f);
        cout << "Danh sach sau khi xoa " << f << ": "; print(a);
    } 
	else {
        cout << "Danh sach a rong!" << endl;
    }

    node b = NULL;
    int o; cout << "Nhap so luong phan tu cua danh sach b: "; cin >> o;
    cout << "Nhap danh sach b: " << endl;
    for (int i = 0; i < o; i++) {
        int tmp; cin >> tmp;
        add_last(b, tmp);
    }
    add_list(a, b);
    bubblesort(a);
	
	cout<<"Danh sach sau khi noi voi danh sach b va sap xep: "; print(a);
	a=reverse(a);
	cout<<"Danh sach sau khi dao nguoc: "; print(a);
	
	return 0;
} 
