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
