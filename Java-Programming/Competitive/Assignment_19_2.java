class Logic
{
   void displayGrade(int num)
   {
      if(num >= 90)
      {
         System.out.println("Grade: A");
      }
      else if(num >= 80)
      {
         System.out.println("Grade: B");
      }
      else
      {
         System.out.println("Grade: C");
      }
   }
}
class Assignment_19_2
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.displayGrade(82);
   }
}

