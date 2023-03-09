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
	int selection;
    do
    {
    cout << "Main Menu\n";
	cout << "1-Factorial\n";
	cout << "2-Greatest Common Divisor\n";
	cout << "3-Exit\n";
    cout << "Make your selection: \n";
    cin >> selection;

    switch(selection)
    {
        case 1:
        {
            int num;
            cout << "Enter an integer to find its factorial: \n";
            cin >> num;
            cout << "Factorial of " << num << " is " << factorial(num) << "\n";
            break;
        }
        case 2:
        {
            int num1, num2;
            cout << "Enter two integers to find their greatest common divisor: \n";
            cin >> num1 >> num2;
            cout << "Greatest common divisor of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << "\n";
            break;
        }
        case 3:
        {
            char confirm;
            cout << "Are you sure you want to exit? (y/n): ";
            cin >> confirm;
            if (confirm == 'y' || confirm == 'Y')
            {
                cout << "Goodbye\n";
                return 0;
            }
            break;
        }
        default:
            cout << "Invalid selection \n";
    }
}
    while (true);

    return 0;
    
}


