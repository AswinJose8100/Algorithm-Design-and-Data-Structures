#include <iostream>
#include "FistfullODollars.h"
#include "Computer.h"
int FistfullODollars::i=0;

FistfullODollars::FistfullODollars() : Computer(){
	if(i>=0){
		if(i>2){
			i=0;
		}
		choice_3=array_3[i];
		i++;
	}
	cout<<choice_3<<"\n";

}
	
