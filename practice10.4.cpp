#include<iostream>
#include<string>
#include<cctype>
using namespace std;

class KeyFormatter{
private:
	const string originalkey; // ԭʼ�ַ���
	string purifiedkey; // ȥ�����ַ�����ַ���
	string upperkey; // ��Сд��ĸת���ɴ�д��ĸ����ַ���
	string result; // ��ʽ������ַ���
	const int K; // ÿ���а������ַ���
public:
	KeyFormatter(const string& S,int K):originalkey(S),K(K),purifiedkey(""),upperkey(""){	}
	string convertToPurifiedkey(){
		for(auto i:originalkey){
			if(i!='-'){
				purifiedkey+=i;//ֱ��ƴ�ӵ����� 
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
	int K;//������K ��ʾһ������K���ַ� 
	cin>>K;
	KeyFormatter kf(S,K);
	kf.convertToPurifiedkey();
	kf.convertToUpperkey();
	cout<<kf.getResult()<<endl;
}
