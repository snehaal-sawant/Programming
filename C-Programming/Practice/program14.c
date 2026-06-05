#include<stdio.h>

int CheckEvenOdd(int iNo)
{
   int iRemainder = 0;                 // To store the remainder

   iRemainder = iNo % 2;
   
   return iRemainder;
}

int main()
{
   int iValue = 0;                     // To store the input
   int iRet = 0;

   printf("Enter number to check whether it is even or odd : ");
   scanf("%d", &iValue);

   iRet = CheckEvenOdd(iValue);

   if(iRet == 0 )
   {
      printf("\n%d is an Even Number\n", iValue);
   }
   else
   {
      printf("\n%d is an Odd Number\n", iValue);
   }
   
   return 0;
}
