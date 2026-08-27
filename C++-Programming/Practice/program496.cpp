#include<iostream>
using namespace std;

#pragma pack(1)

template <class T>
struct node
{
   T data;
   struct node<T>* next;
   struct node<T>* prev;
};

#pragma pack(1)

template <class T>
class DoublyCL                   //Doubly Circular Linked List  -- Final File
{
   private :
      struct node<T>* first;
      struct node<T>* last;
      int iCount;
   
   public:
      DoublyCL();

      void Display();
      int Count();

      void InsertFirst(T iNo);
      void InsertLast(T iNo);
      void InsertAtPos(T iNo, int iPos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};

template <class T>
DoublyCL<T> :: DoublyCL()
{
   cout << "Inside Constructor" <<endl;
   first = NULL;
   last = NULL;
   iCount = 0;
}

template <class T>
void DoublyCL<T> :: Display()
{
   cout<<" <=> ";
   while(first != NULL && last != NULL)
   {
      cout<<"| "<<first->data<<" | <=> ";
      first = first->next;

      if(first == last->next)
      {
         break;
      }
   }
   cout<<" <=> "<<endl;
}

template <class T>
int DoublyCL<T> :: Count()
{
   return iCount;
}

template <class T>
void DoublyCL<T> :: InsertFirst(T iNo)
{
   struct node<T>* newn = NULL;
   newn = new struct node<T>(iNo);

   if(first == NULL && last == NULL)
   {
      first = newn;
      last = newn;
   }
   else
   {
      newn->next = first;
      first->prev = newn;
      first = newn;
   }
}

template <class T>
void DoublyCL<T> :: InsertLast(T iNo)
{
   struct node<T>* newn = NULL;
   newn = new struct node<T>(iNo);

   if(first == NULL && last == NULL)
   {
      first = newn;
      last = newn;
   }
   else
   {
      last->next = newn;
      newn->prev = last;
      last = newn;
   }
}

template <class T>
void DoublyCL<T> :: InsertAtPos(T iNo, int iPos)
{
   struct node<T>* newn = NULL;
   newn = new struct node<T>(iNo);

   if((iPos < 1) || (iPos > iCount+1))
   {
      cout<<"Invalid Position"<<endl;
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
      struct node<T>* temp = first;

      for(int i = 1; i < iPos-1; i++)
      {
         temp = temp->next;
      }

      newn->next = temp->next;
      temp->next->prev = newn;
      temp->next = newn;
      newn->prev = temp;
   }
}

template <class T>
void DoublyCL<T> :: DeleteFirst()
{
   struct node<T>* temp = NULL;

   if(first == NULL && last == NULL)
   {
      return;
   }
   else if(first == last)
   {
      delete first;
      first = NULL;
      last = NULL;
   }
   else
   {
      temp = first;
      first = first->next;
      delete temp;
      first->prev = NULL;
   }
}

template <class T>
void DoublyCL<T> :: DeleteLast()
{
   struct node<T>* temp = NULL;

   if(first == NULL && last == NULL)
   {
      return;
   }
   else if(first == last)
   {
      delete first;
      first = NULL;
      last = NULL;
   }
   else
   {
      temp = last;
      last = last->prev;
      delete temp;
      last->next = NULL;
   }
}

template <class T>
void DoublyCL<T> :: DeleteAtPos(int iPos)
{
   struct node<T>* temp = NULL;

   if((iPos < 1) || (iPos > iCount))
   {
      cout<<"Invalid Position"<<endl;
      return;
   }

   if(iPos == 1)
   {
      this->DeleteFirst();
   }
   else if(iPos == iCount)
   {
      this->DeleteLast();
   }
   else
   {
      temp = first;

      for(int i = 1; i < iPos; i++)
      {
         temp = temp->next;
      }

      temp->prev->next = temp->next;
      temp->next->prev = temp->prev;
      delete temp;
   }
}

int main()
{
   DoublyCL<int> dobj;
   int iRet = 0;

   dobj.InsertFirst(51);
   dobj.InsertFirst(21);
   dobj.InsertFirst(11);

   dobj.InsertLast(101);
   dobj.InsertLast(111);
   dobj.InsertLast(121);

   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<<iRet<<endl;

   dobj.InsertAtPos(75,4);
   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<<iRet<<endl;

   dobj.DeleteFirst();
   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<<iRet<<endl;

   dobj.DeleteLast();
   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<<iRet<<endl;

   dobj.DeleteAtPos(4);
   dobj.Display();
   iRet = dobj.Count();
   cout<<"Number of Nodes in Linked List are :"<<iRet<<endl;

   return 0;
}