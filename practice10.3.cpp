#include<iostream>
#include<string>
#include<cstdlib>

using namespace std;

class solution{
private:
	string str1;
	string str2;
public:
	solution(string str1,string str2):str1(str1),str2(str2){	}
	void search(){
		auto pos=str2.find(str1);
		if(pos==string::npos){
		 	cout<<-1;
		 }
		while(pos!=string::npos){
		 	cout<<pos<<" ";
		 	pos=str2.find(str1,pos+1);
		}
		 
	}
}; 

int main(){
	string str1,str2;
	cin>>str1;
	getline(cin.ignore(),str2);
	solution sol(str1,str2);
	sol.search();	
}
