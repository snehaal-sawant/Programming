#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0, icount = 0;

   for(i = 1 ; i <= iRow; i++)
   {
      for(j = i, icount = 1; icount <= iCol; j++,icount++)
      {
         printf("%d\t",j);   
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