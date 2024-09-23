#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
	node *prev;
};

node *makenode(int x){
	node *newnode = new node;
	newnode->data=x;
	newnode->next= NULL;
	newnode->prev= NULL;
	return newnode;
}

int Count(node *head){
	int count=0;
	while(head != NULL){
		count++;
		head = head->next;
	}
    return count;
}

void print(node *head){
	while(head != NULL){
		cout<<head->data<<" ";
		head = head->next;
	}
	cout<<endl;
}

//them phan tu vao dau
void addhead(node *&head, int x){
	node *newnode = makenode(x);
	newnode->next=head; // cho phan next cua node moi tro vao node dau hien tai
	if(head!=NULL){
		head->prev = newnode;
	}
	head=newnode;
}

//them phan tu vao cuoi
void addtail(node *&head, int x){
	node *newnode = makenode(x);
	if(head==NULL){
		head = newnode;
		return;
	}
	node *temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;
}

//them phan tu vao giua
void addmid(node *&head, int x, int k){
	int n = Count(head);
	if(k < 1 || k>n+1){
		cout<<"Danh sach khong hop le"; return;
	}
	if(k==1){
		addhead(head, x); return;
	}
	node *temp = head;
	for(int i=1;i<k-1;i++){
		temp =temp->next;
	}
	node *newnode = makenode(x);
	newnode->next=temp->next;
	temp->next=newnode;
	newnode->prev= temp;
	if(newnode->next != NULL){
		newnode->next->prev = newnode;
	}
}

int main(){
	node *head=NULL;
	int menu;
	 do {
    	cout<<"\t\tChon mot menu: \n";
    	cout<<"1. Chen phan tu vao dau danh sach.\n";
    	cout<<"2. Chen phan tu vao cuoi danh sach\n";
    	cout<<"3. Chen phan tu vao giua danh sach.\n";
   	    cout<<"4. print.\n";
    	cout<<"0. Thoat.\n";
    	cout<<"Nhap lua chon:";
    	cin>>menu;
    	
    	switch (menu) {
    		case 0:
    			return 0;
    			break;	
    		case 1:
    			int x; cout<<"Nhap gia tri can chen: "; cin>>x;
				addhead(head, x);
				break;
    		case 2:
    			int y; cout<<"Nhap gia tri can chen: "; cin>>y;
    			addtail(head, y);
    			break;
    		case 3:
				int z; cout<<"Nhap gia tri can chen: "; cin>>z;
				int k; cout<<"Nhap vi tri can chen: "; cin>>k;
				addmid(head, z, k);
				break;
            case 4:
                print(head);
                break;
			default: 
			cout<<"So da nhap khong hop le. Vui long nhap lai !"<<endl;		
		}
	}
	while (true);
	return 0;
}

