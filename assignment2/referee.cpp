#include <iostream>
#include "referee.h"

referee::referee(string humanschoice,string computerschoice){

  int length=humanschoice.length(); // the length of the choice entered by player
  char c;
  for(int i=0;i<length;i++){
    if(isalpha(humanschoice[i])){// determines if  the character is an alphabet
      if(humanschoice[i]=='R'){ // checks if the character entered by player represents rock
        c='T';
        result+=c;// result adds the final outcome of each trial in the game
      }

      if(humanschoice[i]=='P'){// checks if the character entered by player represents paper
        c='W';
        result+=c;
      }
      if(humanschoice[i]=='S'){ // checks if the character entered by player represents scissors
        c='L';
        result+=c;
      }
    }

  }
for(int i=0;i<result.length();i++){
  cout<<result[i]<<" ";// printing out final result after playing the number of games specified by player
}
}
