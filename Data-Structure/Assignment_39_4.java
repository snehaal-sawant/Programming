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

   public int Frequency(int iNo)
   {
      int iCount = 0;
      Node temp = first;
      while(temp != null)
      {
         if(temp.data == iNo)
         {
            iCount++;
         }
         temp = temp.next;
      }
      return iCount;
   }
}

class Assignment_39_4
{
   public static void main(String A[])
   {
      int iRet = 0;
      
      Scanner sobj = new Scanner(System.in);

      SinglyLinkedList ssobj = new SinglyLinkedList();
      ssobj.InsertLast(21);
      ssobj.InsertLast(11);
      ssobj.InsertLast(51);
      ssobj.InsertLast(11);
      ssobj.InsertLast(111);

      ssobj.Display();

      System.out.println("Enter the number to find frequency : ");
      int iValue = sobj.nextInt();

      iRet = ssobj.Frequency(iValue);
      System.out.println("Frequency of the number in the list is : " + iRet);

      sobj.close();
   }
}