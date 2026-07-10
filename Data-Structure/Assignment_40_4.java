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

   public int CountGreater(int iNo)
   {
      Node temp = first;
      int iCount = 0;

      while(temp != null)
      {
         if(temp.data > iNo)
         {
            iCount++;
         }
         temp = temp.next;
      }
      return iCount;
   }
}

class Assignment_40_4
{
   public static void main(String A[])
   {
      int iValue = 0, iRet = 0;

      SinglyLinkedList ssobj = new SinglyLinkedList();

      ssobj.InsertLast(21);
      ssobj.InsertLast(10);
      ssobj.InsertLast(51);
      ssobj.InsertLast(21);
      ssobj.InsertLast(111);

      ssobj.Display();

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number : ");
      iValue = sobj.nextInt();

      iRet = ssobj.CountGreater(iValue);

      System.out.println("The count of greater number is : "+iRet);

      sobj.close();
   }
}