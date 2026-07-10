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

   public void DisplayEven()
   {
      Node temp = first;
      while(temp != null)
      {
         if(temp.data % 2 == 0)
         {
            System.out.print("| " + temp.data + " | -> ");
         }
         temp = temp.next;
      }
      System.out.println("NULL");
   }
}

class Assignment_39_5
{
   public static void main(String A[])
   {
      SinglyLinkedList ssobj = new SinglyLinkedList();

      ssobj.InsertLast(21);
      ssobj.InsertLast(10);
      ssobj.InsertLast(51);
      ssobj.InsertLast(102);
      ssobj.InsertLast(111);

      ssobj.Display();

      ssobj.DisplayEven();
   }
}