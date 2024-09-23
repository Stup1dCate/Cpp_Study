#include<iostream>
using namespace std;
struct Circle{
	float r;
	Circle(float _r){
		r= _r;
	}
	friend bool operator>(Circle c1, Circle c2){
	return c1.r > c2.r;
	}
	friend bool operator<(Circle c1, Circle c2){
	return c1.r < c2.r;
	}
};
int main(){
	Circle c1(4), c2(3);
	cout<<(c1 > c2);
	return 0;
}
