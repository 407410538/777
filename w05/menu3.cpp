#include <stdio.h>

int isleap(int year){
	if(year%4==0&&year%100!=0||year%400==0)
		return 1;
	else 
	    return 0;
}

int time(int hh,int mm,int ss){
	int i=0;
	i+=hh*3600;
	i+=mm*60;
	i+=ss;
	return i;
}

int main(){
	int choice=0;
    int year, hh, mm, ss, sec;
    while(1){
        printf("Main Menu\n");
        printf("1.Leap Year\n");
        printf("2.Timeconvert\n");
        printf("3.Exit\n");
        printf("=>");
        scanf("%d",&choice);
        if(choice==3)
        	break;
        switch(choice){
        	case 1:
        		printf("Enter Year: ");
				scanf("%d",&year);
        		if(isleap(year))
        			printf("Year %d is a leap year.\n",year);
        		else
        			printf("Year %d is not a leap year.\n",year);
        		break;
			case 2:	
				printf("Enter hh:mm:ss : ");
				scanf("%d:%d:%d",&hh,&mm,&ss);
				sec==time(hh,mm,ss);
				printf("%02d:%02d:%02d = %5d seconds\n",hh,mm,ss,sec);
				break;				
		}	
	}
	return 0;
}
