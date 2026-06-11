class Logic
{
   void findLargestDigit(int num)
   {
      int largest = 0;
      System.out.println("Digits of " + num + " are:");
      while(num > 0)
      {
         int digit = num % 10;
         System.out.print(digit + "\t");
         if(digit > largest)
         {
            largest = digit;
         }
         num = num / 10;
      }
      System.out.println("\nLargest digit is: " + largest);
   }
}
class Assignment_20_4
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.findLargestDigit(83429);
   }
}

