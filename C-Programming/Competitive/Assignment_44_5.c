#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

void AppendText(char FileName[], char Text[])
{
   char Buffer[BUFFER_SIZE] = {'\0'};
   int fd = 0, iRet = 0;

   fd = open(FileName, O_WRONLY | O_APPEND);

   if(fd == ERR_OPEN)
   {
      printf("Unable to open file\n");
   }
   else
   {
      write(fd, Text, strlen(Text));
   }
}

int main()
{
   char Fname[30] = {'\0'};
   char cValue[1024] = {'\0'};
   
   printf("Enter the file name : ");
   scanf("%[^\n]s", Fname);

   printf("Enter text to insert : ");
   scanf(" %[^\n]s", cValue);

   AppendText(Fname, cValue);

   return 0;
}