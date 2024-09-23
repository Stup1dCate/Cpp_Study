//Bai 7: Xoá các phan tu trùng lap trong Vector.

#include<iostream>
#include<vector>
#include<algorithm> // de su dung sort()
using namespace std;

vector<int> nhap();
void xoa(vector<int>& v);

int main(){
	vector<int> v =nhap();
	cout<<"Vector sau khi xoa cac phan tu trung lap la: ";
	xoa(v);
	return 0;
}
vector<int> nhap() {
    int n;
    cout << "Nhap vao so luong phan tu trong vector: ";
    cin >> n;
    vector<int> v;
    cout << "Nhap vao cac vector: ";
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
    return v; 
}
void xoa(vector<int>& v){
	
	//sap xep các phan tu theo thu tu tang dan -> cac phan tu giong nhau(gia tri bang nhau) se nam lien ke voi nhau
	sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    //Áp dung unique() de di chuyen phan tu trùng lap ve cuoi vector và tra ve iterator den phan tu dau tiên cua nhóm các phan tu duy nhat
   //Xóa các phan tu tu vi trí iterator tra ve den cuoi vector
    
    
    for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
}


//Bai 8: Ghép 2 vector.

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, m;
    cout << "Nhap vao so luong phan tu cua vector thu nhat: ";
    cin >> n;
    cout << "Nhap vao so luong phan tu cua vector thu hai: ";
    cin >> m;

    vector<int> h;
    vector<int> k;
    cout << "Nhap vao vector thu nhat: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        h.push_back(x);
    }

    cout << "Nhap vao vector thu hai: ";
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        k.push_back(x);
    }

    vector<int> ghep;
    ghep.reserve(h.size() + k.size());
    
//   reserve() chi làm viec caaps phát bô nho, nó không thay doi kích thuoc thuc su cua vector. 
//	 van can su dung push_back() hoac các phuong thuc thêm phan tu khác de thuc su thêm các phan tu vào vector.

    cout << "Ghep hai vector, ta duoc: ";
    for(int x : h){
        ghep.push_back(x); // dua cac phan tu cua vector_h vao 'ghep'
    }
    for(int x : k){
        ghep.push_back(x); // dua cac phan tu cua vector_k vao 'ghep'
    }

    for(int x : ghep){
        cout << x << " "; // in ra màn hình 'vector_ghep'
    }
    return 0;
}





//Bai 8: (nang cao): Ghép n vector.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	cout<<"Nhap vao so luong vector can ghep: ";
	cin>>n;
	vector<int> vector_ghep;
	for(int i=0;i<n;i++){
		int size;
		cout<<"Nhap vao so luong phan tu cua vector thu "<<i+1<<": ";
		cin>>size;
		vector<int> temp(size);
		
		cout<<"Nhap cac phan tu cua vectro thu "<<i+1<<": ";
		for (int j=0;j<size;j++){
			cin>>temp[j];
		}
		
		vector_ghep.insert(vector_ghep.end(), temp.begin(), temp.end());
//su dung v.insert duoc su dung khi bai toan chua cho biet kich thuoc cua vector can tim. (nguoc lai voi v.reverse)
	}
	cout<<endl;
	cout<<n<<" vector sau khi ghep: ";
	for (int x : vector_ghep){
		cout<<x<<" ";
	}
	return 0;
}


//Su dung insert:
//
//Khi không biet truoc so luong phan tu hoac kích thuoc cuoi cùng cua vector và neu muon thêm tung phan tu vào cuoi vector,
//insert là lua chon khi nay.
//Ví du: Khi ghép nhieu vector hoac khi so luong phan tu cua vector dau vào không rõ truoc.


//Su dung reserve:
//
//Khi da biet truoc kích thuoc xap xi hoac so luong phan tu mà vector se có, viec su dung reserve có the giúp toi uu hóa bo nho.
//Ví du: Khi biet truoc so luong phan tu gan dúng cua vector sau khi ghép và viec này giúp tránh viec cap phát lai bo nho nhieu lan










