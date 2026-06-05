#include<stdio.h>
#include<stdlib.h>

int LargestNo(int Arr[], int iSize)
{
   int iCnt = 0;
   
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] > Arr[iCnt + 1])
      {
         return Arr[iCnt];
      }
   }
   return -1;
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

   iRet = LargestNo(p, iSize);
   printf("Largest element is : %d\n", iRet);

   free(p);
   
   return 0;
}