#include "myMath.h"
#include <stdio.h>

int main(){
	double x;
	char c;
	printf("Enter a number:");
	while(scanf("%lf", &x) !=1){
		printf("It is not a number, Please enter a number: ");
		scanf("%c",&c);
	}
		
		double result1=sub(add(Exponent((int)x), Power(x,3)),2);
		printf("The value of f(x) = e^x + x^3 - 2 at the point %lf is: %0.4lf\n",x,result1);

		double result2=add(mul(x,3),mul(Power(x,2),2));
		printf("The value of f(x) = 3x + 2X^2 at the point %lf is: %0.4lf\n",x,result2);
		
		double result3=sub(div(mul(Power(x,3),4),5),mul(x,2));
		printf("The value of f(x) = (4x^3)/5 -2x at the point %lf is: %0.4lf\n",x,result3);

				
	
		return 0;
		

	
}


