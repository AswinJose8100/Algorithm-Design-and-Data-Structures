// FilterGeneric.h
#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

using namespace std;

class FilterGeneric{
private:
	virtual bool g(int)=0;// A pure virtual function that specifies the operation needed to be mapped onto a list
public:
	vector<int> filter(vector<int>);// returns a vector after filtering recursively

};
#endif // FILTERGENERIC_H
