#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
   int iCnt = 0;

   printf("Numbers which are Divisible by 3 and 5 are : \n");
   
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] % 3 == 0 && Arr[iCnt] % 5 == 0)
      {
         printf("%d\n", Arr[iCnt]);
      }
   }
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

   Display(p, iSize);

   free(p);
   return 0;
}