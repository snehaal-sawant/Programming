#include<stdio.h>

typedef unsigned int UINT;

//Position -- 4

int main()
{  
   UINT iNo = 0;
   UINT iMask = 0;
   UINT iAns = 0;

   printf("Enter Number : ");
   scanf("%d", &iNo);  

   iMask = 0x8;
   iNo = iNo ^ iMask;

   printf("Updated number is : %d", iNo);
   
   return 0;
}
