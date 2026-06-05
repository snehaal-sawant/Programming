#include<stdio.h>

int RangeSum(int iStart , int iEnd)
{
   int iSum1 = 0;

   if(iStart < 0 || iEnd < 0 || iStart > iEnd)
   {
      return -1;   
   }
   while (iStart <= iEnd)
   {
      iSum1 = iSum1 + iStart;
      iStart++;
   }
   return iSum1;
}

int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter starting point : ");
   scanf("%d",&iValue1);

   printf("Enter ending point : ");
   scanf("%d",&iValue2);

   int iRet = RangeSum(iValue1, iValue2);

   if(iRet == -1)
   {
      printf("Invalid range");
   }
   else
   {
      printf("Sum of numbers in the range: %d\n", iRet);
   }
   return 0;
}