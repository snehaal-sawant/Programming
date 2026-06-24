#include <stdio.h>

int strlower(char *str)
{
   while(*str != '\0')
   {
      if(*str >= 'A' && *str <= 'Z')
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
   
   strlower(Arr);

   printf("Modified string is : %s",Arr);
   
   return 0;
}