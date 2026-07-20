#include <iostream>
using namespace std;

template<class T>

T Max(T No1, T No2, T No3)
{
   T Ans;
   if(No1 > No2 && No1 > No3)
   {
      Ans = No1;
   }
   else if(No2 > No1 && No2 > No3)
   {
      Ans = No2;
   }
   else
   {
      Ans = No3;
   }
   
   return Ans;
}

int main()
{
   int iRet = Max(10, 11,12);
   cout<<"Maximum of 10, 11 and 12 is : "<<iRet<<endl;

   double dRet = Max(10.6547, 11.7658, 12.8769);
   cout<<"Maximum of 10.6547, 11.7658 and 12.8769 is : "<<dRet<<endl;

   float fRet = Max(10.6547f, 11.7658f, 12.8769f);
   cout<<"Maximum of 10.6547f, 11.7658f and 12.8769f is : "<<fRet<<endl;
   
   char cRet = Max('A', 'B', 'C');
   cout<<"Maximum of 'A', 'B' and 'C' is : "<<cRet<<endl;

   return 0;
}
