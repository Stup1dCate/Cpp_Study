	//Bai1: cho mang 2 chieu kich thuoc nxm
//	1. viet ham nhap xuat gia tri cho mang.
//	2. viet ham xuat gia tri cua mang theo dang bang
//	3. viet ham hoan vi hang va cot
//	4. sap xep mang theo thu tu tang dan tu trai qua phai
//	5. viet ham sap xep cac hang sao cho tong tung hang tang dan.
//	6. viet ham xoa 1 hang (cot) cua ma tran.

		
		#include<iostream>
		using namespace std;
		
		void nhap(int &n, int &m, int a[10][10]);
		void xuat(int &n, int &m, int a[10][10]);
		void hoanvi(int &n, int &m, int a[10][10]);
		void sapxeptong(int &n,int &m, int a[10][10]);
		void sapxeptt(int &n, int &m, int a[10][10]);
		void xoacot(int &n, int &m, int a[10][10]);
		void xoahang(int &n, int &m, int a[10][10]);
		
		
		int main(){
			int n, a[10][10], m, menu;
			nhap(n, m, a);
			do{
				
				cout<<"\n\nCHON MOT MENU: \n";
		    	cout<<"0. Thoat khoi menu.\n";
		    	cout<<"1. Nhap vao mang 2 chieu.\n";
		    	cout<<"2. Xuat ra mang 2 chieu.\n";
		    	cout<<"3. Hoan doi cac hang voi cac cot cua mang.\n";
		    	cout<<"4. Sap xep mang theo thu tu tang dan tu trai qua phai.\n";
		    	cout<<"5. Sap xep cac hang sao cho tong tung hang tang dan.\n";
		    	cout<<"6. Xoa mot cot bat ki cua mang.\n";
		    	cout<<"7. Xoa mot hang bat ki cua mang.\n";
		    	cin>>menu;
		
				switch(menu){
					case 0:
					return 0;
					break;
					case 1:
					nhap(n, m, a);
					break;
					case 2:
					xuat(n, m ,a);
					break;
					case 3:
					hoanvi(n, m ,a);
					break;
					case 4:
					sapxeptt(n, m, a);
					break;
					case 5:
					sapxeptong(n, m, a);
					break;
					case 6:
					xoacot(n, m, a);
					break;
					case 7:
					xoahang(n, m, a);		
					break;
					
					default:
					cout<<"Menu khong hop le. Vui long chon lai !"<<endl;
					break;
					}
				
				char tt;
		        cout << "Tiep tuc nhap menu ? (yes/no): ";
		        cin >> tt;
		
		        if (tt != 'y' && tt != 'Y') {
		            break; 
		        }
		        system("cls"); 
		
				}
				while(true);
				return 0;
			}
		
		
		void nhap(int &n, int &m, int a[10][10]){
			cout<<"\t\t\t\t\tNHAP VECTOR.\n";
			cout<<"Nhap vao so hang cua mang: ";
			cin>>n;
			cout<<"Nhap vao so cot cua mang: ";
			cin>>m;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					cout<<"a["<<i<<"]["<<j<<"]: ";
					cin>>a[i][j];
				}
			}
		}
		
		void xuat(int &n, int &m, int a[10][10]){
			cout<<"Mang vua nhap la: \n";
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						cout<<a[i][j]<<"\t";
					}
					cout<<endl;
			}
			cout<<endl;
		}
		
		
		void hoanvi(int &n, int &m, int a[10][10]){
			cout<<"Mang sau khi hoan doi vi tri hang va cot la: \n";
			for(int i=0;i<m;i++){
					for(int j=0;j<n;j++){
						cout<<a[j][i]<<"\t";
					}
					cout<<endl;
			}
		}
		 	
		
		
		void sapxeptong(int &n, int &m, int a[10][10]){
		
		    int tong[10]; // khai bao mang 'tong' de luu tong cac gia tri cua mot hang.
		    for (int i = 0; i < n; i++){
		        tong[i] = 0; //'tong' ban dau = 0.
		        for (int j = 0; j < m; j++){
		            tong[i] += a[i][j]; // công dôn tung phan tu tren 1 hang cho các hàng.
		        }
		    }
		
		
		
		
		    for (int i=0;i<n; i++){ // khoi tao dòng chính.
		    	
		        for (int d=i+1; d<n; d++){ // cho mot dòng khác chay song song de so sanh.
		        	
		            if (tong[i] > tong[d]){ // neu tong dòng truoc > tong dòng sau -> doi vi tri 2 dong.
		            	
		                swap(tong[i], tong[d]); 
		                
		                for (int j = 0; j < m; j++){ // 'j' la côt  
		                    swap(a[i][j], a[d][j]); 
		            // hoán doi cac phan tu cua cac cot(tu j=0 -> j=m) thuoc dòng i và dòng d cho nhau.
		                }
		            }
		        }
		    }
		    
		    
		    
		    
		    cout << "Mang sau khi sap xep theo thu tu tang dan cua tong cac gia tri tren mot hang: " << endl;
		    for (int i = 0; i < n; i++){
		        for (int j = 0; j < m; j++){
		            cout << a[i][j] << "\t";
		        }
		        cout << endl;
		    }
		}
		
		
		
		void sapxeptt(int &n, int &m, int a[10][10]){
			cout<<"Mang sau khi sap xep tang dan tu trai qua phai la: "<<endl;
			for(int i=0;i<n;i++){
				for(int j=0;j<m;j++){
					for(int k=j+1;k<m;k++){
						if(a[i][j]>a[i][k]){
							int temp=a[i][j];
							a[i][j]=a[i][k];
							a[i][k]=temp;
						}
					}
					cout<<a[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
		
		
		
		
		void xoacot(int &n, int &m, int a[10][10]){
			int c;
			cout<<"Nhap vao cot can xoa: ";
			cin>>c;
			for(int i=0;i<n;i++){
				for(int j=c-1;j<m;j++){
					a[i][j]=a[i][j+1];
				}
			}
			m--;
			cout<<"mang sau khi xoa cot so "<<c<<" la: \n";
			for(int i=0;i<n;i++){
				for (int j=0;j<m;j++){
					cout<<a[i][j]<<"\t";
				}
				cout<<endl;
			}
		}
		
		
		void xoahang(int &n, int &m, int a[10][10]){
			int h;
			cout<<"Nhap vao so hang can xoa: ";
			cin>>h;
				for(int j=0;j<m;j++){
					for(int i=h-1;i<n;i++){
						a[i][j]=a[i+1][j];
					}
			}
			n--;
			cout<<"mang sau khi xoa hang so "<<h<<" la: \n";
			for(int i=0;i<n;i++){
				for (int j=0;j<m;j++){
					cout<<a[i][j]<<"\t";
				}
				cout<<endl;
			}
		}



/*
//Bai 2: cho 2 ma tran vuong cap n. Tinh tong 2 matran
#include<iostream>
using namespace std;
void nhap(int &n, int a1[10][10], int a2[10][10]);
void xuat(int &n, int a1[10][10], int a2[10][10]);
int main(){
	int n, a1[10][10], a2[10][10];
	nhap(n, a1, a2);
	xuat(n, a1, a2);
return 0;	
}


void nhap(int &n, int a1[10][10], int a2[10][10]){
	cout<<"Nhap vao cap cua ma tran: ";
	cin>>n;
	cout<<"Nhap ma tran thu nhat: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a1[i][j];
		}
	}
	cout<<"Nhap ma tran thu hai: \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]: ";
			cin>>a2[i][j];
		}
	}
}
void xuat(int &n, int a1[10][10], int a2[10][10]){
		cout<<"Tong cua 2 ma tran la: \n";
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<a1[i][j]+a2[i][j]<<" ";
		}
	cout<<endl;
	}
}
*/





