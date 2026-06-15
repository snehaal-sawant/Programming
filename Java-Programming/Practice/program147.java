import java.util.*;

class ArrayX 
{
   public void Update(int Arr[])
   {
      int iCnt = 0;

      for(iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         Arr[iCnt]++;
      }
   }
}

public class program147
{
   public static void main(String A[]) 
   {
      Scanner sobj = new Scanner(System.in);
      int iCnt = 0;

      System.out.println("Enter Number of Elements : ");
      int iLength = sobj.nextInt();

      int Brr[] = new int[iLength];

      System.out.println("Enter the Elements : ");

      for(iCnt = 0; iCnt < Brr.length; iCnt++)
      {
         Brr[iCnt] = sobj.nextInt();
      }
      
      System.out.println("Array elements before function call :");
      for(iCnt = 0; iCnt < Brr.length; iCnt++)
      {
         System.out.println(Brr[iCnt]);
      }

      ArrayX aobj = new ArrayX();
      aobj.Update(Brr);

      System.out.println("Array elements after function call :");
      for(iCnt = 0; iCnt < Brr.length; iCnt++)
      {
         System.out.println(Brr[iCnt]);
      }
      
      Brr = null;
      System.gc();
      
      sobj.close();
   }
}
