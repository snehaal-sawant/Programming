// x = 3, y = 5
// 3 * 3 * 3 * 3 * 3

import java.io.*;

class program812     
{
   public static void main(String[] args) throws Exception
   {
      int x = 0, y = 0;
      int iPower = 1;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number as a base: ");
      x = Integer.parseInt(bobj.readLine());

      System.out.println(" Enter Number as a power: ");
      y = Integer.parseInt(bobj.readLine());

      for(int i = 0; i < y; i++)
      {
         iPower = iPower * x;
      }
      System.out.println("Power is : "+iPower);
   }  
}
