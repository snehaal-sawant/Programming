#include<stdio.h>

#pragma pack(1)
struct node
{
   int data;            //4 byte
   struct node *next;   //8 byte
};

int main()
{
   struct node obj1, obj2;

   obj1.data = 11;
   obj1.next = &obj2;   //holds the address of next obj2
   
   obj2.data = 21;
   obj2.next = NULL;

   printf("%d\n",obj1.data);
   printf("%d\n",obj2.data);

   return 0;
}
