#include <iostream>
using namespace std;

template<class T>
void Reverse(T *Arr,int iSize)
{
   int i = 0;
   for(i = iSize-1; i >= 0; i--)
   {
      cout<<Arr[i]<<"\t";
   }
   cout<<endl;
}

int main()
{  
   int Arr[9] = {10, 20, 30, 10, 30, 40, 10, 40, 50};

   float Brr[6] = {10.45f, 30.67f, 20.56f, 10.45f, 40.25f, 30.67f};

   char Crr[7] = {'a','d','c','b','c','b','a'};

   Reverse(Arr,9);
   Reverse(Brr,6);
   Reverse(Crr,7);


   return 0;
}
