class Logic
{
   void checkLeapYear(int num)
   {
      if(num % 4 == 0)
      {
         System.out.println("Number is a leap year");
      }
      else
      {
         System.out.println("Number is not a leap year");
      }
   }
}
class Assignment_19_1
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.checkLeapYear(2024);
   }
}
