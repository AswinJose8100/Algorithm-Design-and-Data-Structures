// FilterNonPositive.h
#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"
// A class inherits publicly from class FilterGeneric
class FilterNonPositive : public FilterGeneric{
public:
	virtual bool g(int);// returns true if and only if the given value is not positive
};
#endif // FILTERNONPOSITIVE_H