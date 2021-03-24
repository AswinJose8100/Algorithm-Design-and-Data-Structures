// Mutator.h
#ifndef MUTATOR_H
#define MUTATOR_H
#include <string>

#include "Individual.h"

class Mutator{
public:
    // takes in an Individual and an integer index k as parameter and returns the offspring after mutation
	virtual Individual mutate(Individual base, int k);
};
#endif // MUTATOR_H