//B1:
/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream input("num.txt"); //Mo file can nhap input
    if (!input) {
        cout<<"Khong the mo file"<<endl;
        return 1;
    }
    int num1, num2, num3;
    input>>num1>>num2>>num3;

    int tong=num1+num2+num3;
    double tbc=(num1+num2+num3) / 3.0;

    input.close(); //Dong file input

    ofstream output("num_out.txt"); //Mo file can ghi output
    if (!output) {
        cout<<"Khong the ghi vao file"<<endl;
        return 1;
    }

    output<<tong<<endl;
    output<<tbc<<endl;
    output.close(); //Dong file output

	//Thong bao ket qua cho chuong trinh 
    cout << "Ket qua da duoc luu vao file num_out" << endl;
    return 0;
}
*/




//B2:
/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n; cout<<"Nhap so nguyen bat ki: "; cin>>n;
	ofstream output("num_out.txt");
	if (!output) {
        cout<<"Khong the ghi vao file"<<endl;
        return 1;
    }
    output<<n<<endl;
    output.close();
	cout <<"Da ghi file thanh cong !" << endl;
    return 0;
}
*/




//B3:
/*
#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int n; cout<<"Nhap so luong phan tu cua mang: "; cin>>n;
	int a[n];
	cout<<"Nhap mang: "<<endl;
	for(int i=0;i<n;i++){
		cout<<"a["<<i+1<<"]: ";
		cin>>a[i];
	}
	
	ofstream output("num_array.txt");
	if(!output){
		cout<<"Khong the ghi file !"<<endl;
		return 1;
	}
	output<<n<<endl;
	for(int i=0;i<n;i++){
		output<<a[i]<<" ";
	}
	output.close();
	cout <<"Da ghi file thanh cong !" << endl;
    return 0;
}
*/




//B4:
/*
#include<iostream>
#include<fstream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main(){
	srand(time(0));
	int n = rand()%10; //random gia tri n tu 1 den 10 (toi da tren 1 dong = 10 => mang random ra phai co so luong phan tu <= 10)
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=rand()%100;
	}
	
	ofstream output("num_random.txt");
	if(!output){
		cout<<"Khong the ghi file !"<<endl;
		return 1;
	}
	output<<n<<endl;
	for(int i=0;i<n;i++){
		output<<a[i]<<" ";
	}
	output.close();
	cout<<"Da ghi file thanh cong !" << endl;
    return 0;
}
*/




//B5:
/*
#include<iostream>
#include<fstream>
using namespace std;

int doixung(int n){
	int N = n;
	int s=0;
	while(n>=10){
		int k = n%10;
		s = s*10 + k;
		n/=10;
	}
	s=s*10+n;
	if(s == N) return true;
	else return false;
}
int Sum(int n){
	int s=0;
	while(n>=10){
		int k = n%10;
		s += k;
		n/=10;
	}
	return s+n;
}
bool ngto(int n){
	if(n<2) return false;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int cauA(int a[], int n) {
    int sum=0;
    for (int i=0; i<n;i++) {
        sum+=a[i];
    }
    return sum;
}
int cauB(int a[], int n){
	int max=a[0];
	for (int i=0; i<n;i++) {
        if(a[i]> max){
        	max=a[i];
		}
    }
    return max;
}
void cauC(int a[], int n){
    bool flag = false;
    for(int i=0;i<n;i++){
        if(ngto(a[i])){
            cout<<a[i]<<" ";
            flag = true;
        }
    }
    if(!flag) cout<<"Khong co phan tu nao thoa man !"<<endl;
    cout<<endl;
}
void cauD(int a[], int n){
	bool flag = false;
	for(int i=0;i<n;i++){
		if(ngto(a[i]) && doixung(a[i])){
			cout<<a[i]<<" ";
			flag = true;
		}
	}
	if(!flag) cout<<"Khong co phan tu nao thoa man !"<<endl;
	cout<<endl;
}
void cauE(int a[], int n){
	for(int i=0;i<n;i++){
		Sum(a[i]);
	}
}
int main(){
	ifstream input("bai5.txt");
	if (!input) {
        cout<<"Khong the mo file"<<endl;
        return 1;
    }
    
    int n;
    input>>n;
    int *a = new int[n]; 
    for (int i=0; i<n;i++) {
        input>>a[i];
    }
    input.close();
    
    ofstream output("bai5_output.txt");
    if (!output) {
        cout<<"Khong the ghi file"<<endl;
        return 1;
    }
    output<<"Cau a: "<<cauA(a, n)<<endl;
    output<<"Cau b: "<<cauB(a, n)<<endl;
    output<<"Cau c: ";
   	for(int i=0;i<n;i++){
        if (ngto(a[i])) {
            output<<a[i]<<" ";
        }
    }
    output << endl;
    output<<"Cau d: ";
    for(int i=0;i<n;i++){
        if (ngto(a[i]) && doixung(a[i])) {
            output<<a[i]<<" ";
        }
    }
    output << endl;
    output<<"Cau e: ";
   	for(int i=0;i<n;i++){
        output<<Sum(a[i])<<" ";
    }
    output.close();

  	delete[] a;
  	cout<<"Du lieu da duoc luu vao file !"<<endl;
  	return 0;
}
*/





