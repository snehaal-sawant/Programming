#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0
BOOL ChkVowel(char CValue)
{
   if (CValue == 'A' || CValue == 'E' || CValue == 'I' || CValue == 'O' || CValue == 'U' ||
       CValue == 'a' || CValue == 'e' || CValue == 'i' || CValue == 'o' || CValue == 'u')
   {
      return 1;
   }
   else
   {
      return 0;
   }
}
int main()
{
   char cValue = '\0';
   BOOL bRet = FALSE;
   printf("Enter character\n");
   scanf("%c", &cValue);
   bRet = ChkVowel(cValue);
   if (bRet == TRUE)
   {
      printf("It is a Vowel");
   }
   else
   {
      printf("It is not aVowel");
   }
   return 0;
}