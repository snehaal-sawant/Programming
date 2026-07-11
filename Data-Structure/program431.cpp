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

class SinglyCL                
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

   if(this->first==NULL && this->last == NULL)
   {
      return;
   }

   temp = this->first;
   do
   {
      cout<<"| "<<temp->data<<" | -> ";
      temp = temp->next;
   }while(this->last->next != temp);

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
{
   PNODE newn = NULL;
   PNODE temp = NULL;
   int i = 0;

   if((iPos < 1) || (iPos > iCount+1))
   {
      return;
   }
   
   if(iPos == 1)                                
   {
      this->InsertFirst(iNo);             
   }
   else if (iPos == iCount+1)                   
   {
      this->InsertLast(iNo);
   }
   else                                         
   {
      temp = this->first;
      newn = new NODE;

      newn->data = iNo;
      newn->next = NULL;

      for(i = 1; i < iPos-1; i++)               
      {
         temp = temp->next;
      }

      newn->next = temp->next;
      temp->next = newn;
   
      this->iCount++;                     
   }
}
void SinglyCL :: DeleteFirst()
{
   PNODE temp = NULL;

   if(first==NULL && last == NULL)
   {
      return;                             
   }
   else if(this->first == this->last)     
   {
      delete this->first;                 
      this->first = NULL;                 
      this->last = NULL;                  
   }
   else                                   
   {
      temp = this->first;

      this->first = this->first->next;
      delete temp;
   }
   this->iCount--;
}
void SinglyCL :: DeleteLast()
{
   PNODE temp = NULL;

   if(first == NULL && last == NULL)
   {
      return;
   }
   else if(this->first == this->last)
   {
      delete this->first;
      this->first = NULL;
      this->last = NULL;
   }
   else
   {
      temp = this->first;
      while (temp->next != this->last)
      {
         temp = temp->next;
      }

      delete this->last;
      this->last = temp;
      last->next = this->first;
   }
   this->iCount--;
}
void SinglyCL :: DeleteAtPos(int iPos)
{
   PNODE temp = NULL;
   PNODE target = NULL;
   int i = 0;

   if(iPos == 1)                                //Insert at 1st position
   {
      this->DeleteFirst();             
   }
   else if (iPos == iCount+1)                   //Insert at last position
   {
      this->DeleteLast();
   }
   else                                         //Insert at any given position in between
   {
      temp = this->first;

      for(i = 1; i < iPos-1; i++)
      {
         temp = temp->next;
      }

      target = temp->next;
      temp->next = target->next;
      delete target;

      this->iCount--;                     
   }
}

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

   sobj.InsertAtPos(105,4);

   sobj.Display();

   iRet = sobj.Count();
   cout<<"Number of Nodes are: "<<iRet<<endl;

   sobj.DeleteFirst();

   sobj.Display();
   
   iRet = sobj.Count();
   cout<<"Number of Nodes are : "<<iRet<< endl;

   sobj.DeleteLast();

   sobj.Display();
   
   iRet = sobj.Count();
   cout<<"Number of Nodes are : "<<iRet<< endl;

   sobj.DeleteAtPos(4);

   sobj.Display();
   
   iRet = sobj.Count();
   cout<<"Number of Nodes are : "<<iRet<< endl;

   return 0;
}
