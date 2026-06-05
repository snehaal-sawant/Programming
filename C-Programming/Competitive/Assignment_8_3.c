#include<stdio.h>

int KMtoMeter(int iKM)
{
   if (iKM < 0)
   {
      iKM = -iKM;
   }
   return (iKM * 1000);
}
int main()
{
   int iValue = 0, iRet = 0;

   printf("Enter distance in KM: ");
   scanf("%d", &iValue);

   iRet = KMtoMeter(iValue);

   printf("Distance in meters is %d", iRet);

   return 0;
}