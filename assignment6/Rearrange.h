// Rearrange.h
#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"
// A class inherits publicly from class Mutator
class Rearrange : public Mutator{
public:
	Individual mutate(Individual base, int k);// function rearranges the list. The function will select the k-th digit in the bitstring (again, counting in circles). This digit and all digits after it (all the way to the tail) will be moved to the start of the list.
};
#endif // REARRANGE_H
