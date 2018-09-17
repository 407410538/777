#include <stdio.h>
#include <math.h>

int main(){
	float a, b, c;
	double x1,x2;
	printf("Enter a,b,c:");
	scanf("%f %f %f",&a,&b,&c);
	x1 =(-b+sqrt(b*b-4*a*c))/(2*a);
	x2 =(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("For equation %.1f x^2 %.1f x + %.1f =0, two roots are\n",a,b,c);
	printf("x1= %.1f\n",x1);
	printf("x2= %.1f\n",x2);
	return 0;	
}



