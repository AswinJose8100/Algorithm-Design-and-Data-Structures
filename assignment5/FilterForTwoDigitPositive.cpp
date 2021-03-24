#include "FilterForTwoDigitPositive.h"

bool FilterForTwoDigitPositive::g(int a){
	if(a>=10 && a<=99){
		return true;
	}
	else{
		return false;
	}
}