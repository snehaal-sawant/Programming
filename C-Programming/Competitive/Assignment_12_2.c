#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
   int iDigit = 0;
  
   while(iNo > 0)
   {
      iDigit = iNo % 10;
      if(iDigit == 0)
      {
         return true;
      }
      iNo = iNo / 10;      
   }
   return false;
}

int main()
{
   int iValue = 0;

   printf("Enter Number : ");
   scanf("%d", &iValue);

   bool iRet = CheckZero(iValue);
   if(iRet == true)
   {
      printf("There is a zero digit in the number");
   }
   else
   {
      printf("There is no zero digit in the number");
   }
   return 0;
}