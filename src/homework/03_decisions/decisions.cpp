//write include statement for decisions header
#include "decisions.h"

using std::string;
//Write code for function(s) code here

string get_letter_grade_using_if(int grade)
{
    string result;

    if(grade >= 90 && grade <= 100)
    {
        result = 'A';
    }
    else if(grade >= 80 && grade <= 89)
    {
        result = 'B';
    }
    else if(grade >= 70 && grade <= 79)
    {
        result = 'C';
    }
    else if(grade >= 60 && grade <= 69)
    {
        result = 'D';
    }
    else if(grade >= 00 && grade <= 59)
    {
        result = 'F';
    }
    else
    {
        result = "Out of Range";
    }

    return result;
}


string get_letter_grade_using_switch(int grade)
{
    string letter_grade;

    switch(grade / 10)
    {
        case 10:

        case 9:
            letter_grade = "A";
            break;
        case 8:
            letter_grade = "B";
            break;
        case 7:
            letter_grade = "C";
            break;
        case 6:
            letter_grade = "D";
            break;
        default:
            letter_grade = "F";
            break;
                    
    }

    return letter_grade;
}