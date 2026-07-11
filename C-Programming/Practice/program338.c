#include<stdio.h>

typedef unsigned int UINT;

//Position -- 13

int main()
{  
   UINT iNo = 0;
   UINT iMask = 0xFFFFEFFF;
   UINT iPos = 0;

   printf("Enter Number : ");
   scanf("%d", &iNo); 
   
   iNo = iNo & iMask;

   printf("Updated number is : %d\n", iNo);

   return 0;
}
