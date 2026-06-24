#include <stdio.h>

void StrCpyX(char *str, char *dest, int iCnt)
{
   while((*str != '\0') &&(iCnt != 0))
   {
      *dest = *str;
      str++;
      dest++;
      iCnt--;
   }
   return;
}

int main()
{
   char Arr[30] = "Marvellous Multi OS";
   char Brr[30] = {'\0'};

   StrCpyX(Arr, Brr, 15);
   
   printf("Copied Text is : %s", Brr);

   return 0;
}