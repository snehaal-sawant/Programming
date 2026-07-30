#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
#include<sys/stat.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

int CalculateFileSize(char FileName[])  
{
   struct stat sobj;                
   
   stat(FileName, &sobj);           

   return sobj.st_size;             
}

int main()
{
   char Fname[30] = {'\0'};
   int iRet = 0;

   printf("Enter the file name : ");
   scanf("%[^\n]s", Fname);

   iRet = CalculateFileSize(Fname);
   
   printf("Size of file is : %d bytes", iRet);

}