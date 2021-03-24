#include <iostream>
#include "Crescendo.h"
#include "Computer.h"
int Crescendo::i=0;

Crescendo::Crescendo() : Computer(){
	if(i>=0){
		if(i>2){
			i=0;
		}
		choice_1=array_1[i];
		i++;
	}

	

}
	
