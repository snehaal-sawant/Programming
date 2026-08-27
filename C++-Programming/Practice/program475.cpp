#include <iostream>
using namespace std;

float Maximum(float No1, float No2)
{
   if(No1 > No2)
   {
      return No1;
   }
   else
   {
      return No2;
   }
}

int main()
{
   float Ret = 0;
   
   cout<<Maximum(21.5f,11.7f)<<endl;
   
   return 0;
}