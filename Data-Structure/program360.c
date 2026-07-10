#include<stdio.h>
#pragma pack(1)

typedef struct node NODE;
typedef struct node * PNODE;

struct node
{
   int data;         //4 byte
   PNODE next;       //8 byte
};

int main()
{
   PNODE head = NULL;
   PNODE temp = NULL;         //temporary pointer to use in program so that the head will remain safe
   NODE obj1, obj2, obj3;

   head = &obj1;
   
   obj1.data = 11;
   obj1.next = &obj2;  
   
   obj2.data = 21;
   obj2.next = &obj3;
   
   obj3.data = 51;
   obj3.next = NULL;
   
   temp = head;

   printf("1 - %d\n", temp->data);              // data of 1st object
   printf("2 - %d\n", temp->next->data);        // data of 2nd object
   printf("3 - %d\n", temp->next->next->data);  // data of 3rd object

   return 0;
}
