#include<stdio.h>
#pragma pack(1)

struct node
{
   int data;            //4 byte
   struct node * next;          //8 byte
};

typedef struct node NODE;
typedef struct node * PNODE;

int Count(PNODE first)     //Call by Value
{
   int iCount = 0;
   while (first != NULL)
   {
      iCount++;
      first = first->next;
   }
   return iCount;
}
int main()
{
   PNODE head = NULL;
   PNODE temp = NULL;      //temporary pointer to use in program so that the head will remain safe
   
   int iRet = 0;

   NODE obj1, obj2, obj3;
   head = &obj1;
   
   obj1.data = 11;
   obj1.next = &obj2;  
   
   obj2.data = 21;
   obj2.next = &obj3;
   
   obj3.data = 51;
   obj3.next = NULL;
   
   temp = head;
   
   iRet = Count(head);      //Count(100) - address stored in head pointer which is pointing to 1st node

   printf("Number of nodes are : %d\n", iRet);

   return 0;
}
