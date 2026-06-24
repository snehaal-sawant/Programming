#include<stdio.h>

//Using Array str[]
void Display(char str[])
{
   printf("Input String is %s\n",str);
}

int main()
{
   char Arr[5] = {'\0'};  

   printf("Enter String : \n");
   scanf("%[^'\n']s", Arr);       

   Display(Arr);

   return 0;
}
