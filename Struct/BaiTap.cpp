//1. viet truong trinh nhap vao du lieu ban kinh cua mot hinh tron. Tính va in ra chu vi, dien tich.
/*
#include<iostream>
using namespace std;
const float pi = 3.14159;
struct circle{
	float r;
	circle(float _r){
		r= _r;
	}
		float chuvi(){
			return 2*pi*r;
		}
		float S(){
			return r*r*pi;
		}
	friend istream& operator>>(istream &is, circle &c){ 
		cout<<"Nhap ban kinh: ";
		cin>>c.r;
		
		return is;
	}	
	friend ostream& operator<<(ostream &os, circle &c){ 
		os<<"Chu vi hinh tron: "<<c.chuvi()<<endl;
		os<<"Dien tich hinh tron: "<<c.S();
		return os;
	}	
};
int main(){
	circle c(0);
	cin>>c;
	cout<<c;
	return 0;
}
*/



//2. Viet chuong trình quan lý san pham (tên, don giá, so luong) gom các chuc nang sau:
//Xem danh sách san pham
//Thêm san pham moi
//Xóa san pham
		#include<iostream>
		#include<string>
		using namespace std;
	
		struct sanpham{
			string ten;
			float gia;
			int n;
			
			friend istream& operator>>(istream &is, sanpham &sp){
				cout<<"Nhap ten san pham: ";
				getline(is, sp.ten);
				cout<<"Nhap don gia: ";
				is>>sp.gia;
				cout<<"Nhap so luong: ";
				is>>sp.n;
				
				return is;
			}
			friend ostream& operator<<(ostream &os, sanpham &sp){
				os<<"Ten san pham: "<<sp.ten<<endl;
				os<<"Don gia: "<<sp.gia<<endl;
				os<<"So luong: "<<sp.n<<endl;
				
				return os;
			}
		};
		
		//nguyen mau ham:
		int menu();
		void insp(sanpham *sp, int size);
		void add(sanpham *sp, int &size);
		
		
		int main(){
			int size =0;
			sanpham *sp=new sanpham[size];
			do{
				int chon = menu();
				system ("cls");
				switch(chon){
					case 1:
						insp(sp, size);
						break;
					case 2:
						//them
						break;
					case 3:
						//xoa
						break;
					case 0:
			
						break;
					default:
						cout<<"Lua chon khong hop le ! Vui long nhap lai. "<<endl;									
				}
				char tt;
		        cout << "Tiep tuc lua chon ? (y/n): ";
		        cin >> tt;
		
		        if (tt != 'y' && tt != 'Y') {
		        	cout<<"KET THUC TRUONG TRINH.";
		            break; 
		        }
			}
			while(true);
			return 0;
		}	
		int menu(){
			system("cls");
			int chon;
			cout<<"\t\t\t\tMENU"<<endl;
			cout<<"1. Xem danh sach cac san pham.\n";
			cout<<"2. Them san pham vao danh sach.\n";
			cout<<"3. Xoa mot san pham khoi danh sach.\n";
			cout<<"0. Thoat khoi menu.\n";
			
			cout<<"Lua chon: ";
			cin>>chon;
			
			return chon;
			
		}
		
		
		

		void insp(sanpham *sp, int size){
			if(!size){
				cout<<"Chua co san pham nao !"<<endl;
			}
			else{
				cout<<"Danh sach san phan: "<<endl;
				for(int i=0;i<size;i++){
					cout<<sp[i]<<endl;
					}
				}
			}
			
			
			
			
			
		void add(sanpham *sp, int &size){
			sanpham them_sp;
			cout<<"Nhap thong tin san pham moi: "<<endl;
			cin>>them_sp;
			
		}
		

















