#include <iostream>
#include "human.h"

using namespace std;

human::human(string input1){
	choice1=input1;
}
string human::playerchoice(){
	return choice1;
}