#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "string"
#include "Computer.h"
using namespace std;

// A class inherits publicly from class Computer
class Bureaucrat :public Computer{
public:
	// Constructs Toolbox and intializes and access the variables of base class to get the choice
	Bureaucrat();
	
	
};
#endif