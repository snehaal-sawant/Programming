#include<stdio.h>
#define PI 3.14

int CircleArea(float fRadius)
{
   if (fRadius < 0)
   {
      fRadius = -fRadius;
   }
   return (PI * fRadius * fRadius);
}
int main()
{
   float fValue = 0; double dRet = 0;

   printf("Enter radius: ");
   scanf("%f", &fValue);

   dRet = CircleArea(fValue);

   printf("Area of circle is %lf", dRet);

   return 0;
}