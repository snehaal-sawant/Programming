#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Chkchar(char *str, char ch)
{
   while(*str != '\0')
   {
      if(*str == ch)
      {
         return TRUE;
      }      
      str++;
   }
   return FALSE;
}

int main()
{
   BOOL bRet = FALSE;
   char Arr[50] = {'\0'};
   char cValue = '\0';

   printf("Enter the string : ");
   scanf("%[^\n]s", Arr);
   
   printf("Enter the character : ");
   scanf(" %c", &cValue);

   bRet = Chkchar(Arr, cValue);

   if(bRet == TRUE)
   {
      printf("Character is present");
   }
   else
   {
      printf("Character is not present");
   }
   return 0;
}