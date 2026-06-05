#include<stdio.h>

int NumberX(int iNo)
{
   switch(iNo)
   {
      case 0:
         return 0;
         break;

      case 1:
         return 1;
         break;

      case 2:
         return 2;
         break;

      case 3:
         return 3;
         break;

      case 4:
         return 4;
         break;

      case 5:
         return 5;
         break;

      case 6:
         return 6;
         break;

      case 7:
         return 7;
         break;

      case 8:
         return 8;
         break;

      case 9:
         return 9;
         break;

      default:
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

   if (iRet == 0)
   {
      printf("Zero");
   }
   else if (iRet == 1)
   {
      printf("One");
   }
   else if (iRet == 2)
   {
      printf("Two");
   }
   else if (iRet == 3)
   {
      printf("Three");
   }
   else if (iRet == 4)
   {
      printf("Four");
   }
   else if (iRet == 5)
   {
      printf("Five");
   }
   else if (iRet == 6)
   {
      printf("Six");
   }
   else if (iRet == 7)
   {
      printf("Seven");
   }
   else if (iRet == 8)
   {
      printf("Eight");
   }
   else if (iRet == 9)
   {
      printf("Nine");
   }
   else
   {
      printf("Invalid Number");
   }
   return 0;
}