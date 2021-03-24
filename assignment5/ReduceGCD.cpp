#include "ReduceGCD.h"

int ReduceGCD::binaryOperator(int a, int b){
	if(b!=0){
		return binaryOperator(b,a%b);
	}
	else{
		return a;
	}
}