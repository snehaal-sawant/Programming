#include<stdio.h>

int Summation(int Arr[], int iSize)
{
   int iCnt = 0, iSum = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      iSum = iSum + Arr[iCnt];  
   }
   return iSum;
}

int main()
{
   int iLength = 4, iCnt = 0;

   int Brr[iLength], iRet = 0;
   
   printf("Enter the Elements : \n");

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      scanf("%d", &Brr[iCnt]);
   }
   
   iRet =  Summation(Brr, iLength);

   printf("Addition of all elements is %d: ",iRet);
   
   return 0;
}