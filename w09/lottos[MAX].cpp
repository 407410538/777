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
	int num[6];
};

int main(){
	int n=5;
	Date dates[max];
	Lot lott[max];
	printf("Enter N: ");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++){
		dates[i].year=rand()%11+2010;
		dates[i].month=rand()%12+1;
		dates[i].day=rand()%31+1;
		printf("%d/%02d/%02d  ", dates[i].year, dates[i].month, dates[i].day);
		for(int j=0;j<6;j++){
			lott[i].num[j]=rand()%48+1;
			printf("%02d ",lott[i].num[j]);
		}
		printf("\n");	
	}
	return 0;
}
