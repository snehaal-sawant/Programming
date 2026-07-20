#include <iostream>
using namespace std;

template<class T>
int Frequency(T *Arr,int iSize,T Value)
{
   int i = 0, iCount = 0;
   for(i = 0; i < iSize; i++)
   {
      if(Arr[i] == Value)
      {
         iCount++;
      }
   }
   return iCount;
}

int main()
{
   int iRet = 0;
  
   int Arr[9] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

   iRet = Frequency(Arr,9,10);
   cout<<"Frequency of number 10 is :"<<iRet<<endl;

   float Brr[6] = {10.45f, 20.56f, 30.67f, 10.45f, 30.67f, 40.25f};

   iRet = Frequency(Brr,6,30.67f);
   cout<<"Frequency of number 30.67 is :"<<iRet<<endl;

   char Crr[7] = {'a','b','c','a','c','b','c'};

   iRet = Frequency(Crr,7,'c');
   cout<<"Frequency of char c is :"<<iRet<<endl;

   return 0;
}
