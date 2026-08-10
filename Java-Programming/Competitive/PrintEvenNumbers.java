class Logic
{
   void printEvenNumbers(int num)
   {
      System.out.println("Even numbers up to " + num + " are:");
      for(int i = 2; i < num; i += 2)
      {
         System.out.print(i + "\t");
      }
   }
}
class Assignment_18_2
{
   public static void main(String args[])
   {
      Logic obj = new Logic();
      obj.printEvenNumbers(20);
   }
}
