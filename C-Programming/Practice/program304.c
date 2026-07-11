#include<stdio.h>

void Display()
{
   int iNo = 0;
   int iDigit = 0;

   while (iNo!= 0)
   {
      iDigit = iNo % 2;
      printf("%d", iDigit);
      iNo = iNo/2;
   }
   printf("\n");
}

int main()
{  
   int No1 = 0, No2 = 0, Ans = 0;

   printf("Enter Number : ");
   scanf("%d", &No1);  
     
   printf("Enter Number : ");
   scanf("%d", &No2);

   Ans = No1 & No2;

   printf("Result is : %d", Ans);

   return 0;
}
