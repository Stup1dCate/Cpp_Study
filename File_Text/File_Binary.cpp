#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream ofs;
	// .bin .dat
	ofs.open("testbinary.dat", ios::binary);
	
	if(!ofs.is_open()){
		cout<<"Mo file that bai !";
		return 1;
	} 
/*	
	int n=6;
	ofs.write((char*)&n, sizeof(int));
	
	ofs.close();
	
	ifstream ifs;
	ifs.open("testbinary.dat", ios::binary);
	
	int read_n;
	ifs.read((char*)&read_n, sizeof(int));
	
	cout<<read_n;
*/


	int n=3;
	float num[n]={1.2, 1.3, 1.4};
	
	ofs.write((char*)&n, sizeof(int));
	ofs.write((char*)&num, sizeof(float)*n);
	
	ofs.close();
	
	ifstream ifs;
	ifs.open("testbinary.dat", ios::binary);
	
	int read_n;
	ifs.read((char*)&read_n, sizeof(int));
	float read_num[read_n];
	ifs.read((char*)&read_num, sizeof(float)*read_n);
	
	for(int i=0;i<read_n;i++){
		cout<<read_num[i]<<" ";
	}


	
	return 0;
}











