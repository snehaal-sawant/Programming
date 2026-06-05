//Type 2

import java.util.Scanner;

class program42
{
   public static void CheckDivisible(int iNo) // if its not declared public it is considered as default
   {
      if((iNo % 3 == 0) && (iNo % 5 == 0))
      {
         System.out.println("Entered number is divisible by 3 & 5");
      }
      else
      {
         System.out.println("Entered number is not divisible by 3 & 5");      
      }
   }
   public static void main(String A[])
   {
      int iValue = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number to check if divisible by 3 & 5 : ");
      iValue = sobj.nextInt();
      
      CheckDivisible(iValue);

      sobj.close();
   }
   
}
