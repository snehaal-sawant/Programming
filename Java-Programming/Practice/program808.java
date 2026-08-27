import java.io.*;

class program808
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0;
      long iFact = 1;             //Declared as long as we are going to get a bigger number in factorial

      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number : ");
      iNo = Integer.parseInt(bobj.readLine());

      while(iNo != 0)
      {
         iFact = iFact * iNo;
         iNo--;
      }

      System.out.println("Factorial is : "+iFact);
   }  
}
