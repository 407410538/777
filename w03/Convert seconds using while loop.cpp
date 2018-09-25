#include <stdio.h>

int main(){
	int sec,h,m,s;
	printf("Enter seconds: ");
	scanf("%d",&sec);
	while(sec>0){
		h=sec/3600;
		m=(sec/60)%60;
		s=sec%60;
		printf("%5d seconds = %02d:%02d:%02d\n",sec,h,m,s);
		printf("Enter seconds: ");
		scanf("%d",&sec);
	}
	return 0;
}
