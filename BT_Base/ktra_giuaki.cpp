#include<iostream>
#include<string>
#define max 10000
using namespace std;

struct mathang {
	int stt;
	string mmh;
	string ten;
	int sl;
	float dg;
	float tt;
	float dgb;

};

void nhap(int &n, mathang mh[max]);
void them(int &n, mathang mh[max]);
void sapxep(int &n, mathang mh[max]);
void xoa(int &n, mathang mh[max]);
void xuat(int &n, mathang mh[max]);

int main(){
	int n, menu;
    mathang mh[max]; 
   
    do {
    	cout<<"\nCHON MOT MENU: \n";
    	cout<<"0. Thoat khoi menu.\n";
    	cout<<"1. Nhap danh sach mat hang\n";
    	cout<<"2. Them mot mat hang vao danh sach.\n";
    	cout<<"3. Xoa mot mat hang khoi danh sach.\n";
    	cout<<"4. Sap xep lai mat hang theo thu tu tang dan cua ma mat hang.\n";
    	cout<<"5. Xuat danh sach mat hang theo stt.\n";
    	cin>>menu;
    	
    	switch (menu) {
    		case 0:
				return 0;
				break;
    		case 1:
    			nhap(n, mh);
    			break;
    		case 2:
				them(n, mh);
				break;
			case 3:
				xoa(n, mh);
				break;
			case 4:
				sapxep(n, mh);
				break;
			case 5:
				xuat(n, mh);
				break;
			default: 
			cout<<"So da nhap khong hop le. Vui long nhap lai !";		
		}
	}
		while (true);
		return 0;
}



void nhap(int &n, mathang mh[max]){
	
    cout<<"Nhap vao so luong mat hang: ";
    cin>>n;
    cout<<endl;
    cout<<"Nhap danh sach cac mat hang: ";
    cout<<endl;
    
    bool kt=true;

    cout<<"- So thu tu: 1 "<<endl;
		cout<<"- Ma mat hang: ";
        cin>>mh[0].mmh;
        cin.ignore();
        cout<<"- Ten mat hang: ";
		getline(cin,mh[0].ten);
        cout<<"- So luong ton kho: ";
		cin>>mh[0].sl;
        cout<<"- Don gia: ";
		cin>>mh[0].dg;
          
	      	mh[0].tt=mh[0].sl*mh[0].dg;
	        
        cout<<"- Thanh tien: "<<mh[0].tt<<endl;
        cout<<"- Don gia ban: ";
		cin>>mh[0].dgb;
        cout<<endl;
        
    
    for (int i=1;i<n;i++) {
      	do {		
    		kt=true;
            cout<<"- So thu tu: "<<i+1<<endl<<"- Ma mat hang: ";
            cin>>mh[i].mmh;
	         
			        for (int j=0;j<i;j++) {
			        	
			        	if (mh[i].mmh==mh[j].mmh) {
			        		kt=false;
			            	cout<<"Ma mat hang da ton tai, vui long nhap lai ! \n"<<endl;
			            	break;
			       	
						}
					}
					
			if (kt) {
				
				cin.ignore();
	            cout<<"- Ten mat hang: ";
				getline(cin,mh[i].ten);
	            cout<<"- So luong ton kho: ";
				cin>>mh[i].sl;
	            cout<<"- Don gia: ";
				cin>>mh[i].dg;
				
	            mh[i].tt=mh[i].sl*mh[i].dg; 
	            
	            cout<<"- Thanh tien: "<<mh[i].tt<<endl;
	            cout<<"- Don gia ban: ";
				cin>>mh[i].dgb;
	            cout<<"\n";
	        }
        }  
        while(!kt);
	  }
}

