
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

   public void InsertLast(int iNo)
   {
      node newn = new node(iNo);
      node temp = null;
      temp = first;

      if(temp == null)
      {
         first = newn;
      }
      else 
      {
         
      }
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

}
class program905
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

      iRet = sobj.Count();
      System.out.println("Number of elements are: "+iRet);
   }
}