//B6:
/*
#include<iostream>
#include<fstream>
using namespace std;
int sosanh(int x, int y){
	if(x > y) return x;
	else if(y>x) return y;
}

int cauA(int a[], int n){
	int max = a[0];
	for(int i=1;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
	}
	return max;
}
int cauB(int a[], int n){
    int vitri, max = 1; 
    for(int i=1;i<n;i++){
    	int j=i-1;
    	int index_maxarray = 1;
    	while(a[i] > a[i-1] && i < n){
    		i++; index_maxarray++;
		}
		if(index_maxarray > max){
			max = index_maxarray;
			vitri = j;
		}
	}
    return max;
}
int cauC(int a[], int n, int m){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==m){
				cout<<"("<<a[i]<<"; "<<a[j]<<"), ";
			}
		}
	}
}
int cauD(int a[], int n){
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++){
			if(a[i]<a[j]){
				swap(a[i], a[j]);
			}
		}
	}
	return a[n/2];
}
int main(){
	ifstream input("bai6_input.txt");
	if(!input){
		cout<<"Khong the mo file !"<<endl;
		return 1;
	}
	int n, m; input>>n>>m;
    int *a = new int[n]; 
    for (int i=0; i<n;i++) {
        input>>a[i];
    }
    input.close();
    
    ofstream output("bai6_output.txt");
    if (!output) {
        cout<<"Khong the ghi file"<<endl;
        return 1;
    }
    output<<"Cau a: "<<cauA(a, n)<<endl;
    output<<"Cau b: "<<cauB(a, n)<<endl;
    output<<"Cau c: ";
   	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]+a[j]==m){
				output<<"("<<a[i]<<"; "<<a[j]<<") ";
			}
		}
	}
    output << endl;
    output<<"Cau d: "<<cauD(a, n)<<endl;
    output.close();

  	delete[] a;
  	cout<<"Du lieu da duoc luu vao file !"<<endl;
	return 0;
}
*/





//B7:
/*
#include <iostream>
#include <fstream>
using namespace std;

bool isPrime(int n) {
    if (n<2) return false;
    for (int i=2;i*i<=n;i++) 
        if (n%i == 0) return false;
    return true;
}

int cauA(int **a, int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(a[i][j])) {
                count++;
            }
        }
    }
    return count;
}

int cauB(int **a, int n, int m) {
    int *b = new int[n]; 
    int max = 0;
    for (int i = 0; i < n; i++) {
        b[i] = 0; 
        for (int j = 0; j < m; j++) {
            b[i] += a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        if (b[i] > max) {
            max = b[i];
        }
    }
    delete[] b; 
    return max;
}
int cauC(int **a, int n, int m) {
    int *c = new int[m]; 
    int min = 0;
    for (int i = 0; i < n; i++) {
        min += a[i][0];
    }
    for (int j = 0; j < m; j++) {
        c[j] = 0; 
        for (int i = 0; i < n; i++) {
            c[j] += a[i][j];
        }
	    if (c[j] < min) {
	        min = c[j];
	    }
    }
    delete[] c; 
    return min;
}

int main() {
    ifstream input("bai7_input.txt");
    if (!input) {
        cout<<"Khong the mo file !"<<endl;
        return 1;
    }
    int n;
    const int m = 5;
    input >> n;
    int **a = new int*[n]; //moi dong cua matran khoi tao mot bien con tro de luu cac phan tu/1 dong
    for (int i = 0; i<n;i++) {
        a[i] = new int[m];
        for (int j=0; j<m;j++) {
            input>>a[i][j];
        }
    }
    input.close();

    ofstream output("bai7_output.txt");
    if (!output) {
        cout<<"Khong the ghi file !"<<endl;
        return 1;
    }
    output<<cauA(a, n, m)<<endl;
    output<<cauB(a, n, m)<<endl;
	output<<cauC(a, n, m)<<endl;
    output.close();

    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
	cout<<"Du lieu da duoc luu vao file !"<<endl;
    return 0;
}
*/





