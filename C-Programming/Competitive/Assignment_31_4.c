#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkVowel(char *str)
{
   while(*str != '\0')
   {
      if(*str >= 'a' || *str <= 'e' || *str >= 'i' || *str <= 'o' ||  *str <= 'u')
      {
         return TRUE;
      }
      return FALSE;
   }
}

int main()
{
   char Arr[20] = {'\0'};
   BOOL bRet = FALSE;
   
   printf("Enter the string : ");
   scanf("%[^\n]s",Arr);
   
   bRet = ChkVowel(Arr);

   if(bRet == TRUE)
   {
      printf("The String contains vowel");
   }
   else
   {
      printf("There is no Vowel");
   }
   return 0;
}