#include<stdio.h>

void Pattern(int iNo)
{
   int i = 0;
   char ch = '\0';
   for(i = 0, ch = 'A'; i < iNo; i++, ch++)
   {
      printf("%c", ch);
   }  
}

int main()
{
   int iValue = 0;

   printf("Enter Number of Elements : ");
   scanf("%d", &iValue);

   Pattern(iValue);
   
   return 0;
}