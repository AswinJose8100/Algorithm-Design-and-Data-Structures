#include "BitFlipProb.h"

BitFlipProb::BitFlipProb(){
	p=0;
}
Individual BitFlipProb::mutate(Individual base, int k){
	p=1/(base.getLength());
	if(k > base.getLength())
		k=k-base.getLength();
	k--;
	for(int j=0;j<base.getLength();j++){
		if(p==0){
			if(((double)base.getBit(j)) == p)
				base.flipBit(j);	
		}
		else if(p==1){
			if(((double)base.getBit(j)) == p)
				base.flipBit(j);
		}
	}
	return base;
}