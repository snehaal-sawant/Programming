#include<stdio.h>

void NumberLine(int iNo)
{
   iNo = -iNo;

   int iCnt = 0;
   for (iCnt = iNo; iCnt <= (-iNo); iCnt++)
   {
      printf("%d\n", iCnt);
   }

}
int main()
{
   int iValue = 0;
   
   printf("Enter number\n");
   scanf("%d", &iValue);
   
   NumberLine(iValue);

   return 0;
}