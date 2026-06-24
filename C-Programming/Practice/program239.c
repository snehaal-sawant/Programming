#include<stdio.h>
#include<string.h>

int main()
{
   int iCount = 0;
   char *str = "Krishna";        //char str[] = "Krishna";
   printf("Length of String is : %d\n", strlen(str));

   while (*str != '\0')
   {
      iCount++;
      str++;
   }

   printf("Length of String is : %d\n", iCount);
   
   return 0;
}