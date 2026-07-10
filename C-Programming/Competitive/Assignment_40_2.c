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

int FirstOccurance(PNODE first, int iNo)
{
   int iCount = 0;
   while (first != NULL)
   {
      iCount++;
      if(first->data == iNo)
      {
         break;
      } 
      first = first->next;
   }
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

   InsertFirst(&head,25);
   InsertFirst(&head,11);
   InsertFirst(&head,54);
   InsertFirst(&head,21);
   InsertFirst(&head,16);

   Display(head);

   printf("Enter a number : ");
   scanf("%d", &iValue);

   iRet = FirstOccurance(head, iValue);

   printf("First occurrence of %d is at position %d\n", iValue, iRet);

   return 0;
}