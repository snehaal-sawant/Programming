
class node
{
   public int data;
   public node next;

   public node(int No)
   {
      this.data = No;
      this.next = null;
   }
}

class SinglyLL
{
   private node first;
   private int iCount;

   public SinglyLL()
   {
      this.first = null;
      this.iCount = 0;
   }

   public void InsertFirst(int iNo)
   {
      node newn = new node(iNo);

      newn.next = first;
      first = newn;

      iCount++;
   }

   public int Count()
   {
      return iCount;
   }

   public void Display()
   {
      node temp = null;

      temp = first;

      while (temp != null)
      {
         System.out.print("| " +temp.data+ "|-> ");
         temp = temp.next;
      }
      System.out.println("null");
   }

   public int MiddleElement()
   {
      int iCount = Count();
      int Middle = iCount/2;

      int i = 0;
      node temp = first;

      for(i = 1; i <= Middle; i++)
      {
         temp = temp.next;
      }
      Middle = temp.data;
      return Middle;
   }

   public int MiddleElementX()
   {
      node fast = first;
      node slow = first;

      while ((fast != null) && (fast.next != null))       //Issue
      {
         fast = fast.next.next; 
         slow = slow.next;  
      }
      return slow.data;
   }

}
class program910
{
   public static void main(String[] args) 
   {
      int iRet = 0;
      SinglyLL sobj = new SinglyLL();
      
      sobj.InsertFirst(51);
      sobj.InsertFirst(21);
      sobj.InsertFirst(11);   
      sobj.InsertFirst(101);
      sobj.InsertFirst(111);   

      sobj.Display();

      iRet = sobj.MiddleElementX();
      System.out.println("Element is : "+iRet);
   }
}