// ReduceGCD.h
#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"
// A class inherits publicly from class ReduceGeneric
class ReduceGCD : public ReduceGeneric{
public:
	virtual int binaryOperator(int,int);// returns the Greatest Common Divisor value between the given 2 integer values recursively
};
#endif // REDUCEGCD_H