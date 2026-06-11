class Logic
{
   void sumEvenNumbers(int num)
   {
      int sum = 0;
      System.out.println("Even numbers up to " + num + " are:");
      for(int i = 2; i < num; i += 2)
      {
         System.out.print(i + "\t");
         sum = sum + i;
      }
      System.out.println("\nSum of even numbers is: " + sum);
   }
}
class Assignment_20_1
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.sumEvenNumbers(10);
   }
}

