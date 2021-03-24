// BitFlipProb.h
#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"
// A class inherits publicly from class Mutator
class BitFlipProb : public Mutator{
private:
	double p;
public:
	BitFlipProb();
	Individual mutate(Individual base,int k);//goes through every digit in the bi- nary string and “flips” each of the binary digit with probability p
};
#endif // BITFLIPPROB_H