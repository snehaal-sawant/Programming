#include <iostream>
using namespace std;

template<class T>
T AddN(T *Arr, int iSize)
{
   T iSum;
   for(int i = 0; i < iSize; i++)
   {
      iSum = iSum + Arr[i];
   }
   return iSum;
}

int main()
{
   int Arr[5] = {10, 20, 30, 40, 50};
   int iRet = AddN(Arr, 5);
   cout<<"Addition of 5 elements is : "<<iRet<<endl;

   float Brr[5] = {10.5f, 20.5f, 30.5f, 40.5f, 50.5f};
   float fRet = AddN(Brr, 5);
   cout<<"Addition of 5 float elements is : "<<fRet<<endl;

   return 0;
}
