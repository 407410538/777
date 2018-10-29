#include <stdio.h>

#define max 50

void prarray(int m[][max],int n){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++)
			printf("%3d ",m[i][j]);
		printf("\n");
	}
}
void mag_diag(int m[][max],int n){
	int row=n;
	int col=n/2+1;
	m[row][col]=1;
	for(int i=2;i<=n*n;i++){
		if(i%n==1)
			row=(row-1+n)%n;
		else{
			row=row%n+1;
			col=col%n+1;
		}
		m[row][col]=i;
	}
}
void mag_knight(int m[][max],int n){
	int row=n;
	int col=n/2;
	m[row][col]=1;
	col++;
	for(int i=2;i<=n*n;i++){
		if(i%n==1)
			row=(row-1+n)%n;
		else{
			row=(row-2+n)%n;
			col=col%n+1;	
		}
		m[row][col]=i;
	}
}
int main(){
	int m[max][max]={};
	int n=5;
	
	printf("Diagonal Move\n");
	mag_diag(m,n);
	prarray(m,n);
	
	printf("Knight Move\n");
	mag_knight(m,n);
	prarray(m,n);
	
	return 0;
}
