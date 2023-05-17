#include<string>
#include<iostream>
using namespace std;
class Inverter{
private:
	string str;
public:
	Inverter(const string& str):str(str){	}
	string getresult(){
		string invertedStr;
		invertedStr.resize(str.length());
		for(int i=0;i<str.length();++i){
			invertedStr[i]=str[str.length()-1-i];
		}
		return invertedStr;
	}
};
int main(){
	string str;
	cin>>str;
	Inverter iv(str);
	cout<<iv.getresult();
	return 0;
}
