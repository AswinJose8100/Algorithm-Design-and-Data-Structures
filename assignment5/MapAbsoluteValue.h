// MapAbsoluteValue.h
#ifndef MAPABSOLUTEVALUE_H
#define MAPABSOLUTEVALUE_H
#include "MapGeneric.h"
// A class inherits publicly from class MapGeneric
class MapAbsoluteValue : public MapGeneric{
public:
	virtual int f(int);// returns the absolute value of a number given as input
};
#endif // MAPABSOLUTEVALUE_H