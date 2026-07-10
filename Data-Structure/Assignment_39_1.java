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
   
   public boolean SearchNumber(int iNo)
   {
      Node temp = first;
      while (temp != null)
      {
         if (temp.data == iNo)
         {
            return true;
         }
         temp = temp.next;
      }
      return false;
   }
}

class Assignment_39_1
{
   public static void main(String A[]) 
   {
      int iValue = 0;
      boolean bRet = false;

      SinglyLinkedList ssobj = new SinglyLinkedList();

      ssobj.InsertLast(10);
      ssobj.InsertLast(20);
      ssobj.InsertLast(30);
      ssobj.InsertLast(40);
      ssobj.InsertLast(50);

      ssobj.Display();

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number to search : ");
      iValue = sobj.nextInt();

      bRet = ssobj.SearchNumber(iValue);
      if(bRet == true)
      {
         System.out.println("Number is present in the list");
      }
      else
      {
         System.out.println("Number is not present in the list");
      }

      sobj.close();
   }

}