//add include statements
#include "dna.h"
//add function(s) code here

int factorial(int num)
{
    auto sum = 1;
    for (int i = 1; i <= num; i++)
    {
        sum *= i; 
    }
    return sum;
}