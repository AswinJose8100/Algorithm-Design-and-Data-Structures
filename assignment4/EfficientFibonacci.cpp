#include <iostream>
#include "EfficientFibonacci.h"

EfficientFibonacci::EfficientFibonacci(){

}
int EfficientFibonacci::return_EfficientFibonacci(int n){
    int storedValues[1000];
    int answer;
    if(n>0){
     for(int i=0;i<1000;i++){
       storedValues[i]=-1;   
      }
      if(storedValues[n]!=-1){
       return storedValues[n];
      } 
      else
      {
        answer = return_EfficientFibonacci(n - 1) + return_EfficientFibonacci(n - 2);
        storedValues[n]=answer;
        return answer;
      }
    
    }
    else if(n == 0)
    {
        return 2;
    }
    else if(n == 1)
    {
        return 1;
    }
    else
      return 0;
    
}