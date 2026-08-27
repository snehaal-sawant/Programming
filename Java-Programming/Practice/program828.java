import java.io.*;

class program828                 //Automorphic number using endswith method of String class
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0, iSquare = 0;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number: ");
      iNo = Integer.parseInt(bobj.readLine());

      String strNo = String.valueOf(iNo);              //Convert no to string 

      iSquare = iNo * iNo;
      
      String strSquare = String.valueOf(iSquare);     //COnvert square to string

      if(strSquare.endsWith(strNo))
      {
         System.out.println("It is automorphic number");
      }
      else
      {
         System.out.println("It is not automorphic number");
      }
   }  
}
