// lam menu gio lam cua giao vien
// khai bao cac thu vien

#include <iostream>
#include <string>
#define max 1000
using namespace std;
// lam danh sach stuct
struct giaovien {
    string msgv;
    string name;
    string address;
    float Sogio;
    float Songay;
    float LuongTL;
};

void danhsach(int &n, giaovien[max]);
void xuat(int &n,giaovien[max]);
void xoa(int &n,giaovien[max]);
void them(int &n,giaovien[max]);
void sapxep(int &n,giaovien[max]);

int main(){
	int n, menu;
    giaovien gv[max]; // voi cau truc stuct khong can khai bao kieu du lieu o phia truoc
    cout<<"\t\t\t\t\tNHAP VAO DANH SACH GIAO VIEN: \n";
    danhsach(n,gv); // ham void ds de nhap vao danh sach truoc
    
    
// tao menu bang vong lap do/while
    do {
    	cout<<"\n\nChon mot menu: \n";
    	cout<<"0. Thoat khoi menu.\n";
    	cout<<"1. Xuat danh sach giao vien.\n";
    	cout<<"2. Them giao vien vao danh sach.\n";
    	cout<<"3. Xoa mot giao vien khoi danh sach.\n";
    	cout<<"4. Sap xep lai danh sach theo so gio lam.\n";
    	cin>>menu;
    	
    	switch (menu) {
    		case 0:
				return 0;
				break;
    		case 1:
    			cout<<"\t\t\t\t\tTHONG TIN GIAO VIEN: \n\n";
    			xuat(n, gv);
    			break;
    		case 2:
				them(n, gv);
				break;
			case 3:
				xoa(n, gv);
				break;
			case 4:
				sapxep(n, gv);
				break;
			default: 
			cout<<"So da nhap khong hop le. Vui long nhap lai !";		
		}
	}
		while (true);
		return 0;
}


//danh sach giao vien tung muc: 
void danhsach(int &n, giaovien gv[max]){
        cout<<"Nhap vao so luong giao vien: ";
        cin>>n;
        cout<<endl;
        for(int i=0; i<n;i++){
            cout<<"Thong tin giao vien thu "<<i+1<<":"<<endl;
            cout<<"Ma so giao vien: ";
            cin>>gv[i].msgv;
            cin.ignore();
            cout<<"Ho va ten giao vien: ";
            getline(cin, gv[i].name);
            cout<<"To chuyen mon: ";
            getline(cin, gv[i].address);
            cout<<"So gio da lam: ";
            cin>> gv[i].Sogio;
            cout<<"So ngay da lam: ";
            cin>> gv[i].Songay;
            gv[i].LuongTL= ((gv[i].Sogio)*(0.6)+(gv[i].Songay)*(0.4))*25000;
            cout<<"Luong thuc linh la:  "<<gv[i].LuongTL<<endl;
            cout<<"***********************************"<<endl;
        }
}



// sap xep giao vien theo gio lam
void sapxep(int &n, giaovien gv[max]){
	cout<<"\n\t\t\t\t\tDANH SACH SAU KHI SAP XEP: \n";
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (gv[i].LuongTL < gv[j].LuongTL){
                giaovien temp;
                temp = gv[i];
                gv[i]=gv[j];
                gv[j]=temp;
            }
        }
    }
    	xuat(n, gv);
}



// them mot nguoi vao danh sach
void them(int &n, giaovien gv[max]){
    int v;
    giaovien gvt;
	    cout<<"Nhap vi tri can them: ";
	    cin>>v;
	    cout<<"Thong tin giao vien can them: "<<endl;
	    cout<<"Ma so giao vien: ";
	    cin>>gvt.msgv;
	    cin.ignore();
	    cout<<"Ho ten giao vien: ";
	    getline(cin, gvt.name);
	    cout<<"To chuyen mon: ";
	    getline(cin, gvt.address);
	    cout<<"So gio da lam: ";
	    cin>> gvt.Sogio;
	    cout<<"So ngay da lam: ";
	    cin>> gvt.Songay;
	    
	    gvt.LuongTL= ((gvt.Sogio)*(0.6)+(gvt.Songay)*(0.4))*25000;
	    cout<<"Luong thuc linh la:  "<<gvt.LuongTL<<endl;
    for(int i=n;i>=v-1;i--){
        gv[i]=gv[i-1];
   		}
		    gv[v-1]=gvt;
		    n++;
		    cout<<"\n\t\t\t\t\tDANH SACH SAU KHI THEM: \n";
		xuat(n, gv);
}



// xoa mot giao vien ra khoi danh sach
void xoa(int &n, giaovien gv[max]){
    int v;
	    cout<<"Nhap vi tri giao vien can xoa: ";
	    cin>>v;
    for(int i=v-1;i<n;i++){
		gv[i]=gv[i+1];
		}
		n--;
	   	cout<<"\n\t\t\t\t\tDANH SACH SAU KHI XOA: \n";
	   	xuat (n, gv);
}
   
   
   
//xuat ra danh sach:
void xuat(int &n, giaovien gv[]){
    for(int i=0;i<n;i++){
        cout<<"Thong tin giao vien thu "<<i+1<<" :"<<endl;
            cout<<"Ma so giao vien: "<<gv[i].msgv<<endl;
            cout<<"Ten giao vien: "<<gv[i].name<<endl;
            cout<<"To chuyen mon: "<<gv[i].address<<endl;
            cout<<"So gio da lam: "<<gv[i].Sogio<<endl;
            cout<<"So ngay da lam: "<<gv[i].Songay<<endl;
            cout<<"Luong thuc linh la:  "<<gv[i].LuongTL<<endl;
            cout<<"***********************************"<<endl;
    }
}
















