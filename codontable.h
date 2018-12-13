#ifndef CODONTABLE_H_INCLUDED
#define CODONTABLE_H_INCLUDED
#include<iostream>
using namespace std;

// struct representing a codon of 3 DNA/RNA characters and �\0�
struct Codon
{
    char value[4];    	    // 4th location for null character
    char AminoAcid;  	    // corresponding AminoAcid according to Table
};

// need to create one object of that class to load the AminoAcids table
// into memory
class CodonsTable
{
    private:
        Codon codons[64];
    public:
        // constructors and destructor
        CodonsTable();
        ~CodonsTable();
        // function to load all codons from the given text file
        void LoadCodonsFromFile(string codonsFileName);
        Codon getAminoAcid(char * value);
        void setCodon(char * value, char AminoAcid, int index);
        template <class myType>
myType convert (myType a, myType b) {
 return (a>b?a:b);
}
};




#endif // CODONTABLE_H_INCLUDED
