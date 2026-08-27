import java.io.*;

class program823              //Automorphic number
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0, iTemp = 0, iSquare = 0, iDigit = 0, iCount = 0;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number: ");
      iNo = Integer.parseInt(bobj.readLine());

      iTemp = iNo;

      iSquare = iNo * iNo;

      while(iNo != 0)
      {
         iCount++;
         iNo = iNo/10;
      }
   }  
}
