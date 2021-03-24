#include <iostream>
#include <string>
#include "Palindrome.h"



int main(){
	std::string phrase;
	getline(std::cin,phrase);
	Palindrome p(phrase);
	p.lowerCase();
	std::string result=p.isPalindrome();
	std::cout<<result<<"\n";


}