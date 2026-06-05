#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
   int iCnt = 0;
   int iEvenCount = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] % 2 == 0)
      {
         iEvenCount++;
      }
   }
   return iEvenCount;
}

int main()
{
   int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;
   int *p = NULL;

   printf("Enter Number of Elements : ");
   scanf("%d", &iSize);

   p = (int *)malloc(iSize * sizeof(int));

   if(p == NULL)
   {
      printf("Unable to allocate memory");
      return -1;
   }

   printf("Enter %d Elements : \n", iSize);

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      scanf("%d", &p[iCnt]);
   }
   printf("Entered Numbers are :  \n");

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      printf("%d \n", p[iCnt]);
   }

   iRet = CountEven(p, iSize);
   printf("Count of Even Numbers is : %d\n", iRet);

   free(p);
   return 0;
}