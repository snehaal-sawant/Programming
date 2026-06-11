class Logic
{
   void printOddNumbers(int num)
   {
      System.out.println("Odd numbers up to " + num + " are:");
      for(int i = 1; i < num; i += 2)
      {
         System.out.print(i + "\t");
      }
   }
}
class Assignment_18_3
{
   public static void main(String args[])
   {
      Logic obj = new Logic();
      obj.printOddNumbers(20);
   }
}
