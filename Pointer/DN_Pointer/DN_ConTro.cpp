/*Con tro la bien ma gia tri cua no la dia chi cua bien khac 

Kieu du lieu la pointer thi phai co dau '*' o phia truoc (vd: *human; *dovat; *n;...). Gia tri cua pointer la mot dia chi nen 
truoc gia tri phai co dau '&' (vd: *human = &messi; *dovat = &caiban; *n = &x;...) 
*/

#include<iostream>
using namespace std;
struct human{
	human(int t, float cc, float cn){
		tuoi=t;
		chieucao=cc;
		cannang=cn;
	}
	int tuoi;
	float chieucao;
	float cannang;
};

int main(){
	int a =1000;
	int *ptr =&a;
	cout<<(*ptr)<<endl; // (*ptr) khac voi *ptr khai bao ban dau: (*ptr) tra ve gia tri cua bien 'a'.
	// ptr = &a.
	human messi(34, 1.69, 71);
	human ronaldo(36, 1.84, 85);
	human neymar(31, 1.72, 78);
	
	human *cauthu = nullptr; //nullptr: the hien rang pointer khong chi den mot doi tuong nao ca <=> mot con tro rong.
	// khi con tro dang rong thi khong the goi gia tri cua no ra duoc (vi con tro = null-khong co gia tri nao).
	
	cauthu = &messi;
	std::cout<< (*cauthu).tuoi <<std::endl; //lay gia tri cua dia chi 'cauthu' tai vi tri 'tuoi'.
	
	cauthu = &ronaldo; // hoac co the dung: cauthu = cauthu + 1; => khong khuyen khich su dung tren cac bien tu do.
	std::cout<< (*cauthu).chieucao <<std::endl;
	
	cauthu = &neymar;
	std::cout<< (*cauthu).cannang <<std::endl;
	
	return 0;
}








