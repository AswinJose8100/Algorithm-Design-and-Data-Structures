#include <iostream>
#include "string"
#include "Computer.h"
#include "RandomComputer.h"
#include "Avalanche.h"
#include "Bureaucrat.h"
#include "Toolbox.h"
#include "Crescendo.h"
#include "PaperDoll.h"
#include "FistfullODollars.h"
#include "Referee.h"
#include "Tournamaent.h"
#include "Human.h"
#include <sstream>
 
int main(){
	string user_input;
	getline(cin,user_input);
	string word_array[8];
	int counter=0;
	istringstream iss(user_input);
 
    while (iss) {
       
        iss >> word_array[counter];
        counter++;


    }

    
    Tournament t(word_array);

}