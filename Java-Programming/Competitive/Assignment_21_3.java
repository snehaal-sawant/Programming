class Logic
{
   void displayFactors(int num)
   {
      System.out.println("Factors of " + num + " are:");
      
      for(int i = 1; i < num; i++)
      {
         if(num % i == 0)
         {
            System.out.print(i + "\t");
         }
      }
   }
}

class Assignment_21_3
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.displayFactors(12);
   }
}

