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

class SinglyLL          //Singly Linear Linklist
{
   private:
      PNODE first;
      int iCount;

   public:
      SinglyLL()
      {
         this->first = NULL;
         this->iCount = 0;
      }
};

int main()
{
   SinglyLL sobj;

   //5 nodes

   sobj.first = NULL; // Error
   sobj.iCount = 15;  // Error

   return 0;
}