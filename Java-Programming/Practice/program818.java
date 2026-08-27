import java.io.*;

class program818
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0, iDigit = 0, iSum = 0;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number: ");
      iNo = Integer.parseInt(bobj.readLine());

      while(iNo != 0)
      {
         iDigit = iNo % 10;
         iSum = iSum + iDigit;
         iNo = iNo / 10;
      }
      
      System.out.println("Summation is : "+iSum);
   }  
}
