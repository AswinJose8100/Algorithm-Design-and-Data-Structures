// MapSquare.h
#ifndef MAPSQUARE_H
#define MAPSQUARE_H
#include "MapGeneric.h"
// A class inherits publicly from class MapGeneric
class MapSquare : public MapGeneric{
public:
	virtual int f(int);// returns the square of the number given as input
};
#endif // MAPSQUARE_H