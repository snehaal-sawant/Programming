#include <stdio.h>

int Difference(char *str)
{
   int iCnt1 = 0, iCnt2 = 0;

   while(*str != '\0')
   {
      if(*str >= 'a' && *str <= 'z')
      {
         iCnt1++;
      }
      else if(*str >= 'A' && *str <= 'Z') 
      {
         iCnt2++;
      }
      str++;
   }
   return iCnt1 - iCnt2;
}

int main()
{
   char Arr[20] = {'\0'};
   int iRet = 0;
   
   printf("Enter the string : ");
   scanf("%[^\n]s",Arr);
   
   iRet = Difference(Arr);

   printf("Difference between letters are : %d",iRet);
   
   return 0;
}