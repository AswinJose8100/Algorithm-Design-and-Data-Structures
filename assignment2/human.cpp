#include <iostream>
#include "human.h"

human::human(string input1){
	choice1=input1;
}
string human::playerchoice(){
	return choice1; //returns the choice entered by the player
}