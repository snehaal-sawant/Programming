#include<stdio.h>

typedef unsigned int UINT;

//Position -- 4 - Toggle 4th bit of accepted number

int main()
{  
   UINT iNo = 0;
   UINT iMask = 0;
   UINT iAns = 0;

   printf("Enter Number : ");
   scanf("%u", &iNo);  

   iMask = 0x8;
   iNo = iNo ^ iMask;

   printf("Updated number is : %u", iNo);
   
   return 0;
}
