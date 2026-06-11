
class Logic
{
   void sumOfDigits(int No)
   {
      int sum =0, iDigit = 0;
      while(No != 0)
      {
         iDigit = No % 10;
         sum = sum + iDigit;
         No = No / 10;
      }
      System.out.println("Sum of digits is : "+sum);
   }
}
class Assignment_17_1
{
   public static void main(String args[])
   {
      Logic obj = new Logic();
      obj.sumOfDigits(1234);
   }
}