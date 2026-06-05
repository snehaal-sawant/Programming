//Type 2

import java.util.Scanner;

class program43
{
   public static boolean CheckDivisible(int iNo)
   {
      if((iNo % 3 == 0) && (iNo % 5 == 0))
      {
         return true;
      }
      else
      {
         return false;      
      }
   }
   public static void main(String A[])
   {
      int iValue = 0;

      boolean bRet = false;  //false is by default 0 - so 

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number to check if divisible by 3 & 5 : ");
      iValue = sobj.nextInt();
      
      bRet = CheckDivisible(iValue);      

      if(bRet == true)
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
