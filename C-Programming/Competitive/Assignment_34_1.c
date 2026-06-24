#include <stdio.h>

void StrCpyX(char *str, char *dest)
{
   while(*str != '\0')
   {
      *dest = *str;
      str++;
      dest++;
   }
   return;
}

int main()
{
   char Arr[30] = "Marvellous Multi OS";
   char Brr[30] = {'\0'};

   StrCpyX(Arr, Brr);
   
   printf("Copied Text is : %s", Brr);

   return 0;
}