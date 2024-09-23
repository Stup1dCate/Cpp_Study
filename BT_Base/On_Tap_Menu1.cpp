// BAI TAP VE MENU:

//Lap mot Menu gom cac yeu cau sau:
//	1.	Thuc thi ham luy thua x^y (voi 2 so nguyen x, y nhap vao tu ban phim).
//	2.	Thuc thi ham tinh giai thua n!
//	3.	Thuc thi ham kiem tra n nhap vao co phai so nguyen to khong.
//	4.	Thuc thi ham in danh sach cac so nguyen to < n.
//	5.	Thuc thi ham tinh phuong trinh bac nhat ax + b = 0
//	6.	Thuc thi ham tinh phuong trinh bac hai ax^2 + bx + c = 0
//	7.	Thuc thi ham in ra hinh chu nhat kich thuoc 2n x n
//	8.	Thuc thi ham tinh S = 4^8 + 8! - 10^3 + 3! - 3^5 + 5! - 4^8
//	9.	Thoat Menu.
// Neu nhap sai thi yeu cau nguoi dung nhap lai. Lap lai cac yeu cau cua nguoi dung den khi chon 9 (thoat) thi dung chuong trinh
//=================================================================================================================================================
		#include<iostream>
		#include<cmath>
		#include<string>
		using namespace std;
		void MN1(int &x, int &y);
		void MN2(int &n);
		bool MN3(int &n);
		int MN4(int &n);
		void MN5(float &a, float &b);
		float MN6(float &a, float &b, float &c);
		void MN7(int &n, int arr[100][100]);
		void MN8();
		int MN9();
		
		int main(){
			int menu;
			int x, y, n;
			float a, b, c;
			int arr[100][100];
			bool choice = false;
			do{
				cout<<"\t\t\tCHON MOT YEU CAU: "<<endl;
				cout<<"1. Thuc thi ham luy thua x^y (voi 2 so nguyen x, y nhap vao tu ban phim)."<<endl;
				cout<<"2. Thuc thi ham tinh giai thua n!"<<endl;
				cout<<"3. Thuc thi ham kiem tra n nhap vao co phai so nguyen to khong."<<endl;
				cout<<"4. Thuc thi ham in danh sach cac so nguyen to < n."<<endl;
				cout<<"5. Thuc thi ham tinh phuong trinh bac nhat ax + b = 0"<<endl;
				cout<<"6. Thuc thi ham tinh phuong trinh bac hai ax^2 + bx + c = 0"<<endl;
				cout<<"7. Thuc thi ham in ra hinh chu nhat kich thuoc 2n x n"<<endl;
				cout<<"8. Thuc thi ham tinh S = 4^8 + 8! - 10^3 + 3! - 3^5 + 5! - 4^8"<<endl;
				cout<<"9. Thoat Menu."<<endl;
				cout<<"Vui long chon yeu cau so [1-9]: ";
				cin>>menu;
				
				switch(menu){
				case 1:
				MN1(x, y);
				break;
				case 2:
				MN2(n);
				break;
				case 3:
				MN3(n);
				break;
				case 4:
				MN4(n);
				break;
				case 5:
				MN5(a, b);
				break;
				case 6:
				MN6(a, b, c);
				break;
				case 7:
				MN7(n, arr);
				break;
				case 8:
				MN8();
				break;
				case 9:
			    if (MN9() == 0) {
			        return 0;
			    }
		   		break;
				
				default:
				cout<<"Yeu cau khong hop le. Vui long nhap lai ! "<<endl;
				system("cls");
				break;		
				}
				if (!choice){
				char tt;
		        cout << "Tiep tuc chon cau lenh ? (y/n): ";
		        cin >> tt;
		        if (tt != 'y' && tt != 'Y') {
		            cout << "Ket thuc chuong trinh." << endl;
		            break;
		        }
		        system("cls");
				}
			}
				while(!choice);
				return 0;
		}
	
		
		
			
		void MN1(int &x, int &y){
			cout<<"Nhap vao so can tinh luy thua: ";
			cin>>x;
			cout<<"Nhap vao luy thua bac: ";
			cin>>y;
			int luythua = pow(x,y);
			cout<<"Luy thua bac "<<y<<" cua "<<x<<" la: "<<luythua;
			cout<<endl;
		}
		
		
		
		void MN2(int &n){
			cout<<"Nhap so can tinh giai thua: ";
			cin>>n;
			cout<<"Giai thua cua "<<n<<" la: ";
			long long giaithua = 1;
			for(int i=n;i>=1;i--){
				giaithua*=i;
			}
			cout<<giaithua<<endl;
		}
		
		
		
		bool MN3(int &n){
			cout<<"Nhap vao so can kiem tra: ";
			cin>>n;
			for(int i=2;i<n;i++){
				if(n%i==0){
					cout<<n<<" khong phai so nguyen to."<<endl;
					return 0;
				}
				else{
					cout<<n<<" la so nguyen to."<<endl;
					return 0;
				}
			}
		}
		
		
		
		int MN4(int &n){
			cout<<"Nhap vao gia tri cua so n: ";
			cin>>n;
			if(n<=2){
				cout<<"Khong co so nguyen to nao < "<<n<<endl;
				return 0;
			}
			if(n<=3){
				cout<<"Cac so nguyen to < "<<n<<" gom: 2"<<endl;
				return 0;
			}
			cout<<"Cac so nguyen to < "<<n<<" gom: "<<endl;
		    for (int i=2; i<n; i++) {
			        bool kt = true;
			        for(int j=2; j<i; j++){
			            if(i%j==0){
			                kt = false;
			                break;
			            }
			        }
		        if (kt)
		            cout<<i<< " ";
		    }
		    cout<<endl;
		}
		
		
		
		void MN5(float &a, float &b){
			cout<<"Nhap vao gia tri a: ";
			cin>>a;
			cout<<"Nhap vao gia tri b: ";
			cin>>b;
			if(a==0 && b==0){
				cout<<"Phuong trinh co vo so nghiem."<<endl;
			}
			else if(a==0 && b !=0){
				cout<<"Phuong trinh vo nghiem."<<endl;
			}
			else if(b==0 && a!=0){
				cout<<"Phuong trinh co nghiem duy nhat x = 0."<<endl;
			}
			else{
				double nghiem =-b/a;
				cout<<"Phuong trinh co nghiem: "<<nghiem<<endl;
			}
		}
		
		
		
		float MN6(float &a, float &b, float &c){
			cout<<"Nhap vao gia tri a: ";
			cin>>a;
			cout<<"Nhap vao gia tri b: ";
			cin>>b;
			cout<<"Nhap vao gia tri c: ";
			cin>>c;
			if (a==0) {
		        cout<<"Phuong trinh khong phai la phuong trinh bac 2."<<endl;
		        return 0;
		    }
			double delta = b*b-4.0*a*c;
			if(b==0 && c < 0){
				cout<<"Phuong trinh co 2 nghiem: ";
				double nghiem1 = sqrt(-c/a);
				double nghiem2 = -sqrt(-c/a);
				cout<<"x1 = "<<nghiem1<<" va x2 = "<<nghiem2<<endl;
			}
			else if(b==0 && c==0){
				cout<<"Phuong trinh co nghiem kep x1 = x2 = 0"<<endl;
			}
			else if(b==0 && c > 0){
				cout<<"Phuong trinh vo nghiem."<<endl;
			}
			else if(delta>0){
			cout<<"Phuong trinh co 2 nghiem phan biet: "<<endl;
			double N1 = (-b+sqrt(delta))/(2*a);
			double N2 = (-b-sqrt(delta))/(2*a);
			cout<<"x1 = "<<N1<<" va x2 = "<<N2<<endl;
			}
			else if (delta == 0){
				double NN= -b/(2*a);
				cout<<"Phuong trinh co nghiem kep x1 = x2 = "<<NN<<endl;
			}
			else if(delta < 0){
				cout<<"Phuong trinh vo nghiem."<<endl;
			}
		}
		
		
		
		void MN7(int &n, int arr[100][100]){
			cout<<"Nhap so n: ";
			cin>>n;
			cout<<"Hinh vuong rong co dang "<<2*n <<"x"<<n<<" la: "<<endl; 
			for(int i=0;i<n;i++){
				for(int j=0;j<2*n;j++){
					if(i==0||j==0||i==n-1||j==2*n-1){
						cout<<"* ";
					}
					else{
						cout<<"  ";
					}
				}
				cout<<endl;
			}
		}
		
		
		
		void MN8(){
			double Tong;
			Tong= - pow(3, 5) - pow(10, 3);
			float gt1=1;
			for(int i=1;i<=8;i++){
				gt1*=i;
			}
			float gt2=1;
			for(int j=1;j<=5;j++){
				gt2*=j;
			}
			float gt3=1;
			for(int k=1;k<=3;k++){
				gt3*=k;
			}
			cout<<"Gia tri cua tong S la: ";
			cout<< Tong+gt1+gt2+gt3<<endl;
		}
		
		
		
		
		int MN9(){
			cout<<"Ket thuc chuong trinh. "<<endl;
			return 0;
		}







