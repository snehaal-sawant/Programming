#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
   int iCnt = 0;
   int iProduct = 1;
   
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      if (Arr[iCnt] % 2 != 0)
      {
         iProduct *= Arr[iCnt];
      }
   }
   return iProduct;
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

   iRet = Product(p, iSize);
   printf("Product of odd elements is : %d\n", iRet);

   free(p);
   
   return 0;
}