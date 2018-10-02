#include <stdio.h>

int main()
{
    int choice;
    int height, width, type;
    int i, j;
    while(1){
        printf("Main Menu\n");
        printf("1.Rectangle\n");
        printf("2.Vertical Triangle\n");
        printf("3.Exit\n");
        printf("=>");
        scanf("%d",&choice);
        switch(choice){
        case 1:
        	printf("Enter height and width:");
        	scanf("%d %d",&height,&width);
        	for(i=0;i<height;i++){
        		for(j=0;j<width;j++){
        			if(i==0 ||i==height-1 ||j==0 ||j==width-1)
        				printf("*");
        			else
        				printf(" ");
				}
				printf("\n");
			}
            break;
        case 2:
        	printf("Enter height and type:");
        	scanf("%d %d",&height,&type);
        	if(type==1){
        		for(i=0;i<height;i++){
        			for(j=0;j<=i;j++){
        				if(j==0 ||j==i ||i==height-1)
        					printf("*");
        				else
        					printf(" ");
					}
					printf("\n");
				}		
			}
			else if(type==2){
        		for(i=height;i>0;i--){
        			for(j=0;j<i;j++){
        				if(j==0 ||j==i-1 ||i==height)
        					printf("*");
        				else
        					printf(" ");
					}
					printf("\n");
				}		
			}
			else if(type==3){
        		for(i=0;i<height;i++){
        			for(j=height;j>0;j--){
        				if(j==1 ||j==i+1 ||i==height-1)
        					printf("*");
        				else
        					printf(" ");
					}
					printf("\n");
				}		
			}
			else if(type==4){
        		for(i=height;i>0;i--){
        			for(j=1;j<=height;j++){
        				if(j==1 ||j==i ||i==height)
        					printf("*");
        				else
        					printf(" ");
					}
					printf("\n");
				}		
			}
			break;
		}
		if(choice==3)
			break;
    }
    return 0;
}
