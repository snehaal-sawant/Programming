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

void DisplayEven(PNODE first)
{
   while (first != NULL)
   {
      if(first->data % 2 == 0)
      {
         printf("%d\n", first->data);
      }
      first = first->next;
   }
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

   InsertFirst(&head,20);
   InsertFirst(&head,11);
   InsertFirst(&head,54);
   InsertFirst(&head,21);
   InsertFirst(&head,16);

   DisplayEven(head);

   return 0;
}