// Toolbox.h
#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "string"
#include "Computer.h"
using namespace std;

// A class inherits publicly from class Computer
class Toolbox :public Computer{
public:
	// Constructs Toolbox and intializes and access the variables of base class to get the choice
	Toolbox();
	
	
};
#endif // TOOLBOX_H