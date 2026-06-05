#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iSize)
{
   int iCnt = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] == 11)
      {
         return true;
      }
      else
      {
         return false;
      }
   }
}

int main()
{
   int iSize = 0, iValue = 0, iCnt = 0;
   bool iRet = false;
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

   iRet = Check(p, iSize);
   if(iRet == true)
   {
      printf("11 is present in the array");
   }
   else
   {
      printf("11 is not present in the array");
   }

   free(p);
   return 0;
}