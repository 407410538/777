#include<stdio.h>

int main(){
	int x=10;
	int *px=&x;
	int **ppx=&px;
	printf("%d\n",*px+10);
	printf("%d\n",**ppx+20);
	
	
	return 0;
}