//B8:
/*
#include<iostream>
#include<fstream>
using namespace std;

bool ngto(int n){
	if(n<2) return false;
	for(int i=2;i*i<n;i++){
		if(n%i==0) return false;
	}
	return true;
}
int sosanh(int x, int y){
	if(x>y) return x;
	else if(y>x) return y;

}
int cauA(int **a, int n, int m, int &MAX){
	int max = a[0][0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] > max) max = a[i][j];
		}
	}
	MAX = max;
	int count = 0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(a[i][j] == max) count++;
		}
	}
	return count;
}

int cauC(int **a, int n, int m){
	int maxSum = 0;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<m-1;j++){
			int sum = 0;
			int count = 0;
			for(int tmp_i=0; tmp_i<2; tmp_i++){
				for(int tmp_j=0; tmp_j<2; tmp_j++){
					if(ngto(a[i+tmp_i][j+tmp_j])){
						count++;
					}
					sum+=a[i+tmp_i][j+tmp_j];
				}
			}
			if (count > 0) {
	            maxSum = sosanh(maxSum, sum);
	        }
		}
	}
	return maxSum;
}
int main(){
	ifstream input("bai8_input.txt");
	if(!input){
		cout<<"Khong the mo file !";
		return 1;
	}
	int n, m;
    input>>n>>m;
    int **a = new int*[n];
    for (int i=0; i<n;i++) {
        a[i] = new int[m];
        for (int j=0; j<m;j++) {
            input>>a[i][j];
        }
    }
    input.close();
    
    ofstream output("bai8_output.txt");
    if(!output){
		cout<<"Khong the ghi file !";
		return 1;
	}
	int MAX = 1;
	output<<"Cau a: "<<MAX<<" "<<cauA(a, n, m, MAX)<<endl;
	output<<"Cau b: ";
	for(int j=0;j<m;j++){
		int sum = 0;
		for(int i=0;i<n;i++){
			sum+= a[i][j];
		}
		output<<sum<<" ";
	}
	output<<endl;
	output<<"Cau c: "<<cauC(a, n, m)<<endl;
    output.close();
    
    for (int i=0;i<n; i++) {
        delete[] a[i];
    }
    delete[] a;
    cout<<"Du lieu da duoc luu vao file !"<<endl;
    return 0;
}
*/





//B9:
/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream output("bai9.txt"); 
    if (!output) {
        cout<<"Khong the mo file!"<<endl;
        return 1;
    }
    string poem = "Em oi doi anh ve\n"
			 	  "Doi anh hoai em nhe\n"
				  "Mua co roi dam de\n"
                  "Ngay co dai le the\n";
    output<<poem<<endl;
    output.close();
    cout<<"Da ghi vao file thanh cong !"<<endl;
    return 0;
}
*/



//B10:
/*
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream input("bai10.txt"); 
    if (!input) {
        cout<<"Khong the mo file!"<<endl;
        return 1;
    }
    string line;
    while (getline(input, line)) {
        cout<<line<<endl;
    }
    
    input.close();
    cout<<"Du lieu da duoc luu vao file !"<<endl;
    return 0;
}
*/
 


//B11:
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ifstream input("bai9.txt");
    if (!input) {
        cout<<"Khong the doc file!"<<endl;
        return 1;
    }
    const int max_lines = 100; 
    string poemLines[max_lines]; 
    int count = 0; 

    string line;
    while (getline(input, line)) {
        if (count < max_lines) {
            poemLines[count] = line;
            count++;
        } 
		else {
            cout<<"Dung luong qua tai" << endl;
            break;
        }
    }
    input.close();
    for (int i = 0; i < count;i++) {
        cout<<poemLines[i]<<endl;
    }
    return 0;
}
*/





//B12:
/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
long count_word(string line, char word){
	int count = 0;
	for(int i=0;i<line.length();i++){
    	if(line[i] != ' ' && line[i]==word){
    		count++;
			}
		}
	return count;
}

