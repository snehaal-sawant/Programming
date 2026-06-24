#include<stdio.h>

int main()
{
   int iCount = 0;
   char *str = "Krishna";        //char str[] = "Krishna";
   
   while (*str != '\0')
   {
      iCount++;
      str++;
   }

   printf("Length of String is : %d\n", iCount);

   return 0;
}