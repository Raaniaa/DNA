#ifndef RNA_H_INCLUDED
#define RNA_H_INCLUDED
#include "Sequence.h"
#include "DNA.h"
#include<iostream>
//A DNA sequence can be converted to RNA sequence which is then converted to a Protein
//sequence. RNA results from one DNA strand. To convert a DNA strand to an RNA sequence,
//replace each T by U.
using namespace std;
class DNA;

enum RNA_Type {mRNA, pre_mRNA, mRNA_exon, mRNA_intron};

class RNA : public Sequence
{
    private:
        RNA_Type type;
    public:
        // constructors and destructor
        RNA();
        RNA(char * sequ, RNA_Type atype);
        RNA(RNA& rhs);
        ~RNA();
        // function to be overridden to print all the RNA information
        void Print();
        // function to convert the RNA sequence into protein sequence
        // using the codonsTable object
        //Protein ConvertToProtein(const CodonsTable & table);
        // function to convert the RNA sequence back to DNA
        DNA ConvertToDNA();
};



#endif // RNA_H_INCLUDED
