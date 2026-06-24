#include <stdio.h>

void Reverse(char *str)
{
   char *start = NULL;
   char *end = NULL;
   char temp = '\0';

   start = str;
   
   while(*str != '\0')
   {     
      str++;
   }
   str--;
   end = str;
   while(start <= end)
   {
      temp = *start;
      *start = *end;
      *end = *start;
      start++;
      end--; 
   }
}

int main()
{
   char Arr[50] = {'\0'};

   printf("Enter the string : ");
   scanf("%[^\n]s", Arr);

   Reverse(Arr);

   printf("Updates String is : %s\n", Arr);

   return 0;
}