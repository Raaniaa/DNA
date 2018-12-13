#ifndef SEQUENCE_H_INCLUDED
#define SEQUENCE_H_INCLUDED
#include<iostream>
using namespace std;
// The biological data can be divided into 3 types of sequences:
//DNA, RNA, and Protein.
class Sequence
{
    protected:
    public:
        // constructors and destructor
        char *seq;
        //default construct
        Sequence();
        Sequence(int length);
        Sequence(Sequence& rhs);
        virtual ~Sequence();
        // pure virtual function that should be overridden because every
        // type of sequence has its own details to be printed
        virtual void Print()= 0;
        // friend function that will find the LCS (longest common
        // subsequence) between 2 sequences of any type, according to
        // polymorphism
        friend char* Align(Sequence * s1, Sequence * s2);
};

#endif // SEQUENCE_H_INCLUDED
