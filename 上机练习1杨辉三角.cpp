#include<iostream>
#include<string>

using namespace std;

class Yanghui{
private:
	int trg[15][15];
public:
	void set(){
		for(int i=0;i<15;i++){
			for(int j=0;j<15;j++){
				trg[i][j]=0;
			}
		}
		trg[0][0]=1;
	}
	~Yanghui(){}
	void cal(int num){
		for(int i=1;i<15;i++){
			trg[i][0]=1;
			trg[i][i]=1;
			for(int j=0;j<15;j++){
				trg[i][j]=trg[i-1][j]+trg[i-1][j-1];
			}
		}
	}
	void print(int num){
		for(int i=0;i<num;i++){
			for(int j=0;j<15;j++){
				if(trg[i][j]!=0){
					cout<<trg[i][j]<<" ";
				}
			}
			cout<<endl;
		}
		
	}
};

int main(){
	int num;
	cin>>num;
	Yanghui yh;
	yh.set();
	yh.cal(num);
	yh.print(num);
}
