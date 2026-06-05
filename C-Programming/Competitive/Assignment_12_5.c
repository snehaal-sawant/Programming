#include<stdio.h>

int CountLessThanSix(int iNo)
{
   int iDigit = 0;
   int iCnt = 0;
  
   while(iNo > 0)
   {
      iDigit = iNo % 10;
      if(iDigit < 6)
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

   int iRet = CountLessThanSix(iValue);
   if(iRet > 0)
   {
      printf("There are %d digits less than six in the number", iRet);
   }
   else
   {
      printf("There is no digit less than six in the number");
   }
   return 0;
}