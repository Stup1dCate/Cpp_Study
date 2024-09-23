//Bai1: Danh sach lien ket kep:
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* back;
    Node* next;
    Node(int value) : data(value), back(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    void insert(int data) {
        Node* newNode = new Node(data);
        if (!head) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->back = tail;
            tail = newNode;
        }
    }

    int countOccurrences(int x) {
        int count = 0;
        Node* current = head;
        while (current) {
            if (current->data == x) {
                count++;
            }
            current = current->next;
        }
        return count;
    }

    void deleteValue(int y) {
        Node* current = head;
        while (current) {
            if (current->data == y) {
                if (current == head) {
                    head = head->next;
                    if (head) {
                        head->back = nullptr;
                    }
                } else if (current == tail) {
                    tail = tail->back;
                    if (tail) {
                        tail->next = nullptr;
                    }
                } else {
                    current->back->next = current->next;
                    current->next->back = current->back;
                }
                delete current;
                return;
            }
            current = current->next;
        }
    }

    void sort() {
 	if (!head || !head->next) {
            return;
        }
        Node* current = head;
        while (current) {
            Node* runner = current->next;
            while (runner) {
                if (current->data > runner->data) {
                    int temp = current->data;
                    current->data = runner->data;
                    runner->data = temp;
                }
                runner = runner->next;
            }
            current = current->next;
        }
    }

    void insertSorted(int data) {
	Node* newNode = new Node(data);
        if (!head || head->data >= data) {
            newNode->next = head;
            head = newNode;
        } else {
            Node* current = head;
            while (current->next && current->next->data < data) {
                current = current->next;
            }
            newNode->next = current->next;
            current->next = newNode;
        }
    }

    void reverse() {
    	Node* temp = nullptr;
        Node* current = head;
        while (current) {
            Node* temp = current->back;
            current->back = current->next;
            current->next = temp;
            current = current->back;
        }
        if (temp != nullptr) {
            head = temp->back;
        }
    }
    Node* getHead() {
        return head;
    }
};

int main() {
    DoublyLinkedList myList;

    int n, x, y, m;
    cout << "Nhap so luong phan tu co trong danh sach: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int value;
        cout << "Nhap phan tu thu " << i + 1 << ": ";
        cin >> value;
        myList.insert(value);
    }
	cout<<"Nhap phan tu can kiem tra: "; cin>>x;
    cout << "So phan tu trong danh sach co gia tri bang "<<x <<" la: "<< myList.countOccurrences(x) <<" phan tu"<< endl;
	
	cout<<"Nhap gia tri cua phan tu can xoa: "; cin>>y;
    myList.deleteValue(y);

    myList.sort();
    Node* current = myList.getHead();
	    cout << "Danh sach sau khi sap xep: ";
		    while (current) {
		        cout << current->data << " ";
		        current = current->next;
		    }
		    cout << endl;

    cout << "Nhap so luong phan tu can them vao danh sach: ";
    cin >> m;
    cout << "Nhap gia tri cua cac phan tu can them vao danh sach: " << endl;
    for (int i = 0; i < m; i++) {
        int value;
        cout<<"Nhap phan tu thu "<<i+1<<": ";
        cin>>value;
        myList.insertSorted(value);
    }

    current = myList.getHead();
	    cout << "Danh sach sau khi them va sap xep cac phan tu: ";
		    while (current) {
		        cout << current->data << " ";
		        current = current->next;
		    }
		    cout << endl;

    return 0;
}
