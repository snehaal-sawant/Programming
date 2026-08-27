#include<iostream>
using namespace std;

#pragma pack(1)

template <class T>
struct node
{
   T data;
   struct node<T>* next;
};

template <class T>
class SinglyCL                
{
   private:
      struct node<T>* first;
      struct node<T>* last;
      int iCount;

   public:
      SinglyCL();

      int Count();
      void Display();

      void InsertFirst(T iNo);
      void InsertLast(T iNo);
      void InsertAtPos(T iNo, int iPos);

      void DeleteFirst();
      void DeleteLast();
      void DeleteAtPos(int iPos);
};

template <class T>
SinglyCL<T> :: SinglyCL()
{
   this->first = NULL;
   this->last = NULL;
   this->iCount = 0;
}

template <class T>
int SinglyCL<T> :: Count()
{
   return this->iCount;
}

template <class T>
void SinglyCL<T> :: Display()
{
   struct node<T>* temp = NULL;

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

template <class T>
void SinglyCL<T> :: InsertFirst(T iNo)
{
   struct node<T>* newn = NULL;
   
   newn = new struct node<T>;

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
template <class T>
void SinglyCL<T> :: InsertLast(T iNo)
{
   struct node<T>* newn = NULL;
   
   newn = new struct node<T>;

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
template <class T>
void SinglyCL<T> :: InsertAtPos(T iNo, int iPos)
{
   struct node<T>* newn = NULL;
   struct node<T>* temp = NULL;
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
      newn = new struct node<T>;        //Memory Allocated

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

template <class T>
void SinglyCL<T> :: DeleteFirst()
{
   struct node<T>* temp = NULL;

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
   this->last->next = this->first;
   this->iCount--;
}
template <class T>
void SinglyCL<T> :: DeleteLast()
{
   struct node<T>* temp = NULL;

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
   }
   this->last->next = this->first;
   this->iCount--;
}

template <class T>
void SinglyCL<T> :: DeleteAtPos(int iPos)
{
   struct node<T>* temp = NULL;
   struct node<T>* target = NULL;
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
   
   SinglyCL<int> sobj;

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
