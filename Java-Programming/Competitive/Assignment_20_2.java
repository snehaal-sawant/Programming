class Logic
{
   void printReverse(int num)
   {
      System.out.println("Reverse numbers up to " + num + " are:");
      for(int i = num; i >= 1; i--)
      {
         System.out.print(i + "\t");
      }
   }
}
class Assignment_20_2
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.printReverse(10);
   }
}

