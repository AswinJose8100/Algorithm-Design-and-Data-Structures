// ReduceMinimum.h
#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"
// A class inherits publicly from class ReduceGeneric
class ReduceMinimum : public ReduceGeneric{
public:
	virtual int binaryOperator(int,int);// returns the smaller value between the given 2 integer values
};
#endif // REDUCEMINIMUM_H