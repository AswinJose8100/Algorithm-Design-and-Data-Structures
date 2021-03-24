// FilterForTwoDigitPositive.h
#ifndef FILTERFORTWODIGITPOSITIVE_H
#define FILTERFORTWODIGITPOSITIVE_H
#include "FilterGeneric.h"
// A class inherits publicly from class FilterGeneric
class FilterForTwoDigitPositive : public FilterGeneric{
public:
	virtual bool g(int);// returns true if and only if the given value is a 2 digit positive number
};
#endif // FILTERFORTWODIGITPOSITIVE_H