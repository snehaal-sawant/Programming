#include<iostream>
using namespace std;

class ArrayX
{  
   public: 
      int *Arr;
      int iSize;
};

int main()
{
   ArrayX aobj;

   cout<<sizeof(aobj)<<endl;  //16 bytes - padding used, as pointer size is 8 bytes
   
   return 0;
}