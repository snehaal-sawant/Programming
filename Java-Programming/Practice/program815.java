import java.io.*;

class program815
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0, iCount = 0;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number: ");
      iNo = Integer.parseInt(bobj.readLine());

      while (iNo != 0)
      {
         iCount++;
         iNo = iNo / 10;   
      }

      System.out.println("Number of digits are : " +iCount);      
   }  
}
