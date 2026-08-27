import java.io.*;

class program821                       //Pallindrome number
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0, iRev = 0, iDigit;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number: ");
      iNo = Integer.parseInt(bobj.readLine());

      while(iNo != 0)
      {
         iDigit = iNo % 10;
         iRev = iRev * 10 + iDigit;       //Get the digits in the reverse order
         iNo = iNo/10;
      }

      System.out.println(iRev);
   }  
}
