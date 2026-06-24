#include <stdio.h>

void StrCpyX(char *str, char *dest)
{
   while(*str != '\0')
   {
      if((*str >= 'a') && (*str <= 'z') || (*str == ' '))
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
   char Arr[30] = "Marvellous Multi OS";
   char Brr[30] = {'\0'};

   StrCpyX(Arr, Brr);
   
   printf("Capital Text is : %s", Brr);

   return 0;
}