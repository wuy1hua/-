#include<iostream>

class sixNumCalculator{
private:
	int num1,num2,num3,num4,num5,num6;
	double averagenum;
	double variance;
public:
	sixNumCalculator(int a,int b,int c,int d,int e,int f):num1(a),num2(b),num3(c),num4(d),num5(e),num6(f){}
	double calulateAverage(){
		averagenum=(num1+num2+num3+num4+num5+num6)/(double)6;
		std::cout<<"average="<<averagenum<<std::endl;
		return averagenum;
	}
	double calculateVariance(){
		variance=(num1-averagenum)*(num1-averagenum)+(num2-averagenum)*(num2-averagenum)+(num3-averagenum)*(num3-averagenum)+(num4-averagenum)*(num4-averagenum)+(num5-averagenum)*(num5-averagenum)+(num6-averagenum)*(num6-averagenum);
		std::cout<<"variance="<<variance<<std::endl;
		return variance;

	}
};

int main(){
	int a,b,c,d,e,f;
	std::cin>>a>>b>>c>>d>>e>>f;
	sixNumCalculator snc(a,b,c,d,e,f);
	snc.calulateAverage();
	snc.calculateVariance();
	
}
