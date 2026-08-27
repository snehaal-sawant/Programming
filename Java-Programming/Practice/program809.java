// 5!

// 5 * 4 * 3 * 2 * 1
// 1 * 2 * 3 * 4 * 5

import java.io.*;

class program809
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0;
      long iFact = 1, iSum = 0;
      int iTemp = 0, iDigit = 0;

      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number : ");
      iNo = Integer.parseInt(bobj.readLine());

      iTemp = iNo;
      while(iNo != 0)         //There is one logic missing in this code bcoz of which it will not give the correct output - Its added in the next file
      {
         iDigit = iNo % 10;

         while(iDigit != 0)
         {
            iFact = iFact * iDigit;
            iDigit--;
         }

         iSum = iSum + iFact;
         iNo = iNo / 10;
      }

      if(iSum == iTemp)
      {
         System.out.println("It is a strong number");
      }
      else
      {
         System.out.println("It is not a strong number");
      }
   
   }  
}
