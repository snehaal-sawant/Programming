#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0;
   if(iRow!=iCol)       //Filter for diagonal pattern
   {
      printf("Invalid parameters\n");
      printf("Number of rows and columns should be same\n");
      return;
   }
   for(i = 1 ; i <= iRow; i++)
   {
      for(j = i; j <= iCol; j++)
      {
         printf("*\t");  
      }
      printf("\n");
   }
}

int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter Number of Rows and Columns : ");
   scanf("%d %d", &iValue1, &iValue2);

   Pattern(iValue1, iValue2);
   
   return 0;
}