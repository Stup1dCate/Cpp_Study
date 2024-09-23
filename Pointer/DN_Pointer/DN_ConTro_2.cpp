/*Ung dung cua con tro 
1. dung de duyet 1 cautruc du lieu (tro vao duoc tat ca cac vi tri o trong mang)
*/
#include<iostream>
#include<string>
	
struct human{
	human(std::string ht, int t, float cc, float cn){
		ho_ten = ht;
		tuoi=t;
		chieucao=cc;
		cannang=cn;
	}
	human(const human &cauthu_khac){
		ho_ten = cauthu_khac.ho_ten;
		tuoi = cauthu_khac.tuoi;
		chieucao = cauthu_khac.chieucao;
		cannang = cauthu_khac.cannang;
		da_bong = cauthu_khac.da_bong;
	}
	int tuoi;
	float chieucao;
	float cannang;
	std::string ho_ten;
	bool da_bong;
};
void giai_nghe(human *player){
	std::cout<<"Cau thu da giai nghe "<<(*player).ho_ten<<std::endl;
	(*player).da_bong = false;
}

int main(){
	human fbplayer[5]  = {
		human("Messi", 34, 1.69, 71),
		human("Ronaldo", 36, 1.84, 85),
		human("Neymar", 31, 1.72, 78),
		human("Mbappe", 25, 1.78, 72),
		human("Onana", 27, 1.90, 90)
	};
	human *cauthu = nullptr;
	
//hien thi tat ca cauthu co trong danh sach: cach binh thuong 
	for(int i=0; i<5;i++){
		std::cout<<(fbplayer[i]).ho_ten <<std::endl; 
	}	
	std::cout<<"\n";
//hien thi tat ca cauthu co trong danh sach: cach pointer
	for(cauthu = fbplayer; cauthu < fbplayer + 5; cauthu++){
		std::cout<<(*cauthu).ho_ten <<" "; 
		std::cout<<(*cauthu).tuoi <<std::endl; 
	}
	
	std::cout<<"Cau thu "<<fbplayer[1].ho_ten<<" "<<(fbplayer[1].da_bong ? " dang da bong" : "da giai nghe")<<std::endl;
	giai_nghe(&fbplayer[1]);
	std::cout<<"Cau thu "<<fbplayer[1].ho_ten<<" "<<(fbplayer[1].da_bong ? "dang da bong" : "da giai nghe")<<std::endl;
	
	return 0;
}
