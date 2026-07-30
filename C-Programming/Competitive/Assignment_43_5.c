#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

void DisplayN(char FileName[], int iSize)
{
   char Buffer[BUFFER_SIZE] = {'\0'};
   int fd = 0, iRet = 0, iCount = 0, i = 0;

   fd = open(FileName, O_RDONLY);

   if(fd == -1)
   {
      printf("Unable to open file\n");
   }
   while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
   {
      for(i = 0; i < iSize; i++)
      {
         printf("%c", Buffer[i]);
         iCount++;
      }
      memset(Buffer,'\0',sizeof(Buffer));
   }
}

int main()
{
   char Fname[30] = {'\0'};
   int iValue = 0;

   printf("Enter the file name : ");
   scanf("%[^\n]s", Fname);

   printf("Enter the number of charaters to print : ");
   scanf("%d", &iValue);

   DisplayN(Fname, iValue);

   return 0;
}