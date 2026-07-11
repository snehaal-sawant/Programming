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

class SinglyLL          //Singly Linear Linklist 
{
   private:
      PNODE first;
      int iCount; 

   public:
      SinglyLL();
      void Display();
      int Count();
      void InsertFirst(int iNo);
      void InsertLast(int iNo);
      void InsertAtPos(int iNo, int iPos);
      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};

SinglyLL :: SinglyLL()
{
   this->first = NULL;
   this->iCount = 0;
}

void SinglyLL :: Display()
{
   PNODE temp = NULL;
   temp = this->first;

   while(temp != NULL)
   {
      cout << "| "<<temp->data<<" | -> ";
      temp = temp->next;
   }

   cout<<"NULL"<<endl;
}

int SinglyLL :: Count()
{
   return this->iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
   PNODE newn = NULL;

   newn = new NODE;        //Memory Allocated
   newn->data = iNo;
   newn->next = NULL;

   if(this->first == NULL)
   {
      this->first = newn;
   }
   else
   {
      newn->next = this->first;
      this->first=newn;
   }

   this->iCount++;            //IMp - Increments counter by 1 whenever new node is inserted
}

void SinglyLL :: InsertLast(int iNo)
{
   PNODE newn = NULL;

   newn = new NODE;        //Memory Allocated
   newn->data = iNo;
   newn->next = NULL;

   if(this->first == NULL)
   {
      this->first = newn;
   }
   else
   {
      
   }
   
   this->iCount++;
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{}

void SinglyLL :: DeleteFirst()
{}

void SinglyLL :: DeleteLast()
{}

void SinglyLL :: DeleteAtPos(int iPos)
{}

int main()
{
   int iRet = 0;

   SinglyLL sobj;

   sobj.InsertFirst(51);
   sobj.InsertFirst(21);
   sobj.InsertFirst(11);

   sobj.Display();
   
   iRet = sobj.Count();

   cout<<"Number of elements are : "<< iRet << endl;

   return 0;
}