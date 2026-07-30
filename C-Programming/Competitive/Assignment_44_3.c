#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

void Display(char FileName[])
{
   char Buffer[BUFFER_SIZE] = {'\0'};
   int fd = 0, iRet = 0;

   fd = open(FileName, O_RDONLY);
   if(fd == ERR_OPEN)
   {
      printf("Unable to open file\n");
   }

   while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
   {
      printf("%s",Buffer);
      memset(Buffer,'\0',sizeof(Buffer));
   }
}

int main()
{
   char Fname[30] = {'\0'};
   
   printf("Enter the file name : ");
   scanf("%[^\n]s", Fname);

   Display(Fname);

   return 0;
}