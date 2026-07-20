#include <iostream>
using namespace std;

template<class T>

T Multiply(T no1, T no2)
{
   T ans;
   ans = no1 * no2;
   return ans;
}


int main()
{
   int iRet = Multiply(10, 11);
   cout<<"Multiplication of 10 and 11 is : "<<iRet<<endl;

   double dRet = Multiply(10.6547, 11.7658);
   cout<<"Multiplication of 10.6547 and 11.7658 is : "<<dRet<<endl;
   
   return 0;
}
