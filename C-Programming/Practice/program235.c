#include<stdio.h>
#include<string.h>

int main()
{
   char str[]="Jay Shree Krishna";
   int iRet = 0;

   iRet = strlen(str);
   printf("Length of string is : %d\n",iRet);

   iRet = sizeof(str);
   printf("Size of string is : %d\n",iRet);

   return 0;
}