#include "ReduceGeneric.h"

int ReduceGeneric::reduce(vector<int> a){
	if(a.size()>2){
		vector<int> vec_sub(a.begin()+1,a.end());
		return binaryOperator(a[0],reduce(vec_sub));
	}
	else if(a.size()==2){
		return binaryOperator(a[0],a[1]);
	}
	return -1;
}