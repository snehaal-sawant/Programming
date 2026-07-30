#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

int CountChar(char FileName[], char ch)
{
   char Buffer[BUFFER_SIZE] = {'\0'};
   int fd = 0, iRet = 0, iCount = 0, i = 0;

   fd = open(FileName, O_RDONLY);
   
   while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
   {
      for(i = 0; i <= iRet; i++)
      {
         if(Buffer[i] == ch)
         {
            iCount++;
         }
      }
      memset(Buffer,'\0',sizeof(Buffer));
   }
   return iCount;
}

int main()
{
   char Fname[30] = {'\0'};
   char cValue;
   int iRet = 0;

   printf("Enter the file name : ");
   scanf("%[^'\n']s", Fname);

   printf("Enter the character to count : ");
   scanf(" %c", &cValue);

   iRet = CountChar(Fname, cValue);

   if(iRet == ERR_OPEN)
   {
      printf("Unable to open file\n");
   }
   else
   {
      printf("Number of characters are : %d",iRet);
   }

   return 0;
}