/*
Viet chuong trinh quan ly san pham nhap vao gom cac yeu cau: 
	+ Gia nhap
	+ Gia ban
	+ So luong nhap
	+ Thue
	+ So luong da ban
	+ Lai suat (Doanh thu ban so voi tien nhap)
Lap Menu de thuc hien cac yeu cau sau: 
	- Them san pham
	- Xoa san pham
	- Chinh sua so luong mat hang cua mot san pham 
	- Sap xep san pham theo: so luong ton kho, so luong da ban, theo gia ban.
*/
//=======================================================================================================================================================	
	
#include<iostream>
#include<string>
#define max 10000

using namespace std;

struct Product{
	string name;
	string code;
	int number_product_sold; // hang da ban 
	int inventory_quantity; // hang ton kho
	float interest_rate; // %
	float product_tax; // %
	float price_in;
	float price_sold;
	float true_price;
	long long price_rate;
	long long tong_tien_chi;
	
};

void input_product(int n, Product pro[]);
void output_product(int n, Product pro[]);
void add_product(int &n, Product pro[]);
void del_product(int &n, Product pro[]);
void arrange_sold(int n, Product pro[]);
void arrange_price(int n, Product pro[]);
void arrange_inventory(int n, Product pro[]);
void product_edit(int n, Product pro[]);




int main(){
	int n, menu;
	Product pro[max];
	bool choice = true;
	cout<<"Nhap vao so luong mat hang ban dau: "; cin>>n;
	input_product(n, pro);
	output_product(n, pro);
	do{
		cout<<"\t\t\t Chon mot menu: "<<endl;
		cout<<"1. Them mot san pham vao danh sach. "<<endl;
		cout<<"2. Xoa mot san pham khoi danh sach. "<<endl;
		cout<<"3. Sap xep danh sach theo thu tu giam dan cua gia ban. "<<endl;
		cout<<"4. Sap xep danh sach theo thu tu giam dan so luong ton kho. "<<endl;
		cout<<"5. Sap xep danh sach theo thu tu giam dan so luong mat hang da ban. "<<endl;
		cout<<"6. Chinh sua so luong cua san pham va gia ban."<<endl;
		cout<<"7. Ket thuc chuong trinh."<<endl;
		cin>>menu;
		switch(menu){
			case 1: 
			add_product(n, pro);
			break;	
			case 2:
			del_product(n, pro);
			break;
//			case 3:
//			arrange_price(n, pro);
//			break;	
//			case 4:
//			arrange_inventory(n, pro);
//			break;
//			case 5:
//			arrange_sold(n, pro);
//			case 6:
//			product_edit(n ,pro);
			case 7:
			cout<<"Ket thuc chuong trinh."<<endl;
			return 0;
			break;
			
			default:
			cout<<"So da nhap khong hop le. Vui long nhap lai !"<<endl;
		}
	}
	while(true);
	
	
	return 0;
}	
void input_product(int n, Product pro[]){
	cout<<"\t\t\t Nhap vao thong tin cac mat hang: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"Nhap vao san pham thu "<<i+1<<":"<<endl;
		cout<<"Ten san pham: "; 
		cin.ignore();
		getline(cin, pro[i].name);
		cout<<"Ma san pham: ";
		getline(cin, pro[i].code);
		cout<<"Gia nhap cua san pham: ";
		cin>>pro[i].price_in;
		cout<<"Gia ban cua san pham: ";
		cin>>pro[i].price_sold;
		cout<<"So luong san pham trong kho (tong san pham da nhap): ";
		cin>>pro[i].inventory_quantity;
		cout<<"So luong san pham da ban: ";
		cin>>pro[i].number_product_sold;
		cout<<"Thue / Ti le thue (%): ";
		cin>>pro[i].product_tax;
		cout<<endl;
		
	}
}	
	


	
void output_product(int n, Product pro[]){
	cout<<"\t\t\t Danh sach cac mat hang da nhap: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"San pham "<<i+1<<":"<<endl;
		cout<<"Ten san pham: "<<pro[i].name<<endl; 
		cout<<"Ma san pham: "<<pro[i].code<<endl; 
		cout<<"Gia nhap cua san pham: "<<pro[i].price_in<<endl; 
		cout<<"Gia ban cua san pham: "<<pro[i].price_sold<<endl; 
		cout<<"So luong san pham trong kho (tong san pham da nhap): "<<pro[i].inventory_quantity<<endl; 
		cout<<"So luong san pham da ban: "<<pro[i].number_product_sold<<endl; 
		cout<<"Thue / Ti le thue (%): "<<pro[i].product_tax<<" (%)"<<endl; 	
		
		pro[i].true_price = pro[i].price_sold - (pro[i].price_sold * (pro[i].product_tax)/100.0);
		cout<<"Gia mat hang sau thue: "<<pro[i].true_price<<endl;
		
		pro[i].tong_tien_chi = pro[i].price_in * pro[i].inventory_quantity;
		cout<<"Tong chi cho san pham: "<<pro[i].tong_tien_chi<<endl;
		
		pro[i].price_rate = pro[i].number_product_sold * pro[i].true_price - pro[i].price_in * pro[i].number_product_sold;
		cout<<"Tien lai tren so luong mat hang da ban: "<<pro[i].price_rate<<endl;
		
		cout<<"------------------------------"<<endl;	
	}
}



