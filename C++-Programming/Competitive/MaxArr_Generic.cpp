#include <iostream>
using namespace std;

template<class T>
T MaxN(T *Arr, int iSize)
{
   T iMax = Arr[0];
   for(int i = 1; i < iSize; i++)
   {
      if(Arr[i] > iMax)
      {
         iMax = Arr[i];
      }
   }
   return iMax;
}

int main()
{
   int Arr[5] = {10, 20, 30, 40, 50};
   int iRet = MaxN(Arr, 5);
   cout<<"Maximum of 5 elements is : "<<iRet<<endl;

   float Brr[5] = {10.5f, 20.5f, 30.5f, 40.5f, 50.5f};
   float fRet = MaxN(Brr, 5);
   cout<<"Maximum of 5 float elements is : "<<fRet<<endl;

   return 0;
}
