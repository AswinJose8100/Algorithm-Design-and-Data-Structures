#include <iostream>
#include "Computer.h"

string Computer::choicearray[3]={"rock","paper","scissors"};
string Computer::array_1[3]={"paper","scissors","rock"};
string Computer::array_2[3]={"paper","scissors","scissors"};
string Computer::array_3[3]={"rock","paper","paper"};
Computer::Computer(){
	rock_choice="rock";
	scissors_choice="scissors";
	paper_choice="paper";
	Rand_choice=choicearray[rand()%3];
	

}
