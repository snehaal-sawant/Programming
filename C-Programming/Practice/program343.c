#include<stdio.h>

typedef unsigned int UINT;

// Position 3rd and 7th
int main()
{  
   UINT iMask = 0x00000044;
   UINT iNo = 0;
   UINT iResult = 0;

   printf("Enter Number : ");
   scanf("%d", &iNo); 

   iResult = iNo ^ iMask;

   printf("Updated number is : %d\n", iResult);

   return 0;
}
