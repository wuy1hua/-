#include<iostream>
#include<math.h>

using namespace std;

class DecimalToOctalConverter{
private:
	int data;
	int octalArray[10];
public:
	void set(int num){
		data=num;
		for(int i=0;i<10;i++){
			octalArray[i]=-1;
		}
	}
	
	void convertDecimalToOctal() {
	    int k = 0;
	    int temp = data;
	    do{
	        octalArray[k++] = temp % 8;
	        temp /= 8;
	    }while (temp > 0);
}

	
	void showResult(){
		for(int i=8;i>=0;i--){
			if(octalArray[i]!=-1){
				cout<<octalArray[i];
			}
		}
	}
};

int main(){
	int num;
	cin>>num;
	DecimalToOctalConverter dtoc;
	dtoc.set(num);
	dtoc.convertDecimalToOctal();
	dtoc.showResult();
}
