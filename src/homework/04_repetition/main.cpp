//write include statements
#include<iostream>
#include"dna.h"

//write using statements
using std::cout; using std::cin; using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	int option;

	cout << "Please make a selection\n";
	cout << "1-Factorial\n";
	cout << "2-Greatest Common Divisor\n";
	cout << "3-Exit\n";
	cin >> option;


	return 0;
}