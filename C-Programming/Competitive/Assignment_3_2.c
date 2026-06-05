#include<stdio.h>

void DisplayFactor(int iNo)
{
   int flag = 0;
   if (iNo <= 0)
   {   
      iNo = -iNo;
   }
   
   for (int iCnt = 1; iCnt <= iNo; iCnt++)
   {
      if((iNo % iCnt) == 0 && (iCnt % 2) == 0)
      {
         printf("%d\n", iCnt); 
         flag = 1;
      }      
   }
   if(flag == 0)
   {
      printf("No even factors of %d\n", iNo);
   }
}

int main()
{
   int iValue = 0;
   
   printf("Enter a number to print factors of given number : ");
   scanf("%d", &iValue);

   DisplayFactor(iValue);

   return 0;
}