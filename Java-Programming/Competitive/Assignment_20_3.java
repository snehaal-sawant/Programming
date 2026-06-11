class Logic
{
   void checkPerfect(int num)
   {
      int sum = 0;
      System.out.println("Factors of " + num + " are:");
      for(int i = 1; i < num; i++)
      {
         if(num % i == 0)
         {
            System.out.print(i + "\t");
            sum = sum + i;
         }
      }
      if(sum == num)
      {
         System.out.println("\n" + num + " is a perfect number.");
      }
      else
      {
         System.out.println("\n" + num + " is not a perfect number.");
      }
   }
}
class Assignment_20_3
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.checkPerfect(6);
   }
}

