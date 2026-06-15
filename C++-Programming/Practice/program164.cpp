#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{  
   private: 
      int *Arr;
      int iSize;

   public:
      ArrayX(int x)
      {
         iSize = x;
         Arr = new int[iSize];
      }
      ~ArrayX()
      {
         delete []Arr;
      }
};

int main()
{
   ArrayX *aobj1 = new ArrayX(5);

   cout<<aobj1->iSize<<endl;  // Error: iSize is private

   aobj1->iSize = 0;    //Error - Its declared as private so can't be accessed here
   aobj1->Arr = NULL;   //Error - Its declared as private so can't be accessed here 
   
   delete aobj1;

   return 0;
}