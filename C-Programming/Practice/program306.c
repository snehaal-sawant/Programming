//print number of 1's in binary of the given number

#include<stdio.h>

int main()
{  
   int iNo = 0, iCount = 0, iDigit = 0;

   printf("Enter Number : ");
   scanf("%d", &iNo);  
   
   while (iNo != 0)
   {
      iDigit = iNo % 2;
      if(iDigit == 1)
      {
         iCount++;
      }
      iNo = iNo / 2;
   }
   
   printf("Number of ones are : %d\n", iCount);

   return 0;
}
