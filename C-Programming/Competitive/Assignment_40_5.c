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

int CountLess(PNODE first, int iNo)
{
   int iCount = 0;
   while (first != NULL)
   {
      if(first->data < iNo)
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
   int iValue = 0, iRet = 0;

   InsertFirst(&head,25);
   InsertFirst(&head,11);
   InsertFirst(&head,54);
   InsertFirst(&head,21);
   InsertFirst(&head,16);

   printf("Enter a number : ");
   scanf("%d", &iValue);

   iRet = CountLess(head, iValue);
   printf("Less numbers are: %d", iRet);
   return 0;
}