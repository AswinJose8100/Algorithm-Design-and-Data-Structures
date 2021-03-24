// Individual.h
#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H
#include <string>
#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

class Individual{
private:
	vector<string> binaryString_vec;// stores the value of the genes
public:
	string binaryString; 
	string getString();
	int getBit(int pos);// The function returns the bit value at position pos. It should return -1 if pos is out of bound
	void flipBit(int pos);// The function takes in the position of the certain bit and flip the bit value.
	int getMaxOnes();// The function returns the longest consecutive sequence of ‘1’ digits in the list
	int getLength();//The function returns the length of the list.
	Individual(int length);
	Individual(string binaryString);
};
#endif // INDIVIDUAL_H