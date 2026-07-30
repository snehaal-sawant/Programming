#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define BUFFER_SIZE 1024
#define ERR_CREATE -1

void FileCreate(char FileName[])
{
   char Buffer[BUFFER_SIZE] = {'\0'};
   int fd = 0;

   fd = creat(FileName, 0777);

   if(fd == ERR_CREATE)
   {
      printf("Unable to create file\n");
   }
   else
   {
      printf("File created successfully\n");
      close(fd);
   }
}

int main()
{
   char Fname[30] = {'\0'};
   
   printf("Enter the file name : ");
   scanf("%[^\n]s", Fname);

   FileCreate(Fname);

   return 0;
}