#include <iostream>
using namespace std;

template <class X>                  //Replace T with X -- As we can use any name in place of T
X Maximum(X No1, X No2, X No3)
{
   if(No1 > No2 && No1 > No3)
   {
      return No1;
   }
   else if(No2 > No1 && No2 > No3)
   {
      return No2;
   }
   else
   {
      return No3;
   }

   return Ans;
}

int main()
{   
   cout<<Maximum(21.2f,11.5f)<<endl;
   cout<<Maximum(21.2,11.5)<<endl;
   cout<<Maximum(21,11)<<endl;
   
   return 0;
}