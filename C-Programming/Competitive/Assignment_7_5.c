#include<stdio.h>

int FactorialDiff(int iNo)
{
   int iOddFact = 1, iEvenFact = 1, DiffFact = 0, iCnt = 0;
   if (iNo < 0)
   {
      iNo = -iNo;
   }
   for(int iCnt = 1; iCnt <= iNo; iCnt++)
   {
      if(iCnt % 2 != 0)
      {
         iOddFact = iOddFact * iCnt;
      }
      else if(iCnt % 2 == 0)
      {
         iEvenFact = iEvenFact * iCnt;
      }
      DiffFact = iEvenFact - iOddFact;
   }
   return DiffFact;
}
int main()
{
   int iValue = 0, iRet = 0;

   printf("Enter number: ");
   scanf("%d", &iValue);

   iRet = FactorialDiff(iValue);

   printf("Difference between even and odd factorial is %d", iRet);

   return 0;
}