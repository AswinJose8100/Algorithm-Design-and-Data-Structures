#include "Rearrange.h"
#include <iostream>

Individual Rearrange::mutate(Individual base, int k){
	string temp_str="";
	string str_old=base.getString();
	string str_new="";
	int num=0;
	if(k > base.getLength())
		k=k-base.getLength();
	k--;
	if(k>=0){
		num=base.getLength()-k;
		for(int j=0;j<num;j++){
			str_new+=str_old.at(k+j);
		}
		for(int j=0;j<base.getLength()-num;j++){
			temp_str+=str_old.at(j);
		}
		str_new +=temp_str;
		for(int j=0;j<base.getLength();j++){
			if(base.getBit(j)!=(str_new.at(j)-'0'))
				base.flipBit(j);

		}
	}
	return base;


}