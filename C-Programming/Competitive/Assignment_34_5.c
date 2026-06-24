#include <stdio.h>

void StrCatX(char *str, char *dest)
{
   while(*str != '\0')
   {
      str++;
   }

   if(*str == '\0')
   {
      *str = ' ';
      str++;
   }

   while(*dest != '\0')
   {
      *str = *dest;
      dest++;
      str++;
   }
}

int main()
{
   char Arr[50] = "Marvellous Multi OS";
   char Brr[30] = "Logic Building";

   StrCatX(Arr, Brr);
   
   printf("Concatinated Text is : %s", Arr);

   return 0;
}