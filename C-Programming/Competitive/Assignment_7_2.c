#include<stdio.h>
#define USD_INR 70

int DollarToINR(int iNo)
{
   
   if (iNo < 0)
   {
      iNo = -iNo;
   }
   iNo = iNo * USD_INR;
   return iNo;

}
int main()
{
   int iValue = 0, iRet = 0;

   printf("Enter number of USD: ");
   scanf("%d", &iValue);

   iRet = DollarToINR(iValue);

   printf("Value in INR is %d", iRet);

   return 0;
}