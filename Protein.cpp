#include "Protein.h"
#include<iostream>
using namespace std;

Protein::Protein()
{
     type=Hormon;
    startIndex=-1;
    startIndex=-1;
    //ctor
}

Protein::~Protein()
{
    //dtor
}
DNA* GetDNAStrandsEncodingMe(const DNA & bigDNA){
string protein = "";
    int firstBase, secondBase, thirdBase;

    for(int i = 0; i < newSequence.length() - 2; i+3)
    {
        if(newSequence[i] == 'A')
        {
            firstBase = 0;
        }
        else if(newSequence[i] == 'C')
        {
            firstBase = 1;
        }
        else if(newSequence[i] == 'G')
        {
            firstBase = 2;
        }
        else if(newSequence[i] == 'U')
        {
            firstBase = 3;
        }

        if(newSequence[i+1] == 'A')
        {
            secondBase = 0;
        }
        else if(newSequence[i+1] == 'C')
        {
            secondBase = 1;
        }
        else if(newSequence[i+1] == 'G')
        {
            secondBase = 2;
        }
        else if(newSequence[i+1] == 'U')
        {
            secondBase = 3;
        }

        if(newSequence[i+2] == 'A')
        {
            thirdBase = 0;
        }
        else if(newSequence[i+2] == 'C')
        {
            thirdBase = 1;
        }
        else if(newSequence[i+2] == 'G')
        {
            thirdBase = 2;
        }
        else if(newSequence[i+2] == 'U')
        {
            thirdBase = 3;
        }

        bool readSequence = true;
        if (aminoAcid[firstBase][secondBase][thirdBase] == aminoAcid[0][3][2])
        {
            readSequence = true;
        }
        else if (aminoAcid[firstBase][secondBase][thirdBase] == aminoAcid[3][0][0] ||
        aminoAcid[firstBase][secondBase][thirdBase] == aminoAcid[3][0][2] ||
        aminoAcid[firstBase][secondBase][thirdBase] == aminoAcid[3][2][0])
        {
            readSequence = false;
        }


        if(readSequence)
        {
            protein = protein + aminoAcid[firstBase][secondBase][thirdBase] + " ";
        }
        else
        {
            continue;
        }
    }

    return protein;
}
