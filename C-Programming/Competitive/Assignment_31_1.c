#include <stdio.h>

int CountCapital(char *str)
{
   int iCnt = 0;

   while(*str != '\0')
   {
      if(*str >= 'A' && *str <= 'Z')
      {
         iCnt++;
      }
      str++;
   }
   return iCnt;
}

int main()
{
   char Arr[20] = {'\0'};
   int iRet = 0;
   
   printf("Enter the string : ");
   scanf("%[^\n]s",Arr);
   
   iRet = CountCapital(Arr);

   printf("Number of Capital letters are : %d",iRet);
   
   return 0;
}