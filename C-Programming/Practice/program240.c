#include<stdio.h>

int main()
{
   char Arr[50] = {'\0'};  

   printf("Enter String : \n");
   scanf("%s", Arr);       // Issue - scanf accepts string until first space is entered in the string

   printf("Entered String is : %s", Arr);

   return 0;
}

//Input: Snehal Bhor
//Output : Snehal ->prints only till the first space comes in the whole string