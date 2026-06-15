import java.util.*;

//Input : 7
//Output : A   2   C    4    E    6   G

public class program187
{
   public static void Display(int iNo)
   {
      int iCnt = 0;
      char ch1 = '\0', ch2 = '\0'; 
      
      for(iCnt = 1, ch1 = 'A', ch2 = 'a'; iCnt <= iNo; iCnt++, ch1++, ch2++)
      { 
         if (iCnt % 2 == 0)
         {
            System.out.print(ch2+"\t");
         }
         else
         {
            System.out.print(ch1+"\t");
         }
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