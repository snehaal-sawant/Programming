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
   public:
      PNODE first;
      int iCount;

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

   sobj.first = NULL; // Drawback - it will lose the complete linklist if its initialized NULL by anyone
   sobj.iCount = 15;  // Drawback - it will mess the number of nodes in the link list

   return 0;
}