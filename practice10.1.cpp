#include<iostream>

using namespace std;

int IsCancel(int a[],int n,int k){
	int cnt=0;
	for(int i=0;i<n;i++){
		if(a[i]<=0){
			cnt++;
		}
	}
	if(cnt<=k){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(IsCancel(a,n,k)){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
}
