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

int LastOccurance(PNODE first, int iNo)
{
   PNODE temp = NULL;
   int iCount = 0;
   int lastPos = 1;
   while (temp != NULL)
   {
      if(first->data == iNo)
      {
         lastPos = iCount++;
      }
      temp = temp->next;
   }
   iCount++;

   return iCount;
   
}

void Display(PNODE first)
{
   while (first != NULL)
   {
      printf("| %d | -> ", first->data);
      first = first->next;
   }
   printf("NULL\n");
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
   int iRet = 0, iValue = 0;

   InsertFirst(&head,21);
   InsertFirst(&head,11);
   InsertFirst(&head,54);
   InsertFirst(&head,21);
   InsertFirst(&head,16);

   Display(head);

   printf("Enter a number : ");
   scanf("%d", &iValue);

   iRet = LastOccurance(head, iValue);

   printf("Last occurrence of %d is at position %d\n", iValue, iRet);

   return 0;
}