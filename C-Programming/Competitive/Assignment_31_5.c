#include <stdio.h>

void Reverse(char *str)
{
   char *start = NULL;
   char temp = '\0';
   start = str;

   while(*str != '\0')
   {
      str++;
   }
   str--;

   while(start <= str)
   {
      printf("%c",*str);
      str--;
   }
}

int main()
{
   char Arr[20] = {'\0'};
   
   printf("Enter the string : ");
   scanf("%[^\n]s",Arr);
   
   Reverse(Arr);

   return 0;
}