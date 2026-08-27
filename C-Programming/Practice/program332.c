#include<stdio.h>

//Position - 28 - Toggle 28th bit of accepted number
typedef unsigned int UINT;

int main()
{  
   UINT iNo = 0;
   UINT iMask = 0;
   UINT iAns = 0;

   printf("Enter Number : ");
   scanf("%d", &iNo);  

   iMask = 0x8000000;
   iNo = iNo ^ iMask;

   printf("Updated number is : %d", iNo);
   
   return 0;
}
