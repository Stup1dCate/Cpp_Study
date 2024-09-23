//Dinh nghia Linkedlist
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};

typedef struct Node* node; // typedef: gan' gia tri cua Node* = node. Co the goi lai node thay cho Node*

//Cap phat dong mot node moi voi kieu du lieu so nguyen x
Node *makeNode(int x){
	Node *newNode = new Node(); //newNode la pointer moi 
	newNode->data = x;
	newNode->next = NULL; // NULL
	return newNode;
}

//kiem tra danh sach rong
bool CheckEmpty(node a){
	return a==NULL;
}

//dem cac phan tu trong danh sach
int Size(Node *a){ 
	int count = 0;
	while( a!= NULL){
		count++;
		a=a->next; // gan dia chi cua note tiep theo cho node hien tai
	}
	return count;
}

//Them mot phan tu vao dau danh sach
void insertFirst(node &a, int x){
	Node *tmp = makeNode(x); 
	if(a==NULL){
		a=tmp;		//Neu danh sach rong thi them phan tu vao dau danh sach luon
	}
	else{
		tmp->next=a;
		a=tmp;
	}
}

//Them phan tu vao cuoi danh sach
void insertLast(node &a, int x){
	Node *tmp = makeNode(x); 
	if(a==NULL){
		a=tmp;		//Neu danh sach rong thi them phan tu vao dau danh sach luon
	}
	else{
		Node *p=a;
		while(p->next!=NULL){
			p=p->next; //dich chuyen cac phan tu tu cuoi len 1 donvi
		}
		p->next=tmp; //gan phan tu cuoi (khi nay dang = NULL) bang gia tri can them
	}
}

//Them phan tu vao giua danh sach
void insertMid(node &a, int x, int pos){
	int n=Size(a);
	if(pos <= 0 || pos > n+1){
		cout<<"Vi tri khong hop le !";
	}
	//vi tri dau tien
	if(n==1){
		insertFirst(a, x); return;
	}
	//vi tri cuoi
	else if(n == pos+1){
		insertLast(a, x); return;
	}
	Node *p = a;
	for(int i=1; i<pos-1;i++){
		p=p->next;
	}
	Node *tmp = makeNode(x);
	tmp->next = p->next;
	p->next = tmp;
}

//Xoa phan tu dau
void deleteFisrt(node &a){
	if(a==NULL) {return;}
	a=a->next; 
}

//Xoa phan tu cuoi
void deleteLast(node &a){
	if(a==NULL){return;}
	node left = NULL; node right = a;
	while(right->next != NULL){
		left=right;
		right=right->next;
	}
	if(left==NULL){ //tuc la right dang tro toi phan tu duy nhat la a. Nen ta cho a=NULL => xoa phan tu duy nhat do'
		a=NULL;
	}
	else{ //sau vong lap while: khi nay chi con left nen ta co the hieu code <=> right -> next = NULL;
		left->next = NULL;
	}
}

//Xoa phan tu o giua
void deleteMid(node &a, int pos){
	if(pos <= 0 || pos > Size(a)){
		cout<<"Vi tri khong hop le !";
	}
	node left = NULL; node right = a;
	for(int i=0; i<pos; i++){
		left = right;
		right = right->next;
	}
	if(left == NULL){
		a=a->next;
	}
	else{
		left->next = right->next;
	}
}

//In ra danh sach
void Print(node a){
	cout<<"Danh sach lien ket don co dang: "<<endl;
	while(a!=NULL){
		cout<<a->data<<" ";
		a=a->next;
	}
	cout<<endl;
	cout<<"-----------------------------------------------------------\n";
}

//Sap xep danh sach lien ket: su dung BubbleSort
void sort(node &a){
	for(node p=a; p->next!=NULL; p=p->next){
		node min=p;
		for(node q=p->next; q!=NULL; q=q->next){
			if(q->data < min->data){
				min = q;
			}
		}
		swap(p->data, min->data);
	}
}

int main(){
	Node *head=NULL;
	int menu;
	 do {
    	cout<<"\t\tChon mot menu: \n";
    	cout<<"1. Chen phan tu vao dau danh sach.\n";
    	cout<<"2. Chen phan tu vao cuoi danh sach\n";
    	cout<<"3. Chen phan tu vao giua danh sach.\n";
    	cout<<"4. Xoa phan tu o dau danh sach.\n";
    	cout<<"5. Xoa phan tu o cuoi danh sach.\n";
    	cout<<"6. Xoa phan tu o giua danh sach.\n";
    	cout<<"7. Duyet qua danh sach lien ket.\n";
    	cout<<"8. Sap xep cac phan tu trong danh sach lien ket.\n";
    	cout<<"0. Thoat.\n";
    	cout<<"Nhap lua chon:";
    	cin>>menu;
    	
    	switch (menu) {
    		case 0:
    			return 0;
    			break;	
    		case 1:
    			int x; cout<<"Nhap gia tri can chen: "; cin>>x;
				insertFirst(head, x);
				break;
    		case 2:
    			int y; cout<<"Nhap gia tri can chen: "; cin>>y;
    			insertLast(head, y);
    			break;
    		case 3:
				int z; cout<<"Nhap gia tri can chen: "; cin>>z;
				int pos_1; cout<<"Nhap vi tri can chen: "; cin>>pos_1;
				insertMid(head, x, pos_1);
				break;
			case 4:
				deleteFisrt(head);
				break;
			case 5:
				deleteLast(head);
				break;
			case 6:
				int pos_2; cout<<"Nhap vi tri can xoa: "; cin>>pos_2;
				deleteMid(head, pos_2);
				break;
			case 7:
				Print(head);
				break;
			case 8:
				sort(head);
				break;
			default: 
			cout<<"So da nhap khong hop le. Vui long nhap lai !"<<endl;		
		}
	}
	while (true);
	return 0;
}














