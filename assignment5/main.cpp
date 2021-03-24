#include <iostream>
#include <vector>
#include "MapGeneric.h"
#include "MapTriple.h"
#include "MapSquare.h"
#include "MapAbsoluteValue.h"
#include "FilterGeneric.h"
#include "FilterOdd.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterNonPositive.h"
#include "ReduceGeneric.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"

#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int main(){
	// user input is taken using getline and then is parsed into 20 integers
	// The 20 integers is then pushed back into a vector and finally mapping is done
	vector<int> vec1;
	string user_input;
	getline(cin, user_input);
	istringstream ss(user_input);
	string substring;
	vector<string> vec2;
	while(ss >> substring){
		vec2.push_back(substring);
	}
	for(unsigned int j=0;j<vec2.size();j++){
		int k=stoi(vec2.at(j));
		vec1.push_back(k);
	}
	// Creating Objects for the classes
	MapAbsoluteValue abs;
	MapTriple maptriple;
	FilterOdd oddno;
	FilterForTwoDigitPositive filtertdp;
	ReduceMinimum minimumval;
	ReduceGCD gcd;


    vec1=abs.map(vec1);
	vec1=maptriple.map(vec1);
	vec1=filtertdp.filter(vec1);
	vec1=oddno.filter(vec1);
    int min=minimumval.reduce(vec1);
    int gcd_value=gcd.reduce(vec1);
    cout<<min<<" "<<gcd_value<<endl;

    return 0;
 

}