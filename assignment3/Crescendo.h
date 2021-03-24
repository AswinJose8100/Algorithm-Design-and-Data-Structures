// Crescendo.h
#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "string"
#include "Computer.h"
using namespace std;

// Class Crescendo inherts publicly from Computer class
class Crescendo :public Computer{
public:
	//  string to store the choice of crescendo class
    string choice_1;
    // a static integer to go through the array of choices in the class
	static int i;
	// Constructor of class that initializes variables of the class
	Crescendo();
	
};
#endif // CRESCENDO_H