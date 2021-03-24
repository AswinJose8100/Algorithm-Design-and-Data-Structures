// BitFlip.h
#ifndef BITFLIP_H
#define BITFLIP_H
#include "Mutator.h"
// class inherits publically from Mutator
class BitFlip : public Mutator{
public:
	Individual mutate(Individual base,int k);// function in this class “flips” the k-th binary digit. If k is greater than the length of the list, we will count in circles.
};
#endif // BITFLIP_H