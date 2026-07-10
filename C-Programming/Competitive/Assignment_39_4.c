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

int Frequency(PNODE first, int iNo)
{
   int iCount = 0;
   while (first != NULL)
   {
      if(first->data == iNo)
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

   InsertFirst(&head,21);
   InsertFirst(&head,11);
   InsertFirst(&head,51);
   InsertFirst(&head,21);
   InsertFirst(&head,11);

   printf("Enter a number : ");
   scanf("%d", &iValue);

   iRet = Frequency(head, iValue);
   printf("Frequency of a number is : %d", iRet);

   return 0;
}