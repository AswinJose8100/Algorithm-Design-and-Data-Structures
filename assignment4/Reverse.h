// Reverse.h
#ifndef REVERSE_H
#define REVERSE_H
#include "string"

using namespace std;

class Reverse{
public:
	int number; // An integer where the reversed number will be stored
	Reverse(); // Creates a Reverse by initializing the integer number
	int reverseDigit(int); // Function returns the reversed integer of the integer entered by user
	string reverseString(string); // Function returns the reversed string of the string entered by the user
};
#endif // REVERSE_H