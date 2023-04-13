#include<iostream>
#define PAI 3.14

using namespace std;

class Circle{
private:
	int radius;
public:
	Circle(int r):radius(r){}
	
	int diameter(){
		return radius*2;
	}
	
	double perimeter(){
		return 2*PAI*radius;
	}
	
	double area(){
		return PAI*radius*radius;
	}
	
};

int main(){
	int r=0;
	cin>>r;
	Circle cir(r);
	cout<<"diameter:"<<cir.diameter()<<endl;
	cout<<"perimeter:"<<cir.perimeter()<<endl;
	cout<<"area:"<<cir.area()<<endl;
}
