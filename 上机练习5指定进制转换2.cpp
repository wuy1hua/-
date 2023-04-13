#include<iostream>
#include<math.h>

using namespace std;

class DecimalToRandomConverter{
private:
	int data;
	int randomArray[20];
public:
	void set(int num){
		data=num;
		for(int i=0;i<20;i++){
			randomArray[i]=-1;
		}
	}
	
	void convertDecimalToRandom(int R) {
	    int k = 0;
	    int temp = data;
	    do{
	        randomArray[k++] = temp % R;
	        temp /= R;
	    }while (temp > 0);
}

	
	void showResult(){
		for(int i=19;i>=0;i--){
			if(randomArray[i]!=-1){
				if(randomArray[i]<=9){
					cout<<randomArray[i];
				}
				else{
					switch(randomArray[i]){
						case 10:cout<<'A';break;
						case 11:cout<<'B';break;
						case 12:cout<<'C';break;
						case 13:cout<<'D';break;
						case 14:cout<<'E';break;
						case 15:cout<<'F';break;
					}
				}
			}
		}
	}
};

int main(){
	int num,R;
	cin>>num>>R;
	DecimalToRandomConverter dtrc;
	dtrc.set(num);
	dtrc.convertDecimalToRandom(R);
	dtrc.showResult();
}


