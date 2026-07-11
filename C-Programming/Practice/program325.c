#include<stdio.h>

typedef unsigned long int UINT;

int main()
{  
   UINT iMask = 1;
   int iCnt = 0;

   for(iCnt = 1; iCnt <= 33; iCnt++) //Overflow
   {
      printf("%d : %X\n", iCnt, iMask);  
      iMask = iMask << 1;
   }

   return 0;
}
