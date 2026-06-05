#include<stdio.h>
#include<stdlib.h>

int Range(int Arr[], int iSize, int iValue1, int iValue2)
{
   int iCnt = 0;

   printf("Numbers which are between %d and %d are : \n", iValue1, iValue2);
   
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] >= iValue1 && Arr[iCnt] <= iValue2)
      {
         printf("%d\n", Arr[iCnt]);
      }
   }
   return -1;
}

int main()
{
   int iSize = 0, iValue1 = 0, iValue2 = 0, iCnt = 0 , iRet = 0;
   int *p = NULL;

   printf("Enter Number of Elements : ");
   scanf("%d", &iSize);

   p = (int *)malloc(iSize * sizeof(int));

   printf("Enter the Starting point : ");
   scanf("%d", &iValue1);

   printf("Enter the Ending point : ");
   scanf("%d", &iValue2);

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

   iRet = Range(p, iSize, iValue1, iValue2);
   
   free(p);
   return 0;
}