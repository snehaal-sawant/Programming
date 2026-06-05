#include<stdio.h>

int RangeDisplay(int iStart, int iEnd)
{
   if(iStart > iEnd )
   {
      return -1;
   }

   while (iStart <= iEnd)
   {
      printf("%d\n", iStart);
      iStart++;
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

   int iRet = RangeDisplay(iValue1, iValue2);
   if(iRet == -1)
   {
      printf("Invalid range");
   }
   return 0;
}