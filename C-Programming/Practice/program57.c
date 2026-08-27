//Input : 8
//Output : 1  3  5   7


#include<stdio.h>

int Display(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= iNo; iCnt+=2)
   {
      printf("%d\t", iCnt);
   }
}

int main()
{
   int iValue = 0;

   printf("Enter Number : ");
   scanf("%d", &iValue);

   Display(iValue);

   return 0;
}