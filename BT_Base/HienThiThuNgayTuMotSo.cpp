#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, string> days = {
        {1, "Monday"},
        {2, "Tuesday"},
        {3, "Wednesday"},
        {4, "Thursday"},
        {5, "Friday"},
        {6, "Saturday"},
        {7, "Sunday"}
    };

    int day_number;
    cout << "Nhap vao mot so tu 1 den 7: ";
    cin >> day_number;

    if (days.find(day_number) != days.end()) {
        cout << days[day_number] << endl;
    } else {
        cout << "chu so khong hop le" << endl;
    }

    return 0;
}
