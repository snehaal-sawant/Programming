#include<stdio.h>

void Swap(int *Ptr1, int *Ptr)
{
   int temp = 0;

}
int main()
{  
   int i = 11;
   int j = 21;
   int temp = 0;

   temp = i;
   i = j;
   j = temp;
   
   Swap(&i,&j);

   printf("%d\n",i);
   printf("%d\n",j);
   
   return 0;
}
