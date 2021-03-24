// Tournament.h
#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "string"
#include "Referee.h"
#include "Avalanche.h"

using namespace std;

class Tournament{
public:
	// An array of strings that consists of 8 computer choices
	string players[8];
	// Creates a tournament by initializing the string array of choices
	Tournament(string);
	// This function assigns players against each other and pasees on to referee to determine the winner of the game
	void Assignment();
	// Prints out the winner of the tournament
	void Winner();
};
#endif // TOURNAMENT_H