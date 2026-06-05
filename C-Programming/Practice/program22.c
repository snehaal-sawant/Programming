#include<stdio.h>

#define AGE_INVALID = -1;

int CalculateTicketPrice(int iAge)
{
   if (iAge < 0)                       //Input filter -- iAge is a negative number
   {
      return -1;
   }
   if(iAge >= 0 && iAge <=5)
   {
      return 0;
   }
   else if(iAge >= 6 && iAge <= 18)
   {
      return 500;
   }
   else if (iAge >= 19 && iAge <= 50)
   {
      return 900;
   }
   else
   {
      return 400;
   }
}

int main()
{
   int iValue = 0;                     // To store age value
   int iRet = 0;

   printf("Please enter your age to calculate ticket price : ");
   scanf("%d", &iValue);

   iRet = CalculateTicketPrice(iValue);

   if(iRet == -1)
   {
      printf("Please enter Positive Age\n");
   }
   else
   {
      printf("You ticket price is : Rs.%d\n", iRet);
   }
      
   return 0;
}
