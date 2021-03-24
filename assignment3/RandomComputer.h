// RandomComputer.h
#ifndef RANDOMCOMPUTER_H
#define RANDOMCOMPUTER_H
#include "string"
#include "Computer.h"
using namespace std;

// A class inherits publicly from class Computer
class RandomComputer :public Computer{
public:
    // Creates a constructor that initializes the variables in base class and finds random choice
	RandomComputer();
	
};
#endif // RANDOMCOMPUTER_H