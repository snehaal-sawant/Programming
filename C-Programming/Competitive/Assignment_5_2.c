#include<stdio.h>

void Pattern(int iNo)
{
   if (iNo < 0)
   {
      iNo = -iNo;
   }
   int iCnt = 0;
   for (iCnt = 1; iCnt <= iNo; iCnt++)
   {
      printf("%d\n", iNo);
   }

}
int main()
{
   int iValue = 0;
   
   printf("Enter number\n");
   scanf("%d", &iValue);
   
   Pattern(iValue);

   return 0;
}