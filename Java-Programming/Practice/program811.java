import java.io.*;

class program811           //Final code - Find whether the number is strong or not
{
   public static void main(String[] args) throws Exception
   {
      int iFact[] = {1,1,2,6,24,120,720,5040,40320,362880};       //Factors of all digits 0-9 are stored in this array

      int iNo = 0;
      long iSum = 0;
      int iTemp = 0, iDigit = 0;

      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number : ");
      iNo = Integer.parseInt(bobj.readLine());

      iTemp = iNo;
      while(iNo != 0)
      {
         iDigit = iNo % 10;

         iSum = iSum + iFact[iDigit];
         iNo = iNo / 10;

         if(iSum > iTemp)
         {
            break;
         }
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
