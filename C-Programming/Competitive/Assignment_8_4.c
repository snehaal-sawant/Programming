#include<stdio.h>

float FhtoCs(float fTemp)
{
   fTemp = ((fTemp - 32) * (5.0/9.0));
   return fTemp;
}

int main()
{
   float fValue = 0, fRet = 0;

   printf("Enter temperature in Fahrenheit: ");
   scanf("%f", &fValue);

   fRet = FhtoCs(fValue);

   printf("Temperature in Celsius is %f", fRet);

   return 0;
}