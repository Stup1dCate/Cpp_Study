/* nhập vào tổng số tiền và in ra màn hình tổng số tờ tiền cần cho tổng số tiền đó 
ưu tiên tờ tiền có mệnh giá lớn nhất trước*/

#include <iostream>
using namespace std;
int main() {
    int tien, so_to;
    cout << "nhap tong so tien: ";
    cin >> tien;
    so_to = 0;
    if (tien >= 500000) {
        so_to += tien / 500000;
        tien %= 500000;
    }
    if (tien >= 200000) {
        so_to += tien / 200000;
        tien %= 200000;
    }
    if (tien >= 100000) {
        so_to += tien / 100000;
        tien %= 100000;
    }
    if (tien >= 50000) {
        so_to += tien / 50000;
        tien %= 50000;
    }
    if (tien >= 20000) {
        so_to += tien / 20000;
        tien %= 20000;
    }
    if (tien >= 10000) {
        so_to += tien / 10000;
        tien %= 10000;
    }
    if (tien >= 5000) {
        so_to += tien / 5000;
        tien %= 5000;
    }
    if (tien >= 2000) {
        so_to += tien / 2000;
        tien %= 2000;
    }
    if (tien >= 1000) {
        so_to += tien / 1000;
        tien %= 1000;
    }
    if (tien == 1000) {
        so_to++;
    }
    cout << "tong so to tien la: " << so_to << endl;
    return 0;
}
