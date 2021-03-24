#include <iostream>
#include "string"
#include "human.h"
#include "computer.h"
#include "referee.h"

using namespace std;
 
int main(){
	string choice1;
	string choice2="R";// computer choice is always Rock
	string humanschoice;
	string computerschoice;
	getline(cin,choice1);// user input
	human h(choice1);
	humanschoice=h.playerchoice();
	computer c(choice2);
	computerschoice=c.computerchoice();
	referee r(humanschoice,computerschoice);// passing humans/players and computers choice to referee class

} 