#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class KeyFormatter{
private:
	const string originalkey; // 原始字符串
	string purifiedkey; // 去除连字符后的字符串
	string upperkey; // 将小写字母转换成大写字母后的字符串
	string result; // 格式化后的字符串
	const int K; // 每组中包含的字符数
public:
	KeyFormatter(const string& S,int K):originalkey(S),K(K),purifiedkey(""),upperkey(""){	}
	string convertToPurifiedkey(){
		for(auto i:originalkey){
			if(i!='-'){
				purifiedkey+=i;//直接拼接到后面 
			}
		}
	return purifiedkey;
	}
	string convertToUpperkey(){
		for(auto i:purifiedkey){
			if(islower(i)){
				upperkey+=toupper(i);
			}
			else{
				upperkey+=i;
			}
		}	
	return upperkey;
	}
	string getResult(){
		result=upperkey;
		int len=upperkey.length();
		int groups=(len+K-1)/K;
		int offset=len-K;
		for(int i=1;i<groups;i++){
			result.insert(offset,"-");
			offset-=K;
		}
	return result;
	}
};

int main(){
	string S;
	cin>>S;
	int K;//正整数K 表示一组中有K个字符 
	cin>>K;
	KeyFormatter kf(S,K);
	kf.convertToPurifiedkey();
	kf.convertToUpperkey();
	cout<<kf.getResult()<<endl;
}
