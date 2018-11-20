#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Pos{
	int row;
	int col;
};
void prarr(int m[][8]){
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++)
			printf("%2d ",m[i][j]);
		printf("\n");
	}
}
Pos findnext(int m[][8],int row,int col){
	int h[8]={2,1,1,2,-1,-1,-2,-2};
	int v[8]={1,-2,2,-1,2,-2,-1,1};
	Pos pos;
	int nextrow,nextcol;
	for(int i=0;i<8;i++){
		nextrow=row+h[i];
		nextcol=col+v[i];
		if(nextrow>=0 && nextrow<=7 && nextcol>=0 && nextcol<=7 && m[nextrow][nextcol]==0){
			pos.row=nextrow;
			pos.col=nextcol;
			return pos;
		}
	}
	pos.row=-1;
	pos.col=-1;
	return pos;
}
int main(){
	int m[8][8]={0};
	int row,col;
	
	Pos pos;
	srand(time(NULL));
	row=rand()%8;
	col=rand()%8;
	
	m[row][col]=1;
	for(int i=2;i<=65;i++){
		pos=findnext(m,row,col);
		m[pos.row][pos.col]=i;
		row=pos.row;
		col=pos.col;
		if(pos.row==-1 && pos.col==-1){
			prarr(m);
			printf("\n");
			printf("Total moves: %d\n",i-1);
			break;	
		}
	}
	return 0;
}
