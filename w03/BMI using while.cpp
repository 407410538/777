#include <stdio.h>

int main(){
	float BMI, w, h;
	printf("Enter your height(cm):");
	scanf("%f",&h);
	h=h/100;
	printf("Enter your weight(kg):");
	scanf("%f",&w);
	
	while(h>0 &&w>0){
		BMI=w/(h*h);
		printf("Your BMI:%.1f",BMI);
		if(BMI<18.5)
			printf(" 體重過輕\n");
		else if(BMI<24)
			printf(" 體重正常\n");
		else if(BMI<27)
			printf(" 體重過重\n");
		else if(BMI<30)
			printf(" 輕度肥胖\n");	
		else if(BMI<35)
			printf(" 中度肥胖\n");
		else
			printf(" 重度肥胖\n");	
		printf("Enter your height(cm):");
		scanf("%f",&h);
		h=h/100;
		printf("Enter your weight(kg):");
		scanf("%f",&w);
	}	
	return 0;
}
