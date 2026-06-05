#include<stdio.h>

int Display(int iNo)
{
   //Filter - Exit bcoz value is negative
   if(iNo < 0)
   {
      printf("Invalid Input\n");
      return 0;
   }
   
   int iCnt = 0;

   for(iCnt = 0; iCnt<=iNo; iCnt++)
   {
      printf("%d\n", iCnt);
   }
}

int main()
{
   int iValue = 0;

   printf("Enter the frequency : ");
   scanf("%d", &iValue);  

   Display(iValue);

   return 0;
}