int main(){
	ifstream input("bai12_input.txt");
	if (!input) {
        cout<<"Khong the doc file!"<<endl;
        return 1;
    }
    string line;
    getline(input, line);
	input.close();
	
	ofstream output("bai12_output.txt");
	if (!output) {
        cout<<"Khong the ghi file!"<<endl;
        return 1;
    }
    output<<"Chu viet thuong: "<<endl;
    for(char i='a';i<='z';i++){
    	int count_singleword = count_word(line, i);
		if(count_singleword > 0){
			output<<i<<"-"<<count_singleword<<endl;
		}
	}
	output<<"Chu viet hoa: "<<endl;
	for(char i='A';i<='Z';i++){
    	int count_singleword_2 = count_word(line, i);
		if(count_singleword_2 > 0){
			output<<i<<"-"<<count_singleword_2<<endl;
		}
	}
	output.close();
	cout<<"Da ghi file thanh cong !"<<endl;
	return 0;
}
*/




//B13: 
//B14:
//B15
//mssv - ten sv - nam sinh - diem tb
//them sv vao danh sach
//sap xep danh sach theo cac tieu chi ten, diem trung binh
//Ghi danh sach sinh vien moi vao tap tin
/*
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct Infor{
	int mssv;
	string name;
	int birth;
	float score;
};

int main(){
	ifstream input("bai15_input.txt");
	if (!input) {
        cout<<"Khong the mo file !"<<endl;
        return 1;
    }
	int n; input>>n;
	const int m = 1000;
	char **a = new char*[n];
	for (int i = 0; i<n;i++) {
        a[i] = new char[m];
        for (int j=0; j<m;j++){
            input>>a[i][j];
        }
    }
    input.close();
	
	ofstream output("bai15_output.txt");
    if (!output) {
        cout<<"Khong the ghi file !"<<endl;
        return 1;
    }
    output<<
    
	cout<<"Du lieu da duoc ghi vao file !"<<endl;
	return 0;
}

void add_sinhvien(Infor sv[], int &n) {
    Infor sv_add;
    cout << "Nhap vao mssv can them: ";
    cin >> sv_add.mssv;

    ofstream output("bai15_output.txt"); 
    if (!output) {
        cout << "Khong the ghi file !" << endl;
        return;
    }

    bool check = false;
    for (int i = 0; i < n; i++) {
        if (sv_add.mssv == sv[i].mssv) {
            check = true;
            break;
        }
    }

    if (check) {
        cout << "Sinh vien nay da ton tai trong danh sach !" << endl;
    } else {
        cin.ignore();
        cout << "Nhap ten sinh vien: ";
        getline(cin, sv_add.name);
        cout << "Nhap nam sinh: ";
        cin >> sv_add.birth;
        cout << "Nhap diem trung binh: ";
        cin >> sv_add.score;

        output << "Ten sinh vien: " << sv_add.name << endl;
        output << "Mssv: " << sv_add.mssv << endl;
        output << "Nam sinh: " << sv_add.birth << endl;
        output << "Diem trung binh: " << sv_add.score << endl;
        output << "Da them sinh vien moi vao danh sach." << endl;
        n++; 
    }

    output.close(); // Close the file
}
//void sort_score(char **a, int &n){
//	if (n==0){
//		cout<<"\nDANH SACH RONG."<<endl;
//		return 0;
//	}
//		cout<<"Danh sach sinh vien sau khi sap xep theo diem trung binh: "<<endl;
//	    for (int i=0;i<n;i++){
//	        for(int j=i+1;j<n;j++){
//	            if (sv[i].score > sv[j].score){
//	                Infor temp;
//	                temp = sv[i];
//	                sv[i]=sv[j];
//	                sv[j]=temp;
//	            }
//	        }
//	    }
//}
//void sort_name(){
//	if (n==0){
//		cout<<"\nDANH SACH RONG."<<endl;
//		return 1;
//	}
//		cout<<"Danh sach sinh vien sau khi sap xep theo ten sinh vien: "<<endl;
//	    for (int i=0;i<n;i++){
//	        for(int j=i+1;j<n;j++){
//	            if (sv[i].name > sv[j].name){
//	                Infor temp;
//	                temp = sv[i];
//	                sv[i]=sv[j];
//	                sv[j]=temp;
//	            }
//	        }
//	    }
//}

*/











































