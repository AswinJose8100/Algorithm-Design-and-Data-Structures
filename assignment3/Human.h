// Human.h
#ifndef HUMAN_H
#define HUMAN_H
#include "string"

using namespace std;

// Encapsulates all information associated with humans choice of rock, paper or scissors
// Provides methods to return the choice selected by human player
class human{
public:
	// Stores the choice entered by human player
	string choice1;
	// Constructs a new human player with the give choice inputed by user
	human(string);
	// Returns the choice entered by user
	string playerchoice();


};
#endif // HUMAN_H