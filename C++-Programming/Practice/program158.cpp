#include<iostream>
using namespace std;

#pragma pack(1)
class ArrayX
{  
   public: 
      int *Arr;
      int iSize;

      //Parameterised Constructor
      ArrayX(int X)
      {
         cout<<"Inside constructor"<<endl;

         iSize = X;               //characteristics initialization
         Arr = new int[iSize];   //Resourse allocation (memory allocation)
      }

      //Destructor
      ~ArrayX()
      {
         cout<<"Inside destructor"<<endl;;
         delete []Arr;           //Resource Deallocation.
      }
};

int main()
{
   ArrayX aobj1;     //will call default constructor
   ArrayX aobj2(5);  //Will ddd  call parameterized constructor
        
   cout<<sizeof(aobj1)<<endl;  
   
   return 0;
}