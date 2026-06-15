#include<stdio.h>
#include<stdlib.h>

// Time Complexity -  O(N)
int Minimum(int Arr[], int iSize)
{
   int iCnt = 0, iMin = 0;
   
   iMin = Arr[0];

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if(Arr[iCnt] < iMin)
      {
         iMin = Arr[iCnt];
      }     
   }
   return iMin;
}

int main()
{
   int *Brr = NULL;
   int iLength = 0, iCnt = 0, iRet = 0;

   printf("Enter Number of Elements : \n");
   scanf("%d", &iLength);

   Brr = (int *)malloc(sizeof(int) * iLength);

   printf("Enter the elements : \n");
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
      scanf("%d", &Brr[iCnt]);
   }

   iRet = Minimum(Brr, iLength);

   printf("Minimum number is : %d" ,iRet);

   free(Brr);

   return 0;
}