// MapGeneric.h
#ifndef MAPGENERIC_H
#define MAPGENERIC_H

#include <vector>
#include <iostream>
#include <math.h>

using namespace std;

class MapGeneric{
private:
	virtual int f(int)=0;// A pure virtual function that specifies the operation needed to be mapped onto a list
public:
	vector<int> map(vector<int>);// It returns the resulting vector after mapping and is called recursively

};
#endif // MAPGENERIC_H