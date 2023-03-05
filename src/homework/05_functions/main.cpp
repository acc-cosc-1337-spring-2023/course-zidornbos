#include <iostream>
#include "func.h"

using std::cout; using std::cin; using std::string;
/*
use a vector of int with values 8, 4, 20, 88, 66, 99

Prompt user for 1 for Get Max from vector and 2 for Get primes.
Prompt user for a number and return max value or list of primes
and display them to screen.
Program continues until user decides to exit.

*/
int main() 
{
	int select = 0;
	std::string dna;

	while (select != 3)
	{
		cout<<"Menu\n";
		cout<<"1- Get GC Content\n";
		cout<<"2- Get DNA Complement\n";
		cout<<"3- Exit\n";
		cout<<"Please make a selection\n";
		cin>>select;

		switch (select)
		{
		case 1:
			cout<<"Enter DNA string: ";
			cin>>dna;
			cout<<"GC Content: "<< get_gc_content(dna)<<"\n";
			break;
		case 2:
			cout<<"Enter DNA string: ";
			cin>>dna;
			cout<<"DNA Complement: "<< get_dna_complement(dna)<<"\n";
			break;
		case 3:
			cout<<"Goodbye"<<"\n";
			break;
		default:
			cout<<"Invalid Entry"<<"\n";
			break;
		}

	}
	return 0;
}