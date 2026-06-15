#include<iostream>
using namespace std;

int main()
{
   int *Brr = NULL;
   int iLength = 0, iCnt = 0;

   cout<<"Enter Number of Elements : \n";
   cin>>iLength;

   //C:        Brr = (int *)malloc (iLength * sizeof(int))
   //Java :    Brr = new int[iLength];
   Brr = new int[iLength];       // Dynamic memory allocation

   cout<<"Enter the elements : "<<endl;
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      cin>>Brr[iCnt];
   }

   cout<<"Array elements are : "<<endl;
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      cout<<Brr[iCnt]<<endl;
   }

   delete []Brr;     //Memory Deallocation

   return 0;
}
