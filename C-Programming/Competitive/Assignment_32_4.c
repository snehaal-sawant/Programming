#include <stdio.h>

void DisplayDigit(char *str)
{
   while(*str != '\0')
   {
      if(*str >= '0' && *str <= '9')
      {
         printf("%c",*str);  
      }      
      str++;
   }
   return;
}

int main()
{
   char Arr[20] = {'\0'};
   
   printf("Enter the string : ");
   scanf("%[^\n]s",Arr);
   
   DisplayDigit(Arr);
   
   return 0;
}