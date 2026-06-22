#include <stdio.h>

char Display(char ch)
{
   if(ch >= 'A' && ch <= 'Z')
   {
        ch = (ch+32);
   }
   else if (ch >= 'a' && ch <= 'z')
   {
        ch = (ch-32);
   }
   return ch;
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);
   
    cRet = Display(cValue);

    printf("The updated character is : %c", cRet);

    return 0;
}