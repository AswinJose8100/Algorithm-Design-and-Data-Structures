#include <iostream>
#include "PaperDoll.h"
#include "Computer.h"
int PaperDoll::i=0;

PaperDoll::PaperDoll() : Computer(){
	if(i>=0){
		if(i>2){
			i=0;
		}
		choice_2=array_2[i];
		i++;
	}
	cout<<choice_2<<"\n";

}
	
