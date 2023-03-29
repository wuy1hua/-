#include<iostream>
#include<stdlib.h>
#include<stdbool.h>
#define MAPSIZE 10

using namespace std;

char map[MAPSIZE][MAPSIZE]={
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	{'+','+','+','+','+','+','+','+','+','+'},
	
};

bool check_drop(int x,int y){
	if(0<=x&&x<=MAPSIZE-1&&0<=y&&y<=MAPSIZE-1){//检查落子是否越界 
		if(map[x][y]=='+'){
			return true;
		}
	}
	return false;
}

bool check_win(){
	//检查行 
	for(int i=0;i<MAPSIZE;i++){
		for(int j=0;j<MAPSIZE;j++){
			if(map[i][j]!='+'&&map[i][j]==map[i][j+1]&&map[i][j]==map[i][j+2]&&map[i][j]==map[i][j+3]&&map[i][j]==map[i][j+4]){
				return true;
			}
		}
	}
	//检查列
	for(int i=0;i<MAPSIZE;i++){
		for(int j=0;j<MAPSIZE;j++){
			if(map[i][j]!='+'&&map[i][j]==map[i+1][j]&&map[i][j]==map[i+2][j]&&map[i][j]==map[i+3][j]&&map[i][j]==map[i+4][j]){
				return true;
			}
		}
	}
	//检查斜线 
	for(int i=0;i<MAPSIZE;i++){
		for(int j=0;j<MAPSIZE;j++){
			if(map[i][j]!='+'&&map[i][j]==map[i+1][j+1]&&map[i][j]==map[i+2][j+2]&&map[i][j]==map[i+3][j+3]&&map[i][j]==map[i+4][j+4]){
				return true;
			}
			if(map[i][j]!='+'&&map[i][j]==map[i+1][j-1]&&map[i][j]==map[i+2][j-2]&&map[i][j]==map[i+3][j-3]&&map[i][j]==map[i+4][j-4]){
				return true;
			}
		}
	}
	return false;
}

void creat_map(){
	for(int k=0;k<MAPSIZE;k++){
		cout<<" "<<k;
	}
	cout<<endl;
	for(int i=0;i<MAPSIZE;i++){
		for(int j=0;j<MAPSIZE;j++){
			if(j==0){
				cout<<i;
			}
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
}

void renew_mapO(int x,int y){
	system("cls");
	for(int k=0;k<MAPSIZE;k++){
		cout<<" "<<k;
	}
	cout<<endl;
	map[x][y]='O';
	for(int i=0;i<MAPSIZE;i++){
		for(int j=0;j<MAPSIZE;j++){
			if(j==0){
				cout<<i;
			}
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
}

void renew_mapX(int x,int y){
	system("cls");
	for(int k=0;k<MAPSIZE;k++){
		cout<<" "<<k;
	}
	cout<<endl;
	map[x][y]='X';
	for(int i=0;i<MAPSIZE;i++){
		for(int j=0;j<MAPSIZE;j++){
			if(j==0){
				cout<<i;
			}
			cout<<map[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main(){
	cout<<"五子棋游戏" <<endl<<"游戏说明：键盘输入落子坐标，先行后列，中间用空格隔开。" <<endl; 
	int x,y;
	creat_map();

	while(1){
		if(!check_win()){
			cout<<"playerO:";
			cin>>x>>y;
			while(!check_drop(x,y)){
				cout<<"无效落子，请重新落子。"<<endl<<"playerO:";
				cin>>x>>y;
			}
			renew_mapO(x,y);
		}
		else{
			break;
		}
					
		if(!check_win()){
			cout<<"playerX:";
			cin>>x>>y;
			while(!check_drop(x,y)){
				cout<<"无效落子，请重新落子。"<<endl<<"playerX:";
				cin>>x>>y;
			}
			renew_mapX(x,y);
		}
		else{
			break;
		}
	}
	cout<<"GAME OVER!";
	return 0;
}
