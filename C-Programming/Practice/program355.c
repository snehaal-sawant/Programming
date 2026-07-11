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

   printf("%u\n", &obj1);           // address of 1st object
   printf("%d\n", &obj2);           // address of 2nd object
   printf("%d\n", obj1.next);      // address of 2nd object
   printf("%d\n", obj2.next);      // address of next object of 2nd -> Null
   printf("%d\n", obj1.next->data);//data in the 2nd obj as its pointed by obj1.next

   return 0;
}
