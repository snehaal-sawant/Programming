#include<stdio.h>
#pragma pack(1)

struct node
{
   int data;            //4 byte
   struct node *next;   //8 byte 
};

int main()
{
   struct node obj;

   obj.data = 11;
   obj.next = NULL;
   
   printf("%d\n",obj.data);

   return 0;
}
