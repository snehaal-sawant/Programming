#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{  
   public: 
      int *Arr;
      int iSize;

      //Parametarized constructor
      ArrayX(int x)
      {
         iSize = x;
         Arr = new int[iSize];
      }
      ~ArrayX()
      {
         cout << "Inside Destructor"<< endl;
         delete []Arr;
      }
};

int main()
{
   //Static memory allocation for object
   //ArrayX aobj1(5);      
    
   ArrayX *aobj1 = new ArrayX(5);    /// dynamic object  
           
   delete(aobj1);    //desturctor gets called
   
   return 0;
}