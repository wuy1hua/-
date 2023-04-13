#include<iostream>

using namespace std;

class PalindromeMoreThanX{
private:
	int base;
	int count;
public:
	PalindromeMoreThanX(int base):base(base),count(0){}
	
	bool isPalindrome(int num){
		int _num=0,temp=0;
		temp=num;
		while(temp>0){
			_num*=10;
			_num+=temp%10;
			temp/=10;
		}
		if(num==_num){
			return true;
		}
		else{
			return false;
		}	
	}
	void result(int k){
		int num=base;
		while(count<k){
			num++;
			if(isPalindrome(num)){
				cout<<num<<" ";
				count++;
			}
		}
		cout<<endl;
	}
};

int main(){
	int N;
	cin>>N;
	for(int i=0;i<N;i++){
		int base,k;
		cin>>base>>k;
		PalindromeMoreThanX pmtx(base);
		pmtx.result(k);
	}
	
}
