#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

bool Search(PNODE first, int iNo)
{
   while (first != NULL)
   {
      if(first->data == iNo)
      {
         return true;
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
   int iValue = 0;
   bool bRet = false;

   InsertFirst(&head,101);
   InsertFirst(&head,51);
   InsertFirst(&head,21);
   InsertFirst(&head,11);

   printf("Enter a number to search : ");
   scanf("%d", &iValue);

   bRet = Search(head, iValue);
   
   if (bRet)
   {
      printf("The number is present in the list.");
   }
   else
   {
      printf("The number is not present in the list.");
   }

   return 0;
}