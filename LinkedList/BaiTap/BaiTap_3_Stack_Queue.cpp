#include<iostream>
#include<queue> //FIFO: first in fisrt out
#include<stack> //LIFO: Last in fisrt out
using namespace std;
//Cac ham cua queue & stack:
/*
	push(): nhap vao gia tri cua mot phan tu
	pop(): xoa phan tu dau tien trong day
	empty(): kiem tra day co rong hay khong
	size(): kich thuoc cua day
	front() - queue: 
	      +        =>  lay ra phan tu dau cua hang doi
	pop() - stack:
*/
int main(){
//	int n; cin>>n;
	queue<int> q;
	stack<int> st; 
	q.push(2); st.push(2);
	q.push(6); st.push(6);
	q.push(8); st.push(8);
	q.push(4); st.push(4);
	q.push(5); st.push(5);
	cout<<"Danh sach cua stack: "<<endl;
	while(!st.empty()){
		cout<<st.top()<<" ";
		st.pop();
	}
	cout<<endl;
	cout<<"Danh sach cua queue: "<<endl;
	while(!q.empty()){
		cout<<q.front()<<" ";
		q.pop();
	}
	cout<<endl;
	return 0;
}





//Bai tap tim muc trong binarytree
#include<iostream>
#include<queue>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
typedef Node* node;
node makeNode(int x){
	node tmp=new Node();
	tmp->data=x;
	tmp->left=NULL;
	tmp->right=NULL;
	return tmp;
}
node insert(node &root, int x){
	if(root==NULL){
		root= makeNode(x);
	}
	if(x<root->data){
		root->left=insert(root->left, x);
	}
	else if(x>root->data){
		root->right=insert(root->right, x);
	}
	return root;
}
void preorder(node root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}

void level_node(node root, int k, int curr_level = 0) {
    if (root==NULL) {return;}
    if (curr_level==k) {
        cout<<root->data<< " ";
    }
    level_node(root->left, k, curr_level + 1);
    level_node(root->right, k, curr_level + 1);
}

void print_levels(node root) {
    if (root == NULL) return;
    
    queue<node> q;
    q.push(root);

    int level = 0;
    while (!q.empty()) {
        int size = q.size();
        cout<<"Level "<<level<<": ";
        for (int i=0;i<size;i++) {
            node node = q.front();
            q.pop();
            cout<<node->data << " ";
            if (node->left != NULL) {
                q.push(node->left);
            }
            if (node->right != NULL) {
                q.push(node->right);
            }
        }
        cout <<endl;
        level++;
    }
}


int main(){
	node root=NULL;
	insert(root, 5);
    insert(root, 2);
    insert(root, 3);
    insert(root, 7);
    insert(root, 9);
    insert(root, 1);
    insert(root, 6);
    insert(root, 10);
    insert(root, 4);
    
    cout<<"Cay nhi phan ban dau co dang (preorder): "<<endl;
    preorder(root); cout<<endl;
    
    int k; cout<<"Nhap vao muc can kiem tra: "; cin>>k;
    cout<<"Cac phan tu o muc "<<k<<" la:";
    level_node(root, k); cout<<endl;
    
    print_levels(root);
	return 0;
}










