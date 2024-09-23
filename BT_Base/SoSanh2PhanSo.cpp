// Cho phan so, trong do tu so va mau so la cac so nguyen. Hay viet chuong trinh gom cac ham thuc hien cong viec sau: 
//	a) Nhap tu ban phim va in ra man hinh mot phan so.
//	b) Viet ham toi gian phan so.
//	c) Viet ham so sanh 2 phan so x va y, ket qua cua phep so sanh lan luot la -1, 0, 1 neu phan so x
//	lon hon, bang, nho hon phan so y.
//	d) viet ham main() thuc hien cac cong viec tren	
	
#include<iostream>
using namespace std;
int uoc_chung(int a, int b);
void toigian(int &n, int &m);
int sosanh(int x1, int x2, int y1, int y2);
int sosanh_2_phanso(int x1, int x2, int y1, int y2);


		int uoc_chung(int a, int b){
			while (b!=0){
				int temp = b;
				b = a%b;
				a=temp;
			}
			return a;
		}
		
		
		void toigian(int &n, int &m){
			int uoc_so = uoc_chung(n, m);
			n /= uoc_so;
			m /= uoc_so;
		}



int sosanh_2_phanso(int x1, int x2, int y1, int y2){
	
	cout<<"Nhap vao phan so x: "<<endl;
	cout<<"- Nhap tu so: "; cin>>x1;
	cout<<"- Nhap mau so: ";cin>>x2;
	while (x2 == 0) {
        cout << "Mau so da nhap khong hop le. Vui long nhap lai: ";
        cin >> x2;
    }
    
	cout<<"Nhap vao phan so y: "<<endl;
	cout<<"- Nhap tu so: "; cin>>y1;
	cout<<"- Nhap mau so: ";cin>>y2;
	while (y2 == 0) {
        cout << "Mau so da nhap khong hop le. Vui long nhap lai: ";
        cin >> y2;
    }
    
	toigian(x1, x2);
	toigian(y1, y2);
	
	int kqua = sosanh(x1, x2, y1, y2);

    if (kqua == -1) {
        cout << "Phan so x nho hon phan so y." << endl;
    }
	else if (kqua == 1) {
        cout << "Phan so x lon hon phan so y." << endl;
    } 
	else {
        cout << "Phan so x bang phan so y." << endl;
    }
    return 0;
		
}


int sosanh(int x1, int x2, int y1, int y2) {
    x1 *= y2;
    y1 *= x2;

    if (x1 < y1) {
        return -1;
    } else if (x1 > y1) {
        return 1;
    } else {
        return 0;
    }
}

	
int main(){
	int n, m;
	cout<<"Nhap vao phan so: "<<endl;
	cout<<"Nhap tu so: "; cin>>n;
	cout<<"Nhap mau so: ";cin>>m;
	while (m == 0) {
        cout << "Mau so da nhap khong hop le. Vui long nhap lai: ";
        cin >> m;
    }
    cout<<"Phan so ban dau la: "<<n<<"/"<<m<<endl;
	toigian(n, m);
	if (m == 1) {
        cout<<"Phan so sau khi toi gian la: "<<n<<endl;
    } 
	else {
        cout<<"Phan so sau khi toi gian la: "<<n<<"/"<<m<<endl;
    }
    cout<<endl;
	sosanh_2_phanso(n, m, n, m);

	return 0;
}
