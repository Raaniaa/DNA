#include "DNA.h"
#include "Sequence.h"
#include<iostream>
using namespace std;

DNA::DNA()
{
    type=noncoding;
    complementary_strand=NULL;
    startIndex=-1;
    startIndex=-1;
}

DNA::~DNA()
{
    //dtor
}
DNA::DNA(char * sequ, DNA_Type atype)
{
    seq=sequ;
    type=atype;
    BuildComplementaryStrand();
}
DNA::DNA(DNA& rhs)
{
    seq=rhs.seq;
    complementary_strand=rhs.complementary_strand;
    type=rhs.type;
    startIndex=rhs.startIndex;
    endIndex=rhs.endIndex;
}

void DNA::Print()
{
    cout<<"DNA Sequence: "<<seq<<endl;
    cout<<"complementary strand of DNA: "<<complementary_strand->seq<<endl;
    cout<<"DNA Type: "<<type<<endl;
}
void DNA::BuildComplementaryStrand()
{
    string container=seq,converted="";

    for(int k=0,i=container.length()-1; i>-1; k++,i--)
    {
        char x=seq[i];
        if (x=='T')
            x='A';
        if (x=='A')
            x='T';
        if (x=='C')
            x='G';
        if (x=='G')
            x='C';
        converted+=x;
    }
    cout<<"converted:"<<converted<<endl;
    char *strConverted=new char [converted.length()+1];
    for(unsigned int i=0; i<converted.length(); i++)
    {
        strConverted[i]=converted[i];
    }
    cout<<"strConverted:"<<strConverted<<endl;
    complementary_strand=new DNA();
    complementary_strand->seq=strConverted;
    complementary_strand->type=type;
}

RNA DNA::ConvertToRNA ()
{
    RNA objRNA;
    int sIndex,eIndex;
    cout<<"enter start Index: ";
    cin>>sIndex;
    cout<<"enter end index: ";
    cin>>eIndex;startIndex=0;
    string obj=seq;
    endIndex=obj.length()-1;
    if( sIndex>=0 && eIndex>=endIndex &&sIndex<eIndex )
    {
        startIndex=sIndex;
        endIndex=eIndex;
    }
    else if(sIndex==-1&& eIndex==-1)
    {}
    else
    {
        cout<<"you entered some index wrong !!\n";
        return objRNA;
    }
    string strandRNA="";
    for(int i=startIndex;i<=endIndex;i++)
    {
        char x=complementary_strand->seq[i];
        if(x=='T')
            x='U';
        strandRNA+=x;
    }
    char * charRNA=new char[strandRNA.length()+1];
    for(int i=0;i<strandRNA.length();i++)
    {
        charRNA[i]=strandRNA[i];
    }
    objRNA.seq=charRNA;
    return objRNA;
}
ostream&operator<< (ostream& out,DNA& obj)
{
    obj.Print();
    return out;
}
template <class myType>
myType convert (myType a, myType b) {
 return (a>b?a:b);
}

