//Output :  *  *  *  *
//          *  *  *  *
//          *  *  *  *

public class program190
{
   public static void Display()
   {
      int iCnt = 0;
      
      for(iCnt = 1; iCnt <= 4; iCnt++)
      { 
         System.out.print("*\t");
      }
      System.out.println();

      for(iCnt = 1; iCnt <= 4; iCnt++)
      { 
         System.out.print("*\t");
      }
      System.out.println();

      for(iCnt = 1; iCnt <= 4; iCnt++)
      { 
         System.out.print("*\t");
      }
      System.out.println();
   }
   public static void main(String A[]) 
   {
      Display();
   }
}