#include <iostream>
using namespace std;

template<class T>
int SearchLast(T *Arr,int iSize,T Value)
{
   int i = 0;
   for(i = iSize - 1; i >= 0; i--)
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
  
   int Arr[9] = {10, 20, 30, 10, 30, 40, 10, 40, 50};

   iRet = SearchLast(Arr,9,10);
   cout<<"Last Occurance of number 10 is :"<<iRet<<endl;

   float Brr[6] = {10.45f, 30.67f, 20.56f, 10.45f, 40.25f, 30.67f};

   iRet = SearchLast(Brr,6,30.67f);
   cout<<"Last Occurance of number 30.67 is :"<<iRet<<endl;

   char Crr[7] = {'a','b','c','a','c','b','a'};

   iRet = SearchLast(Crr,7,'c');
   cout<<"Last Occurance of char c is :"<<iRet<<endl;

   return 0;
}
