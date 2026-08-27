#include <iostream>
using namespace std;

double Addition(double No1, double No2)
{
   double Ans;
   Ans = No1 + No2;
   return Ans;
}

int main()
{
   double Value1 = 10.554, Value2 = 11.2665, Ret = 0.000000;

   Ret = Addition(Value1,Value2);

   cout<<"Addition is :"<<Ret<<endl;
   
   return 0;
}