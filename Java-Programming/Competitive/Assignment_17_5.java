class Logic
{
   void printTable(int a)
   {
      for(int i = 1; i <= 10; i++)
      {
         System.out.println(a + " * " + i + " = " + (a * i));
      }
   }
}
class Assignment_17_5
{
public static void main(String args[])
   {
      Logic obj = new Logic();
      obj.printTable(5);
   }
}