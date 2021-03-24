// Referee.h
#ifndef REFEREE_H
#define REFEREE_H
#include "string"

using namespace std;

class Referee{
public:
	// The choices of 2 players competing against each other 
	string choice1,choice2;
	// Kepps track of how many times each of the players have won
	int counter1,counter2;
	// Creates a referee with choices given as parameters
	Referee(string,string);
	// A method to determine the winner of the game and returns the result back to tournament
	string checking();


};
#endif // REFEREE_H