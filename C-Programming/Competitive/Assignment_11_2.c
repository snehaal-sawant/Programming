#include<stdio.h>

int RangeDisplayEven(int iStart, int iEnd)
{
   if(iStart > iEnd)
   {
      return -1;
   }
   while (iStart <= iEnd)
   {
      if(iStart % 2 == 0)
      {
         printf("%d\n", iStart);
      }
      iStart++;
   }
}

int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter starting point : ");
   scanf("%d",&iValue1);

   printf("Enter ending point : ");
   scanf("%d",&iValue2);

   int iRet = RangeDisplayEven(iValue1, iValue2);
   if(iRet == -1)
   {
      printf("Invalid range");
   }

   return 0;
}