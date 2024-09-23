#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left;
	Node *right;
};
typedef Node* node;
node makeNode(int x){
	node tmp = new Node();
	tmp->data = x;
	tmp->left = NULL;
	tmp->right = NULL;
	return tmp;
} 
bool isprime(int x){
	if(x<2) return false;
	for(int i=2;i*i<=x;i++){
		if(x%i==0) return false;
	}
	return true;
}
//cac cac duyet cay nhi phan pho bien:
void preorder(node root){
	if(root!=NULL){
		cout<<root->data<<" ";
		preorder(root->left);
		preorder(root->right);
	}
}
void postorder(node root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		cout<<root->data<<" ";
	}
}
void inorder(node root){
	if(root!=NULL){
		inorder(root->left);
		cout<<root->data<<" ";
		inorder(root->right);
	}
}
//them nut vao cay
node add_node_tree(node &root, int key){
	if(root==NULL){
		root = makeNode(key);
	}
	if(key<root->data){
		root->left=add_node_tree(root->left, key);
	}
	else if(key>root->data){
		root->right=add_node_tree(root->right, key);
	}
	return root;
}
//Dem so luong la
int leaveCount(node root){
	if(root==NULL) return 0;
	if(root->left == NULL && root->right==NULL){
		return 1;
	}
	return leaveCount(root->left)+leaveCount(root->right);
}
//Dem so luong nut
int nodeCount(node root){
	if(root==NULL) return 0;
	return 1+nodeCount(root->right)+nodeCount(root->left);
}
//Tim max trong cay
int max_node(node root){
	node p = root;
	if(root==NULL){
		cout<<"Cay khong chua bat ki phan tu nao !"<<endl;
		return 0;
	}
	int max_element = p->data;
	while(p!=NULL){
		if(p->data>max_element){
			max_element = p->data;
		}
		p=p->right;
	}
	return max_element;
}
//Tong gia tri cua cac nut trong cay
int sum_node(node root){
	int sum_element_node = 0;
	if(root!=NULL){
		sum_element_node+=root->data;
		sum_element_node+=sum_node(root->left);
		sum_element_node+=sum_node(root->right);
	}
	return sum_element_node;
}
//Tong gia tri cua cac la trong cay
int sum_leave(node root){
	if (root==NULL){
		return 0;
	}
    if (root->left == NULL && root->right == NULL) {
        return root->data; 
    }
    return sum_leave(root->left) + sum_leave(root->right);
}
//Dem xem co bao nhieu nut la so nguyen to
int count_prime_node(node &root) {
    if (root!=NULL) {
        if (isprime(root->data)) {
            cout<<root->data<<" ";
        }
        count_prime_node(root->left);
        count_prime_node(root->right);
    }
}
//kiem tra xem nut n la nut la hay la nut cha 
bool isLeaveNode(node root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x && root->left == NULL && root->right == NULL) {
        return true; 
    }
    return isLeaveNode(root->left, x) || isLeaveNode(root->right, x);
}

bool isParentNode(node root, int x) {
    if (root == NULL) {
        return false;
    }
    if (root->data == x && (root->left != NULL || root->right != NULL)) {
        return true;
    }
    return isParentNode(root->left, x) || isParentNode(root->right, x);
}

void checkNode(node root, int x) {
    bool isLeave = isLeaveNode(root, x);
    bool isNode = isParentNode(root, x);
    if (isLeave) {
        cout<<x<<" la mot nut la trong cay."<<endl;
    } 
	else if (isNode) {
        cout<<x<<" la mot nut cha trong cay."<<endl;
    } 
	else {
        cout<<x<<" khong ton tai trong cay."<<endl;
    }
}

//xoa phan tu nhap vao
node findMin(node a) {
    while (a->left!=NULL) {
        a=a->left;
    }
    return a;
} 
node deleteNode(node root, int x){
	if(root==NULL) return 0;
	//neu phan tu can xoa be hon hoac lon hon phan tu goc. Goi de quy den khi nao tim duoc phan tu do
	else if(x<root->data){
		root->left=deleteNode(root->left, x);
	}
	else if(x>root->data){
		root->right=deleteNode(root->right, x);
	}
	else{
		//Nut can xoa la nut la'. 
		if (root->left==NULL&&root->right==NULL) {
            delete root; return NULL;
        }
        //nut can xoa co mot con thi nut con do se thay the nut dang xoa 
		else if(root->left==NULL){
			node temp=root->right;
			delete root; return temp;
		}
		else if(root->right==NULL){
			node temp=root->left;
			delete root; return temp;
		}
		//nut can xoa co 2 con thi lay con nho hon de thay the nut xoa hien tai
		node tmp = findMin(root->right);
		root->data=tmp->data;
		root->right=deleteNode(root->right, tmp->data);
	}
	return root;
}

