#include <iostream>
#include "Fibonacci.h"

Fibonacci::Fibonacci(){

}
int Fibonacci::return_Fibonacci(int n){
     if (n == 0)
    {
        return 2;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if(n<0){
        return 0;
    }
    else
    {
        return(return_Fibonacci(n - 1) + return_Fibonacci(n - 2));
    }
    
}