#include <iostream>
using namespace std;

template<class T>
int SearchFirst(T *Arr,int iSize,T Value)
{
   int i = 0;
   for(i = 0; i <= iSize; i++)
   {
      if(Arr[i] == Value)
      {
         return i;
      }
   }
}

int main()
{
   int iRet = 0;
  
   int Arr[9] = {10, 20, 30, 10, 30, 40, 10, 40, 10};

   iRet = SearchFirst(Arr,9,10);
   cout<<"First Occurance of number 10 is :"<<iRet<<endl;

   float Brr[6] = {10.45f, 30.67f, 20.56f, 10.45f, 30.67f, 40.25f};

   iRet = SearchFirst(Brr,6,30.67f);
   cout<<"First Occurance of number 30.67 is :"<<iRet<<endl;

   char Crr[7] = {'a','b','a','c','d','b','c'};

   iRet = SearchFirst(Crr,7,'c');
   cout<<"First Occurance of char c is :"<<iRet<<endl;

   return 0;
}
