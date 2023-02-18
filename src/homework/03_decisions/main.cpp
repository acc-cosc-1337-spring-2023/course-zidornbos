//write include statements
#include<iostream>
#include "decisions.h"

using std::cout; using std::cin; using std::string;

int main() 
{
	int option, grade;
	string letter_grade;

	cout << "Main Menu\n";
	cout << "1-Letter grade using if\n";
	cout << "2-Letter grade using switch\n";
	cout << "3-Exit\n";
	cout << "Enter your selection: ";
	cin >> option;

	if (option == 1 || option == 2)
	{
		cout << "Enter numerical grade (0-100): ";
		cin >> grade;
	}
	
	switch (option)
	{
		case 1:
			letter_grade = get_letter_grade_using_if(grade);
			cout << "Letter grade: " << letter_grade << "\n";
			break;
		case 2:
			letter_grade = get_letter_grade_using_switch(grade);
			cout << "Letter grade: " << letter_grade << "\n";
			break;
		case 3:
			cout << "Exiting program\n";
			break;
		default:
			cout << "Invalid selection, please try again.\n";
	}
	return 0;

	}
