#include<stdio.h>

int RangeDisplayRev(int iStart, int iEnd)
{
   if(iStart > iEnd)
   {
      return -1;
   }

   while (iEnd >= iStart)
   {
      printf("%d\n", iEnd);
      iEnd--;
   }
   
   return 0;
}

int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter starting point : ");
   scanf("%d",&iValue1);

   printf("Enter ending point : ");
   scanf("%d",&iValue2);

   int iRet = RangeDisplayRev(iValue1, iValue2);
   if(iRet == -1)
   {
      printf("Invalid range");
   }

   return 0;
}