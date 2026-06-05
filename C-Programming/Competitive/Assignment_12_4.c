#include<stdio.h>

int CountFour(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
  
   while(iNo > 0)
   {
      iDigit = iNo % 10;
      if(iDigit == 4)
      {
         iCnt++;
      }
      iNo = iNo / 10;      
   }
   return iCnt;
}

int main()
{
   int iValue = 0;

   printf("Enter Number : ");
   scanf("%d", &iValue);

   int iRet = CountFour(iValue);
   if(iRet > 0)
   {
      printf("There are %d four digits in the number", iRet);
   }
   else
   {
      printf("There is no four digit in the number");
   }
   return 0;
}