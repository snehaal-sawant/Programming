#include <stdio.h>

int LastChar(char str[], char ch)
{
   int i = 0;

   while(str[i] != '\0')
   {     
      i++;
   }
   while(i >= 0)
   {
      if(str[i] == ch)
      {
         return i;  
      }      
      i--;
   }
}

int main()
{
   char Arr[50] = {'\0'};
   char cValue = '\0';
   int iRet = 0;

   printf("Enter the string : ");
   scanf("%[^\n]s", Arr);
   
   printf("Enter the character : ");
   scanf(" %c", &cValue);

   iRet = LastChar(Arr, cValue);

   printf("Character location is %d",iRet);
   
   return 0;
}