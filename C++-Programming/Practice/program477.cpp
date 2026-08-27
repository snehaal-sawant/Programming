#include <iostream>
using namespace std;

int Maximum(int No1, int No2)
{
   float Ans;

   (No1 > No2) ? Ans = No1 : Ans = No2;            //Ternary Operator

   return Ans;
}

int main()
{
   int Ret = 0;
   
   cout<<Maximum(21.f,11.f)<<endl;
   
   return 0;
}