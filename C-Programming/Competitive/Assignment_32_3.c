#include <stdio.h>

int strtoggle(char *str)
{
   while(*str != '\0')
   {
      if(*str >= 'a' && *str <= 'z')
      {
         *str = (char)(*str-32);  
      }
      else if(*str >= 'A' && *str <= 'Z')
      {
         *str = (char)(*str+32);  
      }
      str++;
   }
}

int main()
{
   char Arr[20] = {'\0'};
   
   printf("Enter the string : ");
   scanf("%[^\n]s",Arr);
   
   strtoggle(Arr);

   printf("Modified string is : %s",Arr);
   
   return 0;
}