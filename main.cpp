#include "Sequence.h"
#include <iostream>
using namespace std;

Sequence::Sequence()
{
    seq=NULL;
}
Sequence::Sequence(int length)
{
    seq=new char[length];
}
Sequence::Sequence(Sequence& rhs)
{
    this->seq=rhs.seq;
}
Sequence::~Sequence()
{
    seq=NULL;
}
main(){
   try {
      z = convertRna();
      cout << z << endl;
   } catch (const char* msg) {
     cerr << DNA << endl;
   }

   return 0;
}
