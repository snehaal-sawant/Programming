#include<stdio.h>
#include<string.h>

int main()
{
   char str[]="Jay Shree Krishna";
   int iRet = 0;

   iRet = strlen(str);  //For java - str.length() -> its a method -> if its array of string
                        //           str.length -> its a property -> if its normal array
   printf("Length of string is : %d\n",iRet);

   return 0;
}