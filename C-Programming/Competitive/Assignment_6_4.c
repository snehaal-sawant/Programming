#include<stdio.h>


void NumberTable(int iNo)
{
   if (iNo < 0)
   {
      iNo = -iNo;
   }
   int iCnt = 0;
   int iTable = 0;

   for (iCnt = 1; iCnt <= 10; iCnt++)
   {
      iTable = iNo * iCnt;
      printf("%d \t", iTable);
   }
}
int main()
{
   int iValue = 0;

   printf("Enter number\n");
   scanf("%d", &iValue);
      
   NumberTable(iValue);

   return 0;
}