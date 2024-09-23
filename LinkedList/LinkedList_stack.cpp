 //						   				Stack (ngan xep)
#include<iostream>
using namespace std;

struct Node{
	int data;
	Node *next;
};

typedef struct Node* node;

bool CheckEmptyNode(node top){
	return top==NULL;
}

int getSize(node top){
	int ans = 0;
	while(top != NULL){
		ans ++;
		top = top->next;
	}
	return ans;
}
node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->next = NULL;
	return tmp;
}

//Day mot phan tu vao ngan xep
void Push(node &top, int x){
	node tmp = makeNode(x);
	if(top ==NULL){
		top = tmp;
	}
	else{
		tmp->next = top;
		top = tmp;
	}
}

//Xoa phan tu o dau danh sach
void Pop(node &top){
	if(top == NULL){
		return;
	}
	top = top->next;
}

int getTop(node top){
	return top->data;
}

int main(){
	node top = NULL;
	long long n; cout<<"Nhap n: "; cin>>n;
	
	//Vd: Chuyen so thap phan -> nhi phan
	while(n){
		int r= n%2;
		Push(top, r);
		n/=2;
	}
	while(!CheckEmptyNode(top)){
		cout<<getTop(top);
		Pop(top);
	}
	return 0;
}







