#include <stdio.h>
#include <ctype.h>

void DisplayConvert(char CValue)
{
   if (CValue >= 'A' && CValue <= 'Z')
   {
      printf("Lower case character is : %c", tolower(CValue));
   }
   else if (CValue >= 'a' && CValue <= 'z')
   {
      printf("Upper case character is : %c", toupper(CValue));
   }
}
int main()
{
   char cValue = '\0';
   printf("Enter character\n");
   scanf("%c", &cValue);
   DisplayConvert(cValue);
   return 0;
}