#include<stdio.h>

int NumberX(int iNo)
{
   
   if (iNo < 50)
   {
      return 1;
   }
   else if(iNo > 50 && iNo < 100)
   {
      return 0;
   }
   else  {
      return -1;
   }

}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter number\n");
   scanf("%d", &iValue);
   
   iRet = NumberX(iValue);

   if (iRet == 1)
   {
      printf("Number is less than 50\n");
   }
   else if (iRet == 0)
   {
      printf("Number is between 50 and 100\n");
   }
   else
   {
      printf("Number is greater than 100\n");
   }
   
   return 0;
}