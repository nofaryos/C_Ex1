#include "myMath.h"

double Exponent(int x) {
	double result=1;


	if(x < 0){
		while(x < 0){
			result*=1/EXP_pow;
			x++;
		}
	}
	if(0 < x){
		while(0 < x){
			result*=EXP_pow;
			x--;
		}	
	}
	return result;	

}

double Power(double x , int y) {
	
	double result=1;

	if(y < 0){
		while(y < 0){
			result*=1/x;
			y++;
		}
	}
	if(0 < y){
		
		while(0 < y){
			result*=x;
			y--;
		}
	
	}
	return result;

}
	
	