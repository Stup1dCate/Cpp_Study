//B1: Liet ke tat ca chuoi n bit
/*
#include<iostream>
using namespace std;

void Binary(int i, int result[], int n) {
    if (i==n) {
        for (int j=0;j<n; j++) {
            cout<<result[j]<<" ";
        }
        cout << endl;
    } 
	else {
        for (int j = 0; j <= 1; j++) {
            result[i] = j;
            Binary(i + 1, result, n);
        }
    }
}

int main() {
    int n;
    cout<<"Nhap so luong bit: ";cin>>n;

    int result[n];

    cout << "Tat ca cac chuoi nhi phan co " << n << " bit la:" << endl;
    Binary(0, result, n);

    return 0;
}
*/



//B2: liet ke n quan hau tren ban co vua nxn sao cho chung khong an lan nhau:

/*
#include <iostream>
#include <vector>
using namespace std;

bool kiemtra(int hang, int cot, const vector<int>& banco) { //kiem tra cac quan hau co an lan nhau khong
    for (int i = 0; i < hang; i++) {
        if (banco[i] == cot || abs(banco[i] - cot) == abs(i - hang)) { //abs(banco[i] - cot) == abs(i - hang): kiem tra tren duong cheo
            return false;
        }
    }
    return true;
}

void printBoard(const vector<int>& banco) {
    int n = banco.size();
    for (int i = 0; i < n; i++) {
        char ToaDoHang = static_cast<char>('a' + i); // chuyen doi gia tri so nguyen (i) sang gia tri char tuong ung (tu a->z)
        cout << "Q" << ToaDoHang << banco[i] + 1 << " ";
    }
    cout << endl;
}

void solveNQueens(int hang, int n, vector<int>& banco, int& count) {
    if (hang == n) {
        printBoard(banco);
        count++;
        return;
    }

    for (int cot = 0; cot < n; cot++) {
        if (kiemtra(hang, cot, banco)) {
            banco[hang] = cot;
            solveNQueens(hang + 1, n, banco, count);
            banco[hang] = -1;  
        }
    }
}

int main() {
    int n;
    cout << "Nhap kich thuoc ban co (n): "; cin >> n;

    vector<int> banco(n, -1);  
    int count = 0;  
    solveNQueens(0, n, banco, count);

    cout << "Tong so cach sap xep: " << count << endl;

    return 0;
}
*/































