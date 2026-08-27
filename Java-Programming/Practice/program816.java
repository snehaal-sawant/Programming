import java.io.*;

class program816
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number: ");
      iNo = Integer.parseInt(bobj.readLine());

      String str = String.valueOf(iNo);         //Converted the number to string 
      
      System.out.println("Number of digits are : "+str.length());     //got the count of digits using  length method of string
   }  
}