//Tim chieu cao cua mot cay
int height(node root) {
    if (root==NULL) {return -1;} 
	else {
        int left = height(root->left);
        int right = height(root->right);

        if (left>right) {
            return left + 1;
        } 
		else {
            return right + 1;
        }
    }
}

//Dem so nut co mot con va so nut co hai con
int count_node_1child(node root){
	if(root==NULL||(root->left==NULL&&root->right==NULL)) return 0;
	int count=0;
	if((root->left!=NULL&&root->right==NULL)||(root->left==NULL&&root->right!=NULL)){
		count++;
	}
	count+=count_node_1child(root->left);
	count+=count_node_1child(root->right);
	
	return count;
}
int count_node_2child(node root){
	if(root==NULL||(root->left==NULL&&root->right==NULL)) return 0;
	int count=0;
	if(root->left!=NULL&&root->right!=NULL){
		count++;
	}
	count+=count_node_2child(root->left);
	count+=count_node_2child(root->right);
	
	return count;
}

//In cac nut tren duong di tu goc den nut co gia tri x
bool hasPath(node root, int a[], int x, int &path_index) {
    if (!root) return false;

    a[path_index] = root->data;
    path_index++;

    if (root->data == x)
        return true;

    if (hasPath(root->left, a, x, path_index) || hasPath(root->right, a, x, path_index))
        return true;

    path_index--;
    return false;
}
void printPath(node root, int x) {
    int a[1000];
    int path_index = 0;
    if (hasPath(root, a, x, path_index)) {
        for (int i=0; i<path_index; i++)
            cout << a[i] <<" ";
    }
    else
        cout << "Khong tim thay duong di ";
}
int main(){
	node root = NULL;
	root = add_node_tree( root, 6 );
    root = add_node_tree( root, 8 );
    root = add_node_tree( root, 4 );
    root = add_node_tree( root, 2 );
    root = add_node_tree( root, 3 );
    root = add_node_tree( root, 9 );
    root = add_node_tree( root, 7 );
    root = add_node_tree( root, 1 );
	cout<<"Duyet theo tien thu tu (preorder): "<<endl; preorder(root); cout<<endl;
	cout<<"Duyet theo trung thu tu (postorder): "<<endl; postorder(root); cout<<endl;
	cout<<"Duyet theo hau thu tu (inorder): "<<endl; inorder(root); cout<<endl;
	cout<<"Chieu cao cua cay la: "<<height(root)<<endl;
	cout<<"Gia tri luon nhat trong cay nhi phan la: "<<max_node(root); cout<<endl;
	int node_count = nodeCount(root);
	cout<<"So nut cua cay la: "<<node_count<<endl;
	int leave_count = leaveCount(root);
	cout<<"So la cua cay la: "<<leave_count<<endl;
	cout<<"So nut co 2 con: "<<count_node_2child(root)<<endl;
	cout<<"So nut co 1 con: "<<count_node_1child(root)<<endl;
	int sumNode=sum_node(root);
	int sumLeave=sum_leave(root);
	cout<<"Tong gia tri cac nut cua cay la: "<<sumNode<<endl;
	cout<<"Tong gia tri cac la cua cay la: "<<sumLeave<<endl;
	cout<<"So nut mang gia tri nguyen to la: "; 
	count_prime_node(root); cout<<endl;
	
	int node_add;
	cout<<"Nhap mot gia tri can them vao cay nhi phan: "; cin>>node_add;
	add_node_tree(root, node_add);
	cout<<"Cay nhi phan sau khi them phan tu "<<node_add<<" (preorder): "<<endl; preorder(root); cout<<endl;
	
	int node_check_leave;
	cout<<"Nhap mot gia tri nut can kiem tra: "; cin>>node_check_leave;
	checkNode(root, node_check_leave);
	
	int delete_element; cout<<"Nhap vao gia tri nut can xoa: "; cin>>delete_element;
	deleteNode(root, delete_element);
	cout<<"Cay nhi phan sau khi xoa phan tu "<<delete_element<<" (preorder): "<<endl; preorder(root); cout<<endl;
	int x; cout<<"Nhap vao gia tri cua nut can tim duong di: "; cin>>x;
 	cout<<"Duong di den nut "<<x<<" la: "<<endl; printPath(root, x);
	return 0;
}




