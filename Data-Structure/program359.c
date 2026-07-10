#include<stdio.h>
#pragma pack(1)

struct node
{
   int data;         //4 byte
   struct node * next;       //8 byte
};

typedef struct node NODE;
typedef struct node * PNODE;

int main()
{
   PNODE head = NULL;
   NODE obj1, obj2, obj3;

   head = &obj1;

   obj1.data = 11;
   obj1.next = &obj2;  
   
   obj2.data = 21;
   obj2.next = &obj3;

   obj3.data = 51;
   obj3.next = NULL;

   printf("1 - %d\n", head->data);              // data of 1st object
   printf("2 - %d\n", head->next->data);        // data of 2nd object
   printf("3 - %d\n", head->next->next->data);  // data of 3rd object

   return 0;
}
