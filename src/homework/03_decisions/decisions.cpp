//write include statement for decisions header
#include "decisions.h"

using std::string;
//Write code for function(s) code here

string get_letter_grade_using_if(int grade)
{
    if(grade >= 90 && grade <= 100)
    {
        return "A";
    }
    else if(grade >= 80 && grade <= 89)
    {
        return "B";
    }
    else if(grade >= 70 && grade <= 79)
    {
        return "C";
    }
    else if(grade >= 60 && grade <= 69)
    {
        return "D";
    }
    else if(grade >= 00 && grade <= 59)
    {
        return "F";
    }
    else
    {
        return "Out of Range";
    }

}


string get_letter_grade_using_switch(int grade)
{
    int grade_range = grade / 10;

    switch(grade_range)
    {
        case 10:

        case 9:
            return "A";
            break;
        case 8:
            return "B";
            break;
        case 7:
            return "C";
            break;
        case 6:
            return "D";
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            return "F";
            break;
        default:
            if (grade >= 101 || grade < 0)
            {
                return "Out of range";
            }
            else
            {
                return "Invalid Entry";
            }
                    
    }

}