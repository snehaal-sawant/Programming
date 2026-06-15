import java.util.*;

//Input : 7
//Output : a   b  c  d  e  f  g
//Using ASCII Value - Bad programming practice
public class program181
{
   public static void Display(int iNo)
   {
      int iCnt = 0;
      char ch = '\0';
      
      for(iCnt = 1, ch = 97; iCnt <= iNo; iCnt++, ch++)
      { 
         System.out.print(ch+"\t");
      }
      System.out.println();
   }
   public static void main(String A[]) 
   {
      Scanner sobj = new Scanner(System.in);
      int iValue = 0;
      
      System.out.println("Enter number of elements : ");
      iValue = sobj.nextInt();

      Display(iValue);

      sobj.close();
   }
}