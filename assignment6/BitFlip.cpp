#include <iostream>
#include "BitFlip.h"

using namespace std;

Individual BitFlip::mutate(Individual base, int k){
	if(k > base.getLength())
		k=k-base.getLength();
	k--;
	base.flipBit(k);
	return base;
}
