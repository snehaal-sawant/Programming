#include<stdio.h>

int main()
{
   char Arr[5] = {'\0'};  

   printf("Enter String : \n");
   scanf("%[^'\n']s", Arr);       

   printf("Entered String is : %s", Arr);

   return 0;
}
