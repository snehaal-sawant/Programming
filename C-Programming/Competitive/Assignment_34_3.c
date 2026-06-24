#include <stdio.h>

void StrCpyX(char *str, char *dest)
{
   while(*str != '\0')
   {
      if(*str >= 'A' && *str <= 'Z')
      {
         *dest = *str;
         dest++;
      }
      str++;
   }
   return;
}

int main()
{
   char Arr[30] = "Marvellous Multi";
   char Brr[30] = {'\0'};

   StrCpyX(Arr, Brr);
   
   printf("Capital Text is : %s", Brr);

   return 0;
}