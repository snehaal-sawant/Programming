class Logic
{
   void displayFactors(int num)
   {
      int factCount = 0;
      System.out.println("Factors of " + num + " are:");
      
      for(int i = 1; i < num; i++)
      {
         if(num % i == 0)
         {
            System.out.print(i + "\t");
            factCount++;
         }
      }
      System.out.println("\nTotal factors: " + factCount);
   }
}

class Assignment_21_4
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.displayFactors(10);
   }
}

