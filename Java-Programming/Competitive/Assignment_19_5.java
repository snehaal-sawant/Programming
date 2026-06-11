class Logic
{
   void calculatePower(int base, int exp)
   {
      int result = 1;
      for(int i = 1; i <= exp; i++)
      {
         result = result * base;
      }
      System.out.println(base + " raised to the power of " + exp + " is: " + result);
   }
}
class Assignment_19_5
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.calculatePower(2, 5);
   }
}
