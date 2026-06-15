import java.util.*;

//Input : 11
//Output : *  *  *  #  #  #  *  *  *  #  # 

public class program188
{
   public static void Display(int iNo)
   {
      int i = 0, j = 0;
      
      for(i = 1; i <= iNo; i++)
      {
         if(i % 4 == 0)
         {
            for(j = 1; j <= 3; j++)
            {
               System.out.print("#\t");
            }
         }
         else
         {
            System.out.print("*\t");
         }
      }
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