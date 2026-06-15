#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{  
   public: 
      int *Arr;
      int iSize;

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

   cout<<aobj1->iSize<<endl;

   aobj1->iSize = 0;    //Issue - Its declared as public so can be accessed anywhere 
   aobj1->Arr = NULL;   // and values can be changed which is not good.
   
   delete(aobj1);

   return 0;
}