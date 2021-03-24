// ReduceGeneric.h
#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>
#include <iostream>

using namespace std;

class ReduceGeneric{
private:
	virtual int binaryOperator(int, int)=0;// A pure virtual function that specifies the operation needed to be mapped onto a list
public:
	int reduce(vector<int>);// It takes a vector as input and returns the integer value of result using recursion

};
#endif // REDUCEGENERIC_H
