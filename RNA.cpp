#include "RNA.h"
#include "Sequence.h"
#include<iostream>
using namespace std;
//A DNA sequence can be converted to RNA sequence which is then converted to a Protein
//sequence. RNA results from one DNA strand. To convert a DNA strand to an RNA sequence,
//replace each T by U.
RNA::RNA()
{
    type=mRNA;
}

RNA::RNA(char * sequ, RNA_Type atype)
{
    type=atype;
    seq=sequ;
}
RNA::RNA(RNA& rhs)
{
    type=rhs.type;
    seq=rhs.seq;
}

RNA::~RNA()
{
    //dtor
}
// function to be overridden to print all the RNA information
void RNA::Print()
{
  cout<<"DNA Sequence: "<<seq<<endl;
    cout<<" RNA : "<<RNA->seq<<endl;
    cout<<"RNA Type: "<<type<<endl;
}
template <class myType>
myType convert (myType a, myType b) {
 return (a>b?a:b);
}

