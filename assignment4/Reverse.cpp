#include "Reverse.h"
#include <iostream>

Reverse::Reverse(){
	number=0;
	
}
int Reverse::reverseDigit(int value){
   int num;
   int remainder;
   if(value>0){
     remainder=value%10;
		 number=number*10+remainder;
		 reverseDigit(value/10);
   }
	 else if(value==1)
		return 1;
   else if(value==0)
    return 2;
   else
    return 0;
	 return number;
	}
	


string Reverse::reverseString(string letters){
   if(letters.size() == 1){
      return letters;
   }
   else if(letters.size()==0){
   	return "ERROR";
   }
   else
   {
      return (letters[letters.size()-1]+reverseString(letters.substr(0,letters.size() - 1)));
   }
}