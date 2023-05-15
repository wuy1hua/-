#include<iostream>
using namespace std;

class solution{
private:

public:
	int sort(int num[],int n){
		for(int i=0;i<n-1;i++){
			for(int j=0;j<n-1-i;j++){
				if(num[j]>num[j+1]){
					int temp=num[j];
					num[j]=num[j+1];
					num[j+1]=temp;
				}
			}
		}
	} 
};
	
int main(){
	solution sol;
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	
	sol.sort(num,n);
	
	for(int i=0;i<n;i++){
		cout<<num[i]<<" ";
	}
} 



