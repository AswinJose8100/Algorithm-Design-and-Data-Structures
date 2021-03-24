// including all files and headers
#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"
#include <iostream>
using namespace std;

// calls the mutate function on the Individual object and returns the offspring.
Individual* execute(Individual* indPtr, Mutator* mPtr, int k);
int main(){
	unsigned int j=0;
	string str1_bi="";
	int val_k1=0,val_k2=0;
	string str2_bi="";
	string usr_input;
	// user input is being stored
	getline(cin, usr_input);
	
    // Checking whether there are spaces in the user input.
	while(isspace(usr_input.at(j))==0){
		str1_bi+=usr_input.at(j);
		j++;
	}
	j++;

	while(isspace(usr_input.at(j))==0){
		val_k1=val_k1*10;
		val_k1=val_k1+usr_input.at(j)-'0';
		j++;
	}
	j++;
	while(isspace(usr_input.at(j))==0){
		str2_bi+=usr_input.at(j);
		j++;
	}
	j++;

	while(j<usr_input.size() && isspace(usr_input.at(j))==0){
		val_k2=val_k2*10;
		val_k2=val_k2+usr_input.at(j)-'0';
		j++;
	}
	// creating individual objects
	Individual James(str1_bi);
	Individual* JamesPtr=&James;
	Individual Alice(str2_bi);
	Individual* AlicePtr=&Alice;
	BitFlip fbit;
	BitFlip* fbitPtr=&fbit;
	Rearrange r;
	Rearrange* rPtr=&r;
	execute(JamesPtr,fbitPtr,val_k1);
	cout<<JamesPtr->getString();
	execute(AlicePtr,rPtr,val_k2);
	cout<<" "<<AlicePtr->getString();
	cout<<" "<<AlicePtr->getMaxOnes()<<"\n";
	return 0;

}
Individual* execute(Individual* indPtr, Mutator* mPtr, int k){
	*indPtr=mPtr->mutate(*indPtr,k);
	return indPtr;
}