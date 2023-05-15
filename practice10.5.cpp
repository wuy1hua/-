#include<iostream>
using namespace std;

class NumberConverter{
private:
	string str;
	const char list[10][5]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
public:
	NumberConverter(string str):str(str){	}
	void getResult(){
			for(int k=0;k<str.length();k++){
				for(int i=0;i<10;i++){
					for(int j=0;j<5;j++){
						if(str[k]==list[i][j]){
							cout<<i;
						}
					}
				}
			}
	}
};
int main(){
	string str;
	cin>>str;
	NumberConverter nc(str);
	nc.getResult();
	return 0;
}
