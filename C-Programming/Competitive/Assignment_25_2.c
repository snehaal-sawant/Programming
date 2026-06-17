#include<stdio.h>

void Pattern(int iRow, int iCol)
{
   int i = 0, j = 0, ieven = 0, iodd = 0;

   for(i = 1; i <= iRow; i++)
   {
      if((i % 2) == 0)
      {
         for (j = 1, ieven = 1; j <= iCol; j++, ieven+=2)
         {
            printf("%d\t", ieven);
         }
      }
      else
      {
         for (j = 1, iodd = 2; j <= iCol; j++, iodd+=2)
         {
            printf("%d\t", iodd);
         }         
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