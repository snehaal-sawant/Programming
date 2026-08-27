import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.*;

class program810
{
   public static void main(String[] args) throws Exception
   {
      Scanner sobj = new Scanner(System.in);

      int iNo = 0;
      long iFact = 1, iSum = 0;
      int iTemp = 0, iDigit = 0;

      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number : ");
      iNo = Integer.parseInt(bobj.readLine());

      iTemp = iNo;
      while(iNo != 0)
      {
         iDigit = iNo % 10;

         while(iDigit != 0)
         {
            iFact = iFact * iDigit;
            iDigit--;
         }
         
         iSum = iSum + iFact;
         iNo = iNo / 10;
         iFact = 1;                 //This is IMP logic which will give the correct output
      }

      if(iSum == iTemp)
      {
         System.out.println("It is a strong number");
      }
      else
      {
         System.out.println("It is not a strong number");
      }
   
      sobj.close();
   }  
}
