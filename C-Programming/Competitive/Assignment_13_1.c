#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
   int iSum1 = 0;
   int iSum2 = 0;
   int iCnt = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] % 2 == 0)
      {
         iSum1 = iSum1 + Arr[iCnt];
      }
      else
      {
         iSum2 = iSum2 + Arr[iCnt];
      }
   }
   return iSum1 - iSum2;

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

   iRet = Difference(p, iSize);
   
   printf("The difference is : %d", iRet);
   free(p);
   return 0;
}