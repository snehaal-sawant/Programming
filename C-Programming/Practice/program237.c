#include<stdio.h>

int main()
{
   char *str = "Krishna";        //char str[] = "Krishna";
   
   while (*str != '\0')
   {
      printf("%c",*str);
      str++;
   }

   return 0;
}