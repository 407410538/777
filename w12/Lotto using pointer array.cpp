#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define max 100

struct Date{
	int year;	
	int month;
	int day;
};
struct Lot{
	Date dates;
	int num[6];
};
int duplicate(int num[], int pos){
	for(int i=0;i<pos;i++){
		if(num[i]==num[pos]) 
			return 1;
	}
	return 0;
}

int main(){
	int n=5,temp;
	Lot *plotto[max];
	printf("Enter N: ");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++){
		plotto[i]=(Lot *)malloc(sizeof(struct Lot));
		plotto[i]->dates.year=rand()%11+2010;
		plotto[i]->dates.month=rand()%12+1;
		plotto[i]->dates.day=rand()%31+1;
		printf("%d/%02d/%02d  ", plotto[i]->dates.year, plotto[i]->dates.month, plotto[i]->dates.day);
		for(int j=0;j<6;j++){
			do{
           		temp = rand()%49+1;
       		}while(duplicate(plotto[i]->num,j));
			plotto[i]->num[j]=temp;
			printf("%02d ",plotto[i]->num[j]);
		}
		printf("\n");	
	}
	return 0;
}
