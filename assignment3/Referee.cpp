#include <iostream>
#include "Referee.h"


Referee::Referee(string choice_1,string choice_2){
  choice1=choice_1;
  choice2=choice_2;
  counter1=0;
  counter2=0;
}
string Referee::checking(){
 for(int i=0;i<5;i++){

  if(choice1=="rock"){
    if(choice2=="paper")
      counter2++;
    else if(choice2=="scissors")
      counter1++;
  }
  if(choice1=="paper"){
    if (choice2=="rock")
      counter1++
    else if (choice2=="scissors")
      counter2++;
  }
  if(choice1=="scissors"){
    if (choice2=="paper")
      counter1++;
    else if (choice2=="rock")
      counter2++;
  }

}
if(counter1>counter2)
  return choice1;
else if(counter2>counter1)
  return choice2;
else
  return choice2;

  }