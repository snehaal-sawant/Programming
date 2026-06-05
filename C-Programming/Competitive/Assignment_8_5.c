#include<stdio.h>
#define SQMT 0.0929

double SquareMeter(int iValue)
{
   if (iValue < 0)
   {
      iValue = -iValue;
   }
   return (iValue * SQMT);
}

int main()
{
   int iValue = 0;
   double dRet = 0;

   printf("Enter area in square feet: ");
   scanf("%d", &iValue);

   dRet = SquareMeter(iValue);

   printf("Area in square meters is %lf", dRet);

   return 0;
}