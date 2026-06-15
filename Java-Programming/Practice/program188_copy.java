import java.util.*;

//Input : 11
//Output : *  *  *  #  #  #  *  *  *  #  # 

public class program188_copy
{
   public static void Display(int iNo)
   {
      int i = 0, j = 0, icount = 0;
      
      for(i = 1; i <= iNo; i++)
      {
         for(j = 1; j <= 3; j++)
         { 
            if (i % 2 == 0)
            {
             System.out.print("#\t");
            }
            else
            {
             System.out.print("*\t");
            }
            icount++;          
            if (icount == iNo)
            {
               System.out.print("\t");
               break;
            }
         }
         if(icount == iNo)
         {
            break;
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