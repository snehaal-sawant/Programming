// x = 3, y = 5
// 3 * 3 * 3 * 3 * 3

import java.io.*;

class program813
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

      while (y != 1)             //For loop converted to while
      {
         iPower = iPower * x;
         y--;
      } 

      System.out.println(iPower);
   }  
}
