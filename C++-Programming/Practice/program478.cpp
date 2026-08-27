#include <iostream>
using namespace std;

template <class T>
T Maximum(T No1, T No2)
{
   T Ans;

   (No1 > No2) ? Ans = No1 : Ans = No2;            //Ternary Operator

   return Ans;
}

int main()
{   
   cout<<Maximum(21.2f,11.5f)<<endl;
   cout<<Maximum(21.2,11.5)<<endl;
   cout<<Maximum(21,11)<<endl;
   
   return 0;
}