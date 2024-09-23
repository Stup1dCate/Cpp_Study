#include <iostream>
using namespace std;

int main() {
	float a, b, c;
	cout<<"nhap vao canh thu nhat: ";
	cin>>a;
	cout<<"nhap vao canh thu hai: ";
	cin>>b;
	cout<<"nhap vao canh thu hai: ";
	cin>>c;
	 if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Tam giac deu.";
        } else if (a == b || a == c || b == c) {
            cout << "Tam giac can.";
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Tam giac vuong.";
        } else {
            cout << "Tam giac thuong.";
        }
    } else {
        cout << "Day khong phai canh cua tam giac";
    }

    return 0;
} 

