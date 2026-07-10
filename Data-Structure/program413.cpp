// Declare all functions inside class & define the body outside class for all functions including constructor & destructor. (Design pattern)

// Convert all functions of singly linear linked list to doubly linear linked list.

#include<iostream>
using namespace std;

#pragma pack(1)
struct node                         // Size = 20 bytes
{
   int data;
   struct node *next;
   struct node *prev;               //$
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL                      //Doubly Linear Linklist 
{                                   //Object size = 12 
   private:                         //Abstraction - Declare private data members so that 
                                    //they are not accessible outside the class
      PNODE first;                  
      int iCount; 

   public:
      DoublyLL();
      void Display();
      int Count();
      void InsertFirst(int iNo);
      void InsertLast(int iNo);
      void InsertAtPos(int iNo, int iPos);
      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};

DoublyLL :: DoublyLL()                    //return _value classname::function name()-->its constructor
                                         // so no return value
{
   this->first = NULL;
   this->iCount = 0;
}

void DoublyLL :: Display()
{
   PNODE temp = NULL;

   temp = this->first;
   cout<<"NULL <=> ";
   while(temp != NULL)                    // while loop - Type 1 - Iterates till end of last node
   {
      cout<<"| "<<temp->data<<" | <=> ";
      temp = temp->next;
   }
    cout<<"NULL"<<endl;
}

int DoublyLL :: Count()
{
   return this->iCount;
}

void DoublyLL :: InsertFirst(int iNo)
{
   PNODE newn = NULL;
   newn = new NODE;

   newn->data = iNo;
   newn->next = NULL;
   newn->prev = NULL;                  

   if(this->first == NULL)             //LL is empty
   {
      this->first = newn;
   }
   else                                // LL contains 1 or more than 1 node
   {
      newn->next = this->first;
      this->first->prev = newn;        //$
      this->first = newn;
   }
   this->iCount++;                     //Counter will increment whenever new node is added
}

void DoublyLL :: InsertLast(int iNo)
{
   PNODE temp = NULL;
   PNODE newn = NULL;
   
   newn = new NODE;

   newn->data = iNo;
   newn->next = NULL;
   newn->prev = NULL;                  

   if(this->first == NULL)             //LL is empty    
   {
      this->first = newn;
   }
   else                                //LL contains 1 node
   {
      temp = this->first;              

      while (temp->next != NULL)       //while loop - Type - 2 -- Iterates till last node
      {
         temp = temp->next;
      }
      temp->next = newn;
      newn->prev = temp;               //$
   }
   this->iCount++;                     //Counter will increment whenever new node is added
}

void DoublyLL :: InsertAtPos(int iNo, int iPos)
{
   int i = 0;
   PNODE temp = NULL;
   PNODE newn = NULL;
   
   newn = new NODE;

   newn->data = iNo;
   newn->next = NULL;
   newn->prev = NULL;            

   if ((iPos > 1) || (iPos < iCount+1))         //Filter to check correct position
   {
      cout<<"Invalid Position"<<endl;
   }
   
   if(iPos == 1)                                //Insert at 1st position
   {
      this->InsertFirst(iNo);             //Calling our own function from same class using this operator
   }
   else if (iPos == iCount+1)                   //Insert at last position
   {
      this->InsertLast(iNo);
   }
   else                                         //Insert at any given position in between
   {
      temp = this->first;

      for(i = 1; i < iPos-1; i++)               //loop to reach till the prev node of given position
      {
         temp = temp->next;
      }

      newn->next = temp->next;
      temp->next->prev = newn;            //$
      temp->next = newn;
      newn->prev = temp;                  //$

      this->iCount++;                     //Counter will increment whenever new node is added
   }
}

void DoublyLL :: DeleteFirst()
{
   PNODE temp = NULL;

   if(first == NULL)                      //LL is empty
   {
      return;                             //Return as there is no node in the LL
   }
   else if(this->first->next == NULL)     //LL contains 1 node
   {
      delete this->first;                 //delete the node
      this->first = NULL;                 //set first pointer as NULL as there was only 1 node in the LL
   }
   else                                   //LL contains 2 or more nodes
   {
      temp = this->first;

      this->first = this->first->next;
      temp->next->prev = NULL;            //$
      delete temp;
   }

   this->iCount--;                        //Counter will decrement whenever any node is deleted
}

void DoublyLL :: DeleteLast()
{
   PNODE temp = NULL;

   if(first == NULL)                      //LL is empty
   {
      return;                             //Return as there is no node in the LL
   }
   else if(this->first->next == NULL)     //LL contains 1 node
   {
      delete this->first;                 //delete the node
      this->first = NULL;                 //set first pointer as NULL as there was only 1 node in the LL
   }
   else                                   //LL contains 2 or more nodes
   {
      temp = this->first;

      while(temp->next->next != NULL)
      {
         temp = temp->next;
      }
      
      delete temp->next;
      temp->next = NULL;            //$
   }

   this->iCount--;                  //Counter will decrement whenever any node is deleted
}

void DoublyLL :: DeleteAtPos(int iPos)
{
   PNODE temp = NULL;
   int i = 0;

   if ((iPos > 1) || (iPos < iCount))         //Filter to check correct position
   {
      cout<<"Invalid Position"<<endl;
   }
   
   if(iPos == 1)                                //Delete at 1st position
   {
      this->DeleteFirst();             //Calling our own function from same class using this operator
   }
   else if (iPos == iCount)                   //Delete at last position
   {
      this->DeleteLast();
   }
   else                                         //Insert at any given position in between
   {
      temp = this->first;

      for(i = 1; i < iPos-1; i++)               //loop to reach till the prev node of given position
      {
         temp = temp->next;
      }

      temp->next = temp->next->next;
      delete temp->next->prev;
      temp->next->prev = temp;

      this->iCount--;                     //Counter will increment whenever new node is added
   }  
}

int main()
{
   DoublyLL dobj; 
   int iRet = 0;  

   dobj.InsertFirst(51);
   dobj.InsertFirst(21);
   dobj.InsertFirst(11);

   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<<iRet<<endl;

   dobj.InsertLast(101);
   dobj.InsertLast(111);
   dobj.InsertLast(121);

   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<< iRet << endl;

   dobj.InsertAtPos(151,7);

   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<< iRet << endl;

   dobj.DeleteFirst();

   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<< iRet << endl;

   dobj.DeleteLast();

   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<< iRet << endl;

   dobj.DeleteAtPos(5);

   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<< iRet << endl;

   return 0;
}