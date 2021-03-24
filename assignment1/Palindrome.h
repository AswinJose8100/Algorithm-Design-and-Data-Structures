#ifndef PALINDROME_H
#define PALINDROME_H
#include "string"



class Palindrome{
public:
	std::string phrase;
	Palindrome(std::string);
	void lowerCase();
	std::string isPalindrome(); 
};
#endif