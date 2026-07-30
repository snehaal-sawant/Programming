#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

void FileOpen(char FileName[])
{
   char Buffer[BUFFER_SIZE] = {'\0'};
   int fd = 0;

   fd = FileOpen(FileName, O_RDONLY);

   if(fd == ERR_OPEN)
   {
      printf("Unable to open file\n");
   }
   else
   {
      printf("File is opened successfully\n");
      close(fd);
   }
}

int main()
{
   char Fname[30] = {'\0'};
   
   printf("Enter the file name : ");
   scanf("%[^\n]s", Fname);

   FileOpen(Fname);

   return 0;
}