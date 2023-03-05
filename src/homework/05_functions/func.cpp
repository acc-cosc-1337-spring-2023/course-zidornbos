//add include statements
#include "func.h"

using std::string;

//add function code here
double get_gc_content(const std::string& dna)
{
    double gc_count = 0;
    double total_count = 0;
    for (char c : dna)
    {
        if(c == 'G'||c == 'C')
        {
            gc_count++;
        }
        total_count++;
    }
    return gc_count / total_count;
}

std::string get_reverse_string(std::string dna)
{
    int i = 0;
    int j = dna.length() - 1;
    while(i < j)
    {
        char temp = dna[i];
        dna[i] = dna[j];
        dna[j] = temp;
        i++;
        j--;
    }


    return dna;
}

std::string get_dna_complement(std::string dna)
{    
    int i = 0;
    int j = dna.length() - 1;
    while(i < j)
    {
        char temp = dna[i];
        dna[i] = dna[j];
        dna[j] = temp;
        i++;
        j--;
    }
    
    for (char& c : dna)
    {
        switch(c)
        {
            case 'A' : c = 'T'; break;
            case 'T' : c = 'A'; break;
            case 'C' : c = 'G'; break;
            case 'G' : c = 'C'; break;
            default: break;
        }
        
    }
    return dna;
}
