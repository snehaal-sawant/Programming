#include<stdio.h>

#pragma pack(1)
struct node
{
   int data;            //4 byte
   struct node *next;   //8 byte
};

int main()
{
   struct node obj1, obj2, obj3;

   obj1.data = 11;
   obj1.next = &obj2;   //holds the address of next obj2
   
   obj2.data = 21;
   obj2.next = &obj3;

   obj3.data = 51;
   obj3.next = NULL;

   printf("1 - %u\n", &obj1);           // address of 1st object
   printf("2 - %d\n", &obj2);           // address of 2nd object
   printf("3 - %d\n", &obj3);           // address of 2nd object

   printf("4 - %d\n", obj1.next);      // address of 2nd object
   printf("5 - %d\n", obj2.next);      // address of next object of 2nd -> Null
   printf("6 - %d\n", obj3.next);      // address of next object of 2nd -> Null

   printf("7 - %d\n", obj1.data);       //data in the 1st object obj1
   
   printf("8 - %d\n", obj1.next->data);//data in the 2nd obj as its pointed by obj1.next
   printf("9 - %d\n", obj1.next->next->data);//data in the 3rd obj as its pointed by obj1.next -> next
   printf("10 - %d\n", obj2.next->data);//data in the 3rd obj as its pointed by obj2.next

   return 0;
}
