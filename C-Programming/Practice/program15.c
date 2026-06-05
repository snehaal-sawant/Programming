#include<stdio.h>
#include<stdbool.h>

bool CheckEvenOdd(int iNo)
{
   int iRemainder = 0;                 // To store the remainder

   iRemainder = iNo % 2;
   
   return iRemainder;

   if (iRemainder == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
   
}

int main()
{
   int iValue = 0;                     // To store the input
   bool bRet = false;

   printf("Enter number to check whether it is even or odd : ");
   scanf("%d", &iValue);

   bRet = CheckEvenOdd(iValue);
   
   if(bRet == true)
   {
      printf("\n%d is an Even Number\n", iValue);
   }
   else
   {
      printf("\n%d is an Odd Number\n", iValue);
   }
   
   return 0;
}
