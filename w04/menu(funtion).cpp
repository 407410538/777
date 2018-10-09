#include <stdio.h>

void prchar(char c,int n){
	for(int i=0; i<n; i++)
		printf("%c",c);
}
int main()
{
    int choice;
    int height, width, type, filled;
    int i,j;
    while(1){
        printf("Main Menu\n");
        printf("1.Rectangle\n");
        printf("2.Vertical Triangle\n");
        printf("3.Tsosceles Triangle\n");
        printf("4.Exit\n");
        printf("=>");
        scanf("%d",&choice);
        switch(choice){
        case 1:
        	printf("Enter height, filledwidth:");
        	scanf("%d %d %d",&height,&width,&filled);
        	if(filled){
        		for(int i=1;i<=height;i++)
        			prchar('*',width);
			}else{
				if(i==1 ||i==height){
					prchar('*',width);
					printf("\n");
				}else{
					printf("*");
					prchar(' ',width-2);
					printf("*");
				}
			}		
            break;
        case 2:
        	printf("Enter height, type, filled:");
        	scanf("%d %d %d",&height,&type,&filled);
        	if(type==1){
        		if(filled){
					for(i=1;i<=height;i++){
						prchar('*',i);
						printf("\n");
					}
				}else{
					for(i=1;i<=height;i++){
        				if(i==1 ||i==height){
        					prchar('*',i);
        					printf("\n");
						}else{
        					printf("*");
        					prchar(' ',i-2);
        					printf("*\n");
						}
					}					
				}
			}else if(type==2){
				if(filled){
					for(i=height;i>0;i--){
						prchar(' ',i-1);
						prchar('*',height-i);
						printf("*\n");
					}		
				}else{
					for(i=height;i>0;i--){
						prchar(' ',i-1);
						if(i==1 ||i==height){        					
        					prchar('*',i-1);
        					printf("\n");
        				}else{
							printf("*");
							prchar(' ',height-i);
							printf("*\n");
						}
					}
				}		
			}else if(type==3){
				if(filled){
					for(i=height;i>0;i--){
        				prchar('*',i);
        				printf("\n");
					}
				}else{
					for(i=height;i>0;i--){
						if(i==1 ||i==height){
        					prchar('*',i);
        					printf("\n");
        				}else{
							printf("*");
							prchar(' ',i-2);
							printf("*\n");
						}
					}
				}		
			}else if(type==4){
        		if(filled){
					for(i=height;i>0;i--){
						prchar(' ',height-i);
						prchar('*',i);
						printf("\n");
					}		
				}else{
					for(i=height;i>0;i--){
						prchar(' ',height-i);
						if(i==1 ||i==height){
        					prchar('*',i);
        					printf("\n");
        				}else{
							printf("*");
							prchar(' ',i-2);
							printf("*\n");
						}
					}
				}		
			}
			break;
		case 3:	
			printf("Enter height, type, filled:");
        	scanf("%d %d %d",&height,&type,&filled);
        	if(type==1){
        		j=1;
        		if(filled){
        			for(i=height;i>0;i--){
						prchar(' ',i-1);
						prchar('*',j);
						printf("\n");
						j+=2;
					}       		
				}else{
					for(i=height;i>0;i--){
						if(i==1 ||i==height){
							prchar(' ',i-1);
							prchar('*',j);
							printf("\n");
						}else{
							prchar(' ',i-1);
							printf("*");
							prchar(' ',j-2);
							printf("*\n");								
						}
						j+=2;
					}    
				}
			}else{
				j=2*(height)-1;
				if(filled){
					for(i=0;i<height;i++){
						prchar(' ',i);
						prchar('*',j);
						printf("\n");
						if(j==1)
							break;
						j-=2;
					}
				}else{
					for(i=0;i<height;i++){
						if(i==0 ||i==height-1){
							prchar(' ',i);
							prchar('*',j);
							printf("\n");
							if(j==1)
								break;
						}else{
							prchar(' ',i);
							printf("*");
							prchar(' ',j-2);
							printf("*\n");
						}
						j-=2;
					}
				}				
			}
			break;
		}
		if(choice==4)
			break;
    }
    return 0;
}
