#include <stdio.h>
#include <stdlib.h>

struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int CountOdd(PNODE first)
{
   int iCount = 0;
   while (first != NULL)
   {
      if(first->data % 2 != 0)
      {
         iCount++;
      }
      first = first->next;
   }
   return iCount;
}

void InsertFirst(PPNODE first, int iNo)
{
   PNODE newn = NULL;

   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = iNo;
   newn->next = NULL;

   if(*first == NULL)
   {
      *first = newn;
   }
   else
   {
      newn->next = *first;
      *first = newn;
   }
}

int main()
{
   PNODE head = NULL;
   int iRet = 0;

   InsertFirst(&head,122);
   InsertFirst(&head,102);
   InsertFirst(&head,51);
   InsertFirst(&head,21);
   InsertFirst(&head,11);

   iRet = CountOdd(head);
   printf("Odd numbers are: %d", iRet);

   return 0;
}