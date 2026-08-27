
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
   public node first;
   public int iCount;

   public SinglyLL()
   {
      this.first = null;
      this.iCount = 0;
   }

}
class program900
{
   public static void main(String[] args) 
   {
      SinglyLL sobj = new SinglyLL();
      
   }
}