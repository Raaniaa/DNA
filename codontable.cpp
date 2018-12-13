#include "CodonsTable.h"
#include<iostream>
using namespace std;
 //Protein sequence. Each 3 characters of the
//RNA sequence, called a codon, can be converted/mapped into one Protein character
CodonsTable::CodonsTable()
{
    type=coding;
}

CodonsTable::~CodonsTable()
{
    //dtor
}
    // function to load all codons from the given text file
void LoadCodonsFromFile(string codonsFileName){
ifstream infile;
    infile.open ("codon.txt");
    if(infile.fail()){
                  cout <<"error.\n";
    }
    else{
         string temp;
         while (!infile.eof()){
              getline(infile,temp);
              DNA.DNA_file.append(temp);
              DNA.DNA_file.substr(0,3);
        }
        cout << DNA.DNA_file<<" " <<endl;
        cout<<DNA.DNA_file.size();
        cout<<endl;
        DNA.transcript(DNA.DNA_file);
        infile.close(); //closes file
}
    system("PAUSE");
    return 0;
}
 //Protein sequence. Each 3 characters of the
//RNA sequence, called a codon, can be converted/mapped into one Protein character
 void setCodon(char * value, char AminoAcid, int index){
string codons[64] = {"UUU","UUC","UUA","UUG","UCU","UCC","UCA","UCG","UAU","UAC","UAA","UAG","UGU","UGC","UGA","UGG",
						 "CUU","CUC","CUA","CUG","CCU","CCC","CCA","CCG","CAU","CAC","CAA","CAG","CGU","CGC","CGA","CGG",
						 "AUU","AUC","AUA","AUG","ACU","ACC","ACA","ACG","AAU","AAC","AAA","AAG","AGU","AGC","AGA","AGG",
						 "GUU","GUC","GUA","GUG","GCU","GCC","GCA","GCG","GAU","GAC","GAA","GAG","GGU","GGC","GGA","GGG"};
	string aminoAcids[64]={"Phenylalanine","Phenylalanine","Leucine","Leucine", "Serine","Serine","Serine","Serine","Tyrosine","Tyrosine", "Stop","Stop", "Cysteine","Cysteine","Stop", "Tryptophan",
						   "Leucine","Leucine","Leucine","Leucine","Proline","Proline","Proline","Proline","Histidine","Histidine","Glutamine","Glutamine","Arginine","Arginine","Arginine","Arginine",
						   "Isoleucine","Isoleucine","Isoleucine","Methionine","Threonine","Threonine","Threonine","Threonine","Asparagine","Asparagine","Lysine","Lysine","Serineine","Serineine","Arginine","Arginine",
							"Valine","Valine","Valine","Valine","Alanine","Alanine","Alanine","Alanine","Aspartate","Aspartate","Glutamate","Glutamate","Glycine","Glycine","Glycine","Glycine"};
	string codon=" ";
	string protein=" ";
	string RNA;
	cout<<"   To begin translation    "<<endl;
	cout<<"Please enter RNA sequence: "<<endl;
	cin>>RNA;
	cout<<endl;
	rnaLength=RNA.length();
	for(int i=0; i<RNA.length(); i+=3){

    cout<<RNA[i];
	if(i+1 < RNA.length())
        cout<<RNA[i+1];
	if(i+2 < RNA.length())
        cout<<RNA[i+2];
		cout<<" ";
 //Protein sequence. Each 3 characters of the
//RNA sequence, called a codon, can be converted/mapped into one Protein character
void AminoAcid::transcript(string& DNA){
    int changeT;
    changeT = DNA.find("T");
    cout << DNA << "\n" << endl;
        while (changeT > 0){
            DNA.replace(changeT, 1, "U");
            changeT = DNA.find("T");
        }
       RNA=DNA;
       cout << RNA << endl;
}
template <class myType>
myType convet (myType a, myType b) {
 return (a>b?a:b);
}