void add_product(int &n, Product pro[]){
	int vi_tri_them;
	Product pro_add;
	
	do{
  		cout<<"Nhap vi tri san pham can them: "; cin>>vi_tri_them;
  		if(vi_tri_them <= 0 || vi_tri_them > n+1){ cout<<"Vi tri da nhap khong hop le. Vui long nhap lai !"<<endl;}
  		else{break;}
	}
	while(true);
	
	cout<<"Ten san pham can them: "; 
	cin.ignore();
	getline(cin, pro_add.name);
	cout<<"Ma san pham: ";
	getline(cin, pro_add.code);
	cout<<"Gia nhap cua san pham: ";
	cin>>pro_add.price_in;
	cout<<"Gia ban cua san pham: ";
	cin>>pro_add.price_sold;
	cout<<"So luong san pham trong kho (tong san pham da nhap): ";
	cin>>pro_add.inventory_quantity;
	cout<<"So luong san pham da ban: ";
	cin>>pro_add.number_product_sold;
	cout<<"Thue / Ti le thue (%): ";
	cin>>pro_add.product_tax;
	cout<<endl;
	
	
    if (vi_tri_them >= 1 && vi_tri_them <= n + 1) {
    for (int i=n-1; i>=vi_tri_them-1; i--) { pro[i+1] = pro[i]; }
    pro[vi_tri_them-1] = pro_add;
    n++; 
    } 
	else {cout << "Vi tri them khong hop le!"<<endl;}

    
    cout<<"\n\t\t\t DANH SACH SAU KHI THEM: \n";
	for(int i=0;i<n;i++){
		cout<<"San pham "<<i+1<<":"<<endl;
		cout<<"Ten san pham: "<<pro[i].name<<endl; 
		cout<<"Ma san pham: "<<pro[i].code<<endl; 
		cout<<"Gia nhap cua san pham: "<<pro[i].price_in<<endl; 
		cout<<"Gia ban cua san pham: "<<pro[i].price_sold<<endl; 
		cout<<"So luong san pham trong kho (tong san pham da nhap): "<<pro[i].inventory_quantity<<endl; 
		cout<<"So luong san pham da ban: "<<pro[i].number_product_sold<<endl; 
		cout<<"Thue / Ti le thue (%): "<<pro[i].product_tax<<" (%)"<<endl; 	
		
		pro[i].true_price = pro[i].price_sold - (pro[i].price_sold * (pro[i].product_tax)/100.0);
		cout<<"Gia mat hang sau thue: "<<pro[i].true_price<<endl;
		
		pro[i].tong_tien_chi = pro[i].price_in * pro[i].inventory_quantity;
		cout<<"Tong chi cho san pham: "<<pro[i].tong_tien_chi<<endl;
		
		pro[i].price_rate = pro[i].number_product_sold * pro[i].true_price - pro[i].price_in * pro[i].number_product_sold;
		cout<<"Tien lai tren so luong mat hang da ban: "<<pro[i].price_rate<<endl;
		
		cout<<"------------------------------"<<endl;	
	}
}



void del_product(int &n, Product pro[]){
  	int Delete_product;
  	do{
  		cout<<"Nhap vi tri san pham can xoa: "; cin>>Delete_product;
  		if(Delete_product <= 0 || Delete_product > n){ cout<<"Vi tri da nhap khong hop le. Vui long nhap lai !"<<endl;}
  		else{break;}
	}
	while(true);

	
    for(int i=Delete_product-1;i<n;i++){ pro[i]=pro[i+1]; }
	n--;
		
	cout<<"\n\t\t\t DANH SACH SAU KHI XOA: \n";
	for(int i=0;i<n;i++){
		cout<<"San pham "<<i+1<<":"<<endl;
		cout<<"Ten san pham: "<<pro[i].name<<endl; 
		cout<<"Ma san pham: "<<pro[i].code<<endl; 
		cout<<"Gia nhap cua san pham: "<<pro[i].price_in<<endl; 
		cout<<"Gia ban cua san pham: "<<pro[i].price_sold<<endl; 
		cout<<"So luong san pham trong kho (tong san pham da nhap): "<<pro[i].inventory_quantity<<endl; 
		cout<<"So luong san pham da ban: "<<pro[i].number_product_sold<<endl; 
		cout<<"Thue / Ti le thue (%): "<<pro[i].product_tax<<" (%)"<<endl; 	
		
		pro[i].true_price = pro[i].price_sold - (pro[i].price_sold * (pro[i].product_tax)/100.0);
		cout<<"Gia mat hang sau thue: "<<pro[i].true_price<<endl;
		
		pro[i].tong_tien_chi = pro[i].price_in * pro[i].inventory_quantity;
		cout<<"Tong chi cho san pham: "<<pro[i].tong_tien_chi<<endl;
		
		pro[i].price_rate = pro[i].number_product_sold * pro[i].true_price - pro[i].price_in * pro[i].number_product_sold;
		cout<<"Tien lai tren so luong mat hang da ban: "<<pro[i].price_rate<<endl;
		
		cout<<"------------------------------"<<endl;	
	}
}































