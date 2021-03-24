#include <iostream>
#include "computer.h"

computer::computer(string input2){
	choice2=input2;
}
string computer::computerchoice(){
	return choice2; // returns the choice entered 
}