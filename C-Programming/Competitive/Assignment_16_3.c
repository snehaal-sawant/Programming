#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
   int iCnt = 0, iLargest = Arr[0], iSmallest = Arr[0];
   
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] > Arr[iCnt + 1])
      {
         iSmallest = Arr[iCnt];
      }
      else if (Arr[iCnt] < Arr[iCnt + 1])
      {
         iLargest = Arr[iCnt];
      }
   }
   return iLargest - iSmallest;
}

int main()
{
   int iSize = 0, iCnt = 0 , iRet = 0;
   int *p = NULL;

   printf("Enter Number of Elements : ");
   scanf("%d", &iSize);

   p = (int *)malloc(iSize * sizeof(int));

   printf("Enter %d Elements : \n", iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      scanf("%d", &p[iCnt]);
   }
   if(p == NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }

   printf("Entered Numbers are :  \n");

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("%d \n", p[iCnt]);
   }

   iRet = Difference(p, iSize);
   printf("Difference between largest and smallest element is : %d\n", iRet);

   free(p);
   
   return 0;
}