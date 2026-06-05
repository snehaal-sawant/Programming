//Type 1

import java.util.Scanner;

class program39
{
   public static void main(String A[])
   {
      int iValue = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number to check if divisible by 3 & 5 : ");
      iValue = sobj.nextInt();
      
      if((iValue % 3 == 0) && (iValue % 5 == 0))
      {
         System.out.println("Entered number is divisible by 3 & 5");
      }
      else
      {
         System.out.println("Entered number is not divisible by 3 & 5");      
      }
      sobj.close();
   }
   
}
