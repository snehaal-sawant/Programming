class Logic
{
   void productOfDigits(int num)
   {
      int product = 1;
      System.out.println("Digits of " + num + " are:");
      while(num > 0)
      {
         int digit = num % 10;
         System.out.print(digit + "\t");
         product = product * digit;
         num = num / 10;
      }
      System.out.println("\nProduct of digits is: " + product);
   }
}
class Assignment_21_1
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.productOfDigits(234);
   }
}

