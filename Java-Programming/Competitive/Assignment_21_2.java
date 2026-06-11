class Logic
{
   void countEvenOddRange(int num)
   {
      int evenCount = 0;
      int oddCount = 0;
      for(int i = 1; i <= num; i++)
      {         
         if(i % 2 == 0)
         {
            evenCount++;
         }
         else
         {
            oddCount++;
         }
      }
      System.out.println("\nEven Numbers are: " + evenCount);
      System.out.println("Odd Numbers are: " + oddCount);
   }
}

class Assignment_21_2
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.countEvenOddRange(50);
   }
}

