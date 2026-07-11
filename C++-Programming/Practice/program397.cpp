#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
   int data;
   struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
   PNODE newn = NULL;

   //newn = (PNODE)malloc(sizeof(NODE)); --> Memory allocation in C
   newn = new NODE;           // Memory allocation in C++
   newn -> data = 11;
   newn -> next = NULL;

   cout<<newn->data<<endl;
   
   //free(newn);              //Memory deallocation in C
   delete newn;               //Memory deallocation in C++

   return 0;
}