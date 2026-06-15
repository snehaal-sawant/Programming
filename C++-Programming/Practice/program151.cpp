#include<iostream>
using namespace std;

class ArrayX
{  
   // Error : Access Specifier of Summation is PRIVATE as nothing is mentioned before it.
   int Summation(int Arr[], int iSize)
   {
      int iCnt = 0, iSum = 0;

      for(iCnt = 0; iCnt < iSize; iCnt++)
      {
         iSum = iSum + Arr[iCnt];
      }
      return iSum;
   }
};

int main()
{
   int *Brr = NULL;
   int iLength = 0, iCnt = 0, iRet = 0;
   ArrayX aobj;

   cout<<"Enter Number of Elements : \n";
   cin>>iLength;

   Brr = new int[iLength];

   cout<<"Enter the elements : "<<endl;
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      cin>>Brr[iCnt];
   }

   cout<<"Entered elements are : "<<endl;
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      cout<<Brr[iCnt]<<endl;
   }

   iRet = aobj.Summation(Brr, iLength);

   cout << "Summation is : "<<iRet<<endl;

   delete []Brr;

   return 0;
}