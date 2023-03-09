//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout

using std::cout;
using std::cin;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	int num;
	cout << "Enter a number: " <<"\n";
	cin >> num;
	cout << multiply_numbers(num)<<"\n";
	
	int num1 = 4;
	int result = multiply_numbers(num1);
	cout << "Results: " << result<<"\n";

	return 0;
}
