/*
   Algorithm:

   START
      Accept number as No
      If the number is completely divisible by 2 
         then print Even
      Otherwise 
         print Odd
   STOP

   START
      Accept number as No
      Divide No by 2
         If remainder is 0
            then print Even
      Otherwise 
         print as Odd
   STOP
*/

#include<stdio.h>

int main()
{
   int iValue = 0;                     // To store the input
   int iRemainder = 0;                 // To store the remainder

   printf("Enter the number: \n");
   scanf("%d", &iValue);

   iRemainder = iValue % 2;
   
   if(iRemainder == 0 )
   {
      printf("Number is Even\n");
   }
   else
   {
      printf("Number is Odd\n");
   }

   return 0;
}