void them(int &n, mathang mh[max]) {
	
	mathang mhm;
	int v,a;
	
	cout<<"Nhap vao mat hang can them :\n";
	cout<<"Ma mat hang: ";
	cin>>mhm.mmh;
	
	bool kt=false;
	
		for (int i=0; i<n;i++){
			  if (mhm.mmh==mh[i].mmh) {
			    	kt=true;
			    	a=i;
			    	break;
				}
			}
			
			if (kt) {
				
			  	cout<<"Ma mat hang da ton tai, moi nhap cac du lieu khac: \n";
			  	cout<<"So luong nhap: ";
				cin>>mhm.sl;
			  	
		        cout<<"Don gia nhap: ";
				cin>>mhm.dg;
				
		        mh[a].dg=(mh[a].sl*mh[a].dg+mhm.sl*mhm.dg)/(mh[a].sl+mhm.sl);
		        mh[a].sl+=mhm.sl;
		        mhm.tt=mh[a].dg*mh[a].sl;
		        
				cout<<"Thanh tien: "<<mhm.tt<<endl;
		        cout<<"Don gia ban: ";
				cin>>mhm.dgb;
		        cout<<endl;
		        cout<<"Da them so luong yeu cau vao mat hang tuong ung.\n";
			}
			  
			else {
			  	cin.ignore();
		        cout<<"Ten mat hang moi: ";
				getline(cin,mhm.ten);
		        cout<<"So luong ton kho: ";
				cin>>mhm.sl;
		        cout<<"Don gia: ";
				cin>>mhm.dg;
				
		        mhm.tt=mhm.sl*mhm.dg;
		        
				cout<<"Thanh tien: "<<mhm.tt<<endl;
		        cout<<"Don gia ban: ";
				cin>>mhm.dgb;
		        cout<<"\n";
		        
		        
		        cout<<"Nhap vi tri muon them: ";
				cin>>v;
		        for (int i=n;i>=v-1;i--){
		            mh[i]=mh[i-1];
		            }
		        	mh[v-1]=mhm;
		        	n++;
		        
		        
	       	cout<<"Da them mat hang vao danh sach.\n";
		  }
	    
}


void xoa(int &n, mathang mh[max]) {
    if (n > 0) {
        string CanXoa;
        bool TonTai = false;

        do {
            cout<<"Nhap ma mat hang can xoa: ";
            cin>>CanXoa;
            cout<<endl;

            for (int i = 0; i < n; i++) {
                if (CanXoa==mh[i].mmh) {
                    TonTai =true;
                    for (int j=i; j<n-1;j++) {
                        mh[j] = mh[j+1];
                    }
                    n--;
                    break;
                }
            }

            if (!TonTai) {
                cout << "Khong tim thay mat hang co ma can xoa trong danh sach. Vui long nhap lai." << endl;
            }
            
        } 
		while (!TonTai);

	        if (n==0) {
	            cout << "DANH SACH RONG." << endl;
	        }
	        else {
	            cout << "\t\t\t\t\tDANH SACH SAU KHI XOA: \n";
	            xuat(n, mh);
	        }
    } 
    else {
        cout << "Danh sach mat hang dang rong. Khong the xoa." << endl;
    }
}




void xuat(int &n, mathang mh[max]){
	if (n==0){
		cout<<"\nDANH SACH RONG."<<endl;
		cout<<"Vui long nhap danh sach: \n\n";
		nhap(n, mh);
	}
	cout<<"DANH SACH CAC MAT HANG THEO STT: ";
	cout<<endl;
    for(int i=0;i<n;i++){
    	
        cout<<"So thu tu "<<i+1<<":\n"<<endl;
            cout<<"- Ma mat hang: "<<mh[i].mmh<<"\t\t"<<"Ten mat hang: "<<mh[i].ten<<endl;
            cout<<"- So luong ton kho: "<<mh[i].sl<<"\t\t"<<"Don gia: "<<mh[i].dg<<endl;
            cout<<"- Thanh tien: "<<mh[i].tt<<endl;
            cout<<"- Don gia ban: "<<mh[i].dgb<<endl;
            cout<<endl;  
    }
}



void sapxep(int &n, mathang mh[max]){
	if (n==0){
		cout<<"\nDANH SACH RONG."<<endl;
		cout<<"Vui long nhap danh sach: \n\n";
		nhap(n, mh);
	}
		cout<<"\t\t\t\t\tDANH SACH SAU KHI SAP XEP: \n";
	    for (int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if (mh[i].mmh > mh[j].mmh){
	                mathang temp;
	                temp = mh[i];
	                mh[i]=mh[j];
	                mh[j]=temp;
	            }
	        }
	    }
    	xuat(n, mh);
}





