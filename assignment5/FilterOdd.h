// FilterOdd.h
#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"
// A class inherits publicly from class FilterGeneric
class FilterOdd : public FilterGeneric{
public:
	virtual bool g(int);// returns true if and only if the given value is an odd value
};
#endif // FILTERODD_H