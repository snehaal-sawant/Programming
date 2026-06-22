#include <stdio.h>

void Display(char ch)
{ 
   printf("Decimal: \t%d\n",ch);
   printf("Hexadecimal: \t%X\n",ch);
   printf("Octal: \t%o\n",ch);
}

int main()
{
   char cValue = '\0';

   printf("Enter the character : ");
   scanf("%c", &cValue);
   
   Display(cValue);

   return 0;
}