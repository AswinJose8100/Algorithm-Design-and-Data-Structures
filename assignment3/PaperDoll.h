#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "string"
#include "Computer.h"
using namespace std;

// A class inherits publicly from class Computer
class PaperDoll :public Computer{
public:
	string choice_2;
	static int i;
	PaperDoll();
	
};
#endif