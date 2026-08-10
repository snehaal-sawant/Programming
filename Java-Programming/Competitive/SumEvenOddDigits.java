class Logic
{
   void sumEvenOddDigits(int num)
   {
      int sumEven = 0;
      int sumOdd = 0;
      while(num > 0)
      {
         int digit = num % 10;
         if(digit % 2 == 0)
         {
            sumEven = sumEven + digit;
         }
         else
         {
            sumOdd = sumOdd + digit;
         }
         num = num / 10;
      }
      System.out.println("Sum of even digits: " + sumEven);
      System.out.println("Sum of odd digits: " + sumOdd);
   }
   
}
class Assignment_18_4
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.sumEvenOddDigits(123456);
   }
}
