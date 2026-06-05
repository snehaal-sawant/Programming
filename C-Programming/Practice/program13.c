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

   printf("Enter the number: \n");
   scanf("%d", &iValue);

   iRet = CheckEvenOdd(iValue);

   if(iRet == 0 )
   {
      printf("Number is Even\n");
   }
   else
   {
      printf("Number is Odd\n");
   }
   
   return 0;
}
