#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{  
   private: 
      int *Arr;
      int iSize;

   public:

      //Parameterized constructor with default argument
      ArrayX(int x = 5)
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
   ArrayX *aobj1 = new ArrayX();          //Parametarized Constructor Called
   ArrayX *aobj2 = new ArrayX(15);         //Parametarized Constructor Called

   delete aobj1;
   delete aobj2;

   return 0;
}