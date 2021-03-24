// Avalanche.h
#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "string"
#include "Computer.h"
using namespace std;

// Class Avalanche which inherits publicly from Computer class 
class Avalanche :public Computer{
public:
	// Creates Avalanche and initializes the variables in the base class
	Avalanche();
	// Returns the choice obtained in the class
	string getchoice();

	
};
#endif // AVALANCHE_H