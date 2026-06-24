#include<stdio.h>

void UpdateChar(char * str)
{
   while(*str != '\0')
   {
      if(*str == 'l')
      {
         *str = '-';
      }
      str++;
   }
}

int main()
{  
   char Arr[50] = {'\0'};  

   printf("Enter String : \n");
   scanf("%[^'\n']s", Arr);       

   UpdateChar(Arr);

   printf("Updated String is : %s\n", Arr);

   return 0;
}
