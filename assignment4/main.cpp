#include <iostream>
#include "Reverse.h"
#include "Fibonacci.h"
#include "EfficientFibonacci.h"
#include "string"
#include <sstream>
using namespace std;

int main(){
	string user_input; // Variable to store the user input
	getline(cin,user_input);
	string word_array[4]; // The string array that stores each string after splitting the user input where ever there is a " " 
	int counter=0;
	istringstream iss(user_input);
 
    while (iss) {
       
        iss >> word_array[counter];
        counter++;


    }
    Reverse r;
    Fibonacci f1;
    EfficientFibonacci f2;
    stringstream geek_1(word_array[0]);
    int reverse_no=0;
    geek_1 >> reverse_no; // Converting string to integer
    stringstream geek_2(word_array[2]);
    int fibonacci_1=0;
    geek_2 >> fibonacci_1; // Converting string to integer
    stringstream geek_3(word_array[3]);
    int fibonacci_2=0;
    geek_3 >> fibonacci_2; // Converting string to integer
    int wrong_input_1=r.reverseDigit(reverse_no);
    int wrong_input_2=f1.return_Fibonacci(fibonacci_1);
    int wrong_input_3=f2.return_EfficientFibonacci(fibonacci_2);
    string conversion_1=to_string(wrong_input_1); // Converting integer to string
    string conversion_2=to_string(wrong_input_2); // Converting integer to string
    string conversion_3=to_string(wrong_input_3); // Converting integer to string
    if(wrong_input_1==0){
    	conversion_1="ERROR";
    }
    if(wrong_input_2==0){
    	conversion_2="ERROR";
    }
    if(wrong_input_3==0){
        conversion_3="ERROR";
    }
    if(wrong_input_1==1)
        conversion_1="1";
    if(wrong_input_2==1)
        conversion_2="1";
    if(wrong_input_3==1)
        conversion_3="1";
    if(wrong_input_1==2)
        conversion_1="0";
    if(wrong_input_2==2)
        conversion_2="0";
    if(wrong_input_3==2)
        conversion_3="0";
    cout<<conversion_1<<" "<<r.reverseString(word_array[1])<<" "<<conversion_2<<" "<<conversion_3<<"\n"; 

    	
}

