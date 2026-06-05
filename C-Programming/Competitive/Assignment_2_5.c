#include<stdio.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
   if ((iNo % 2) == 0)
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
   int iValue = 0;
   BOOL bRet = false;
   
   printf("Enter  a number to check if the number is even or odd : ");
   scanf("%d", &iValue);

   bRet = ChkEven(iValue);

   if(bRet)
   {
      printf("%d is an even number", iValue);
   }
   else
   {
      printf("%d is an odd number", iValue);
   }
     
   return 0;
}