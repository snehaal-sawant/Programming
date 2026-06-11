class Logic
{
   void printDigits(int num)
   {
      while(num > 0)
      {
         int digit = num % 10;
         System.out.print(digit + "\t");
         num = num / 10;
      }
   }
}
class Assignment_19_4
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.printDigits(9876);
   }
}
