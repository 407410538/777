#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int isleap(int n){
	if(n%4==0 && n%100!=0 || n%400==0)
		return 1;
	else
		return 0;
}
int main(){
	int y, mon, day;
	int m[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum=0;
	char cont='Y';
	while(cont=='Y'){
		printf("Enter year: ");
		scanf("%d",&y);
		printf("Enter month and day: ");	
		scanf("%d %d",&mon,&day);
		m[1]=28;
		sum=0;
		if(isleap(y))
			m[1]++;
		for(int i=0;i<mon-1;i++)
			sum+=m[i];
		printf("%d days passscd since 1/1/%d\n",sum+=day,y);
		printf("Continus(Y/N)?");
		getche();
		cont=toupper(getche());
		printf("\n");
	}
	return 0;
}
