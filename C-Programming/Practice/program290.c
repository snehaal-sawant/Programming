#include<stdio.h>

void ReverseString(char *str)
{
   printf("Reverse String is : %s\n", str);
}

int main()
{  
   char Arr[50] = {'\0'};  

   printf("Enter String : \n");
   scanf("%[^'\n']s", Arr);       

   ReverseString(Arr);

   return 0;
}
