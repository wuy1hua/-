#include<iostream>
using namespace std;

class Pow{
private:
	double base;
	double exponent;
public:
	Pow(const double& x,const double& n):base(x),exponent(n){ }
	double getResult(){
		double result=1.0;
		if(exponent>=0){
			for(int i=0;i<exponent;++i){
				result*=base;
			}
		}
		else{
			for(int i=0;i<-exponent;++i){
				result/=base;
			}
		}
		return result;
	}
};

int main(){
	double x,n;
	cin>>x>>n;
	Pow p(x,n);
	cout<<p.getResult();
	return 0;
}
