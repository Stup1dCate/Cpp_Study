#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Nhap vao so luong so can so sanh: ";
    cin >> n;

    vector<int> numbers(n);
    cout << "Nhap vao cac so: ";
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int max_number = *max_element(numbers.begin(), numbers.end());
    cout << "So lon nhat trong cac so do la: " << max_number << endl;

    return 0;
}
