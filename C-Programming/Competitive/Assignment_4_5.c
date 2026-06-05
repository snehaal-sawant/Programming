#include<stdio.h>

int FactDiff(int iNo)
{
   int iCnt = 0;
   int iSum1 = 0;
   int iSum2 = 0;
   
   for (iCnt = 1; iCnt <= iNo; iCnt++)
   {
      if (iNo % iCnt != 0)
      {
         iSum1 += iCnt;
      }
      else if(iNo % iCnt == 0)
      {
         iSum2 += iCnt;
      }
   }
   return iSum2 - iSum1;
}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number\n");
   scanf("%d", &iValue);
   
   iRet = FactDiff(iValue);

   printf("The difference between factor and non-factor sum is: %d\n", iRet);

   return 0;
}