#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
   int iCnt = 0, iDigit = 0, iCount = 0, itemp = 0;
   
   for(iCnt = 0; iCnt < iSize; iCnt++)
   {
      itemp = Arr[iCnt];
      while(Arr[iCnt] != 0)
      {
         iDigit = Arr[iCnt] % 10;
         iCount++;
         Arr[iCnt] = Arr[iCnt] / 10;
      }
      if (iCount == 3)
      {
         printf("%d\n",itemp);
      }
      iCount = 0;
   }  
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

   Display(p, iSize);

   free(p);
   
   return 0;
}