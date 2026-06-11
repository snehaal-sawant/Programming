class Logic
{
   void findSmallestDigit(int num)
   {
      int smallest = 9; // Initialize to maximum possible digit
      System.out.println("Digits of " + num + " are:");
      while(num > 0)
      {
         int digit = num % 10;
         System.out.print(digit + "\t");
         if(digit < smallest)
         {
            smallest = digit;
         }
         num = num / 10;
      }
      System.out.println("\nSmallest digit is: " + smallest);
   }
}
class Assignment_20_5
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.findSmallestDigit(45872);
   }
}

