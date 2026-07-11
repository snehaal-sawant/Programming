#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
   int data;
   struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL                //Singly Circular Linked List
{
   private:
      PNODE first;
      PNODE last;
      int iCount;

   public:
      SinglyCL();

      int Count();
      void Display();

      void InsertFirst(int iNo);
      void InsertLast(int iNo);
      void InsertAtPos(int iNo, int iPos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{
   cout<<"Inside Constructor"<<endl;
   this->first = NULL;
   this->last = NULL;
   this->iCount = 0;
}

int SinglyCL :: Count()
{
   return this->iCount;
}
void SinglyCL :: Display()
{
   PNODE temp = NULL;

   if(first==NULL && last == NULL)
   {
      return;
   }

   temp = first;
   do
   {
      cout<<"| "<<temp-data<<" | -> ";
      temp = temp->next;
   }while(last->next != temp);

   cout<<"\n";
}
void SinglyCL :: InsertFirst(int iNo)
{
   PNODE newn = NULL;
   
   newn = new NODE;

   newn->data = iNo;
   newn->next = NULL;

   if(this->first == NULL && this->last == NULL)
   {
      this->first = newn;
      this->last = newn;
   }
   else
   {
      newn->next=first;
      first = newn;
   }

   this->last->next = this->first;
   this->iCount++;
}
void SinglyCL :: InsertLast(int iNo)
{
   PNODE newn = NULL;
   
   newn = new NODE;

   newn->data = iNo;
   newn->next = NULL;

   if(this->first == NULL && this->last == NULL)
   {
      this->first = newn;
      this->last = newn;
   }
   else
   {
      this->last->next = newn;
      this->last = newn;
   }
   this->last->next = this->first;
   this->iCount++;
}
void SinglyCL :: InsertAtPos(int iNo, int iPos)
{}
void SinglyCL :: DeleteFirst()
{}
void SinglyCL :: DeleteLast()
{}
void SinglyCL :: DeleteAtPos(int iPos)
{}

int main()
{
   int iRet = 0;
   
   SinglyCL sobj;

   sobj.InsertFirst(51);
   sobj.InsertFirst(21);
   sobj.InsertFirst(11);

   sobj.InsertLast(101);
   sobj.InsertLast(111);
   sobj.InsertLast(121);

   sobj.Display();

   iRet = sobj.Count();
   cout<<"Number of Nodes are: "<<iRet<<endl;

   return 0;
}