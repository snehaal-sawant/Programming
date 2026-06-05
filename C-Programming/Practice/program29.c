#include<stdio.h>

void Display(int iNo)
{
   //Updater  - To convert the neg number to positive
   if(iNo < 0)
   {
      iNo = -(iNo);
   }

   int iCnt = 0;

   for(iCnt = 1; iCnt<=iNo; iCnt++)
   {
      printf("Sarvadnya Shree Chakradhar Swami ki Jay...\n");
   }
}

int main()
{
   int iValue = 0;

   printf("Enter the frequency : ");
   scanf("%d", &iValue);  

   Display(iValue);

   return 0;
}