import java.io.*;

class program827                 //Automorphic using multiples of 10,100,1000
{
   public static void main(String[] args) throws Exception
   {
      int iNo = 0, iSquare = 0, iTemp = 0, iCount = 0, iDen = 0;
     
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

      iDen = (int)Math.pow(10, iCount);         //This gives 10,100,1000

      if(iSquare % iDen == iTemp)                  //5776 % 10 == 76
      {
         System.out.println("It is automorphic");
      }  
      else
      {
         System.out.println("It is not automorphic");
      }
   }  
}
