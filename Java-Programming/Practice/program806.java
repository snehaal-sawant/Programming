import java.io.*;

class program806
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0;
      int iFact = 0;
      int i = 0;

      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number : ");
      iNo = Integer.parseInt(bobj.readLine());

      iFact = 1;

      for(i = iNo; i >= 1; i--)        //For loop is reversed here
      {
         iFact = iFact * i;
      }

      System.out.println("Factorial is : "+iFact);
   }  
}
