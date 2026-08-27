#include <iostream>
using namespace std;

double AdditionD(double No1, double No2)
{
   double Ans;
   Ans = No1 + No2;
   return Ans;
}
float AdditionF(float No1, float No2)
{
   float Ans;
   Ans = No1 + No2;
   return Ans;
}

int AdditionI(int No1, int No2)
{
   int Ans;
   Ans = No1 + No2;
   return Ans;
}

int main()
{
   cout<<AdditionI(11,10)<<Ret<<endl;
   cout<<AdditionF(11.5f,10.2f)<<Ret<<endl;
   cout<<AdditionI(11.5,10.2)<<Ret<<endl;
   
   return 0;
}