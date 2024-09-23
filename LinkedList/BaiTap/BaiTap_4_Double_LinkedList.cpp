#include <iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node* prev;
};
typedef Node* node;
node makeNode(int x){
	node p = new Node();
	p->prev=NULL;
	p->next=NULL;
	p->data=x;
	return p;
}
node head = NULL;
node tail = NULL;
// Them vao cuoi
void append(int x) {
    node newNode = makeNode(x);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
// Them vao dau
void prepend(int x) {
    node newNode = makeNode(x);
    if (!head) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}
//xoa nut
void deleteNode(int x) {
    node temp = head;
    while (temp && temp->data != x) {
        temp = temp->next;
    }
    if (!temp) return; // Node not found

    if (temp->prev) {
        temp->prev->next = temp->next;
    } 
	else {
        head = temp->next; // Deleting the head node
    }

    if (temp->next) {
        temp->next->prev = temp->prev;
    } 
	else {
        tail = temp->prev; // Deleting the tail node
    }

    delete temp;
}
// in tu dau -> cuoi
void printForward() {
    node temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// in tu cuoi -> dau
void printBackward() {
    node temp = tail;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int main(){
    append(7);
    append(4);
    append(8);
    append(5);
    append(2);
    append(3);
    append(9);
    append(1);
    cout<<"In ra danh sach tu dau den cuoi: "; printForward();
    cout<<"In ra danh sach tu cuoi den dau: "; printBackward();
    int x; cout<<"Nhap gia tri phan tu can xoa: "; cin>>x; deleteNode(x);
    cout <<"Danh sach sau khi xoa phan tu co gia tri bang "<<x<<": "; printForward();
	return 0;
}
















