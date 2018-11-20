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
Pos nextbest(int acce[][8],int row,int col){
	int h[8]={2,1,1,2,-1,-1,-2,-2};
	int v[8]={1,-2,2,-1,2,-2,-1,1};
	int nextrow,nextcol;
	int min=9,minrow=-1,mincol=-1;
	Pos pos;
	acce[row][col]=0;
	for(int i=0;i<8;i++){
		nextrow=row+h[i];
		nextcol=col+v[i];
		if(nextrow>=0 && nextrow<=7 && nextcol>=0 && nextcol<=7 && acce[nextrow][nextcol]>0){
			acce[nextrow][nextcol]--;
			if(acce[nextrow][nextcol]<min){
				min=acce[nextrow][nextcol];
				minrow=nextrow;
				mincol=nextcol;		
			}
		}
	}
	pos.row=minrow;
	pos.col=mincol;
	return pos;
}

int main(){
	int m[8][8]={0};
	int row,col;
	int move=1;
	int acce[8][8] =
		{ 2, 3, 4, 4, 4, 4, 3, 2,
		  3, 4, 6, 6, 6, 6, 4, 3,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          4, 6, 8, 8, 8, 8, 6, 4,
          3, 4, 6, 6, 6, 6, 4, 3,
          2, 3, 4, 4, 4, 4, 3, 2
	   };
	Pos pos;
	srand(time(NULL));
	row=rand()%8;
	col=rand()%8;
	printf("1: (row,col)=(%d,%d)\n\n",row,col);
	m[row][col]=1;
	for(int i=2;i<=64;i++){
		pos=nextbest(acce,row,col);
		if(pos.row==-1 && pos.col==-1){
			break;	
		}else{	
			m[pos.row][pos.col]=i;
			move++;
			row=pos.row;
			col=pos.col;
		}
	}
	prarr(m);
	printf("\nTotal moves: %d\n",move);
	return 0;
}
