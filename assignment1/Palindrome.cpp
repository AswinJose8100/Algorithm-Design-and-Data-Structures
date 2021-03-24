#include <iostream>
#include "Palindrome.h"

using namespace std;

Palindrome::Palindrome(string line){
	for(string::iterator i = line.begin(); i!=line.end();i++){
		if(!isalpha(line.at(i-line.begin()))){ // Checks if the character is non alphabetic character
			line.erase(i); // Erasing the non alphabetic character from the entered string
		    i--;
		}
	}
	phrase=line;	    
}


void Palindrome::lowerCase(){
	int length=phrase.length(); // Length of the string entered 
	for(int i=0;i<length;i++){
		if(isupper(phrase[i])){ // Checks if the character is an uppercase character
			phrase[i] = tolower(phrase[i]); // Converting the uppercase charcter to a lower case one
		   
		}
	}
	

}
string Palindrome::isPalindrome(){
	int flag=0;
	string result;
	int length=phrase.length();
	for(int i=0;i<(length/2);i++){
		if(phrase[i] != phrase[(length-1)-i]){ // Checking if the entered string is a palindrome
			flag=1;
		    break;


	    }
    }
    if(flag==0){
    	result="Yes";
    	return result;
    }
    else{
    	result="No";
    	return result;
    }

}
