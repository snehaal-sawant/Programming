#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize, int iNo)
{
   int iCnt = 0;
   int iCount = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] == iNo)
      {
         iCount++;
      }
   }
   return iCount;
}

int main()
{
   int iSize = 0, iValue = 0, iCnt = 0;
   int iRet = 0, iNo = 0;
   int *p = NULL;

   printf("Enter Number of Elements : ");
   scanf("%d", &iSize);

   p = (int *)malloc(iSize * sizeof(int));

   printf("Enter Number to Find Frequency : ");
   scanf("%d", &iNo);

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

   iRet = Frequency(p, iSize, iNo);
   printf("Frequency of %d in the array is : %d\n", iNo, iRet);

   free(p);
   return 0;
}