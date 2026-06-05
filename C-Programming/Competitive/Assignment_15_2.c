#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize, int iNo)
{
   int iCnt = 0;

   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] == iNo)
      {
         return iCnt;
      }
   }
   return -1;
}

int main()
{
   int iSize = 0, iValue = 0, iCnt = 0 , iRet = 0;
   int iNo = 0;
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

   iRet = FirstOcc(p, iSize, iNo);
   
   if(iRet == -1)
   {  
      printf("%d is present in the array at index %d\n", iNo, iRet);
   }
   else
   {
      printf("%d is not present in the array\n", iNo);
   }
   
   free(p);
   return 0;
}