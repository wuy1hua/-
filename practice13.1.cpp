#include<iostream>
#include<string>
#include<string.h>

int mystrstr(char a[],char b[]){
	int lenA=strlen(a);
	int lenB=strlen(b);
	for(int i=0;i<lenA;++i){
		int k=i;
		for(int j=0;j<lenB;++j){
			if(a[k]!=b[j]){
				break;
			}
			else{
				++k;
			}
			if(j==lenB-1){
				return i;
			}
		}
	}
	return -1;
}
int main(){
	char a[]="abcde";
	char b[]="d";
	std::cout<<mystrstr(a,b);
	return 0;
}
