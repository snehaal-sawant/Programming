#include<stdio.h>

void RevTable(int iNo)
{
   if (iNo < 0)
   {
      iNo = -iNo;
   }
   int iCnt = 0;
   int iTable = 0;

   for (iCnt = 10; iCnt >= 1; iCnt--)
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
      
   RevTable(iValue);

   return 0;
}