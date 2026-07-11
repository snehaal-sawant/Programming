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
   PNODE temp = NULL;

   newn = new NODE;        //Memory Allocated
   
   newn->data = iNo;
   newn->next = NULL;

   if(this->first == NULL)
   {
      this->first = newn;
   }
   else
   {
      temp = this->first;

      while(temp->next != NULL)
      {
         temp = temp->next;
      }

      temp->next = newn;
   }
   
   this->iCount++;
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
   int i = 0;

   PNODE temp = NULL;
   PNODE newn = NULL;

   if((iPos < 1) || (iPos > this->iCount+1))
   {
      cout << "Invalid Position"<<endl;
      return;
   }

   if(iPos == 1)
   {
      this->InsertFirst(iNo);       // Calling our own function from the same class
   }
   else if(iPos == iCount+1)
   {
      this->InsertLast(iNo);
   }
   else
   {
      newn = new NODE;

      newn->data = iNo;
      newn->next = NULL;

      temp = this->first;

      for(i = 0; i < iPos-1; i++)
      {
         temp = temp->next;
      }

      newn->next = temp->next;
      temp->next = newn;

      this->iCount++;
   }
}

void SinglyLL :: DeleteFirst()
{
   PNODE temp = NULL;

   if(this->first == NULL)
   {
      return;
   }
   else if(this->first->next == NULL)
   {
      delete this->first;
   }
   else
   {
      temp = this->first;
      this->first = this->first->next;
      delete temp;
   }
   iCount--;
}

void SinglyLL :: DeleteLast()
{
   PNODE temp = NULL;

   if(this->first == NULL)
   {
      return;
   }
   else if(this->first->next == NULL)
   {
      delete this->first;
   }
   else
   {
      temp = this->first;

      while(temp->next->next != NULL)
      {
         temp = temp->next;
      }

      delete temp->next;

      temp->next = NULL;
   }
   iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{
   int i = 0;

   PNODE temp = NULL;
   PNODE target = NULL;

   if((iPos < 1) || (iPos > this->iCount))
   {
      cout << "Invalid Position"<<endl;
      return;
   }

   if(iPos == 1)
   {
      this->DeleteFirst();       // Calling our own function from the same class
   }
   else if(iPos == iCount)
   {
      this->DeleteLast();
   }
   else
   {
      temp = this->first;
      
      for(i = 0; i < iPos-1; i++)
      {
         temp = temp->next;
      }
      
      target = temp->next;

      temp->next = target->next;          //temp->next = temp->next->next;

      delete target;

      this->iCount--;
   }
}

int main()
{
   SinglyLL sobj;

   int iChoice = 0;
   int iValue = 0;
   int iRet = 0;
   int iPosition = 0;

   while(iChoice != 9)
   {
      cout<<"---------------------------------"<<endl;
      cout<<"Enter your choice : "<<endl;
      cout<<"----------------------------------"<<endl;

      cout<<"1. Insert node at 1st position"<<endl;
      cout<<"2. Insert node at last position"<<endl;
      cout<<"3. Insert node at given position"<<endl;

      cout<<"4. Delete node at 1st position"<<endl;
      cout<<"5. Delete node at last position"<<endl;
      cout<<"6. Insert node at given position"<<endl;

      cout<<"7. Display the elements"<<endl;
      cout<<"8. Count the number of elements"<<endl;
      cout<<"9. Terminate the application"<<endl;
      cout<<"----------------------------------"<<endl;

      cin>>iChoice;

      switch (iChoice)
      {
      case 1:
         cout<<"Enter the value : "<<endl;
         cin>>iValue;
         sobj.InsertFirst(iValue);
         break;
      
      case 2:
         cout<<"Enter the value : "<<endl;
         cin>>iValue;
         sobj.InsertLast(iValue);
         break;
      
      case 3:
         cout<<"Enter the value : "<<endl;
         cin>>iValue;
         cout<<"Enter the position : "<<endl;
         cin>>iPosition;
         sobj.InsertAtPos(iValue, iPosition);
         break;
      
      case 4:
         sobj.DeleteFirst();
         break;
      
      case 5:
         sobj.DeleteLast();
         break;
      
      case 6:
         cout<<"Enter the position : "<<endl;
         cin>>iPosition;
         sobj.DeleteAtPos(iPosition);
         break;

      case 7:
         cout<<"Elements of the Linked List are : "<<endl;
         sobj.Display();
         break;

      case 8:
         iRet = sobj.Count();
         cout<<"Number of nodes are : "<< iRet <<endl;
         break;
      
      case 9:
         cout<<"Thankyou for using Marvellous Infosystems Application."<<endl;
         break;

      default:
         cout<<"Invalid Choice"<<endl;
         break;
      }
   }
   return 0;
}