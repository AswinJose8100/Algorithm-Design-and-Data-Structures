// MapTriple.h
#ifndef MAPTRIPLE_H
#define MAPTRIPLE_H
#include "MapGeneric.h"

// A class inherits publicly from class MapGeneric
class MapTriple : public MapGeneric{
public:
	virtual int f(int);// returns 3 times the number given as input
};
#endif // MAPTRIPLE_H