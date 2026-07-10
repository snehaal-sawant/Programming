import java.util.*;

class Node
{
   public int data;
   public Node next;
   
   public Node(int Value)
   {
      this.data = Value;
      this.next = null;
   }
}

class SinglyLinkedList
{
   private Node first;
   
   public SinglyLinkedList()
   {
      this.first = null;
   }
   
   public void InsertLast(int iNo)
   {
      Node newn = new Node(iNo);
      if(first == null)
      {
         first = newn;
      }
      else
      {
         Node temp = first;
         while(temp.next != null)
         {
            temp = temp.next;
         }
         temp.next = newn;
      }
   }

   public void Display()
   {
      Node temp = first;
      while(temp != null)
      {
         System.out.print("| " + temp.data + " | -> ");
         temp = temp.next;
      }
      System.out.println("NULL");
   }

   public int CountOddNumbers()
   {
      int iCount = 0;
      Node temp = first;
      while(temp != null)
      {
         if(temp.data % 2 != 0)
         {
            iCount++;
         }
         temp = temp.next;
      }
      return iCount;
   }
}

class Assignment_39_3
{
   public static void main(String A[])
   {
      int iRet = 0;
      SinglyLinkedList ssobj = new SinglyLinkedList();
      ssobj.InsertLast(21);
      ssobj.InsertLast(11);
      ssobj.InsertLast(51);
      ssobj.InsertLast(101);
      ssobj.InsertLast(111);

      ssobj.Display();

      iRet = ssobj.CountOddNumbers();
      
      System.out.println("Count of odd elements in the list is : " + iRet);
   }
}