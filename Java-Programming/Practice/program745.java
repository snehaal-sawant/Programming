//Input : my name is snehal
//Output  : ym eman si lahens

import java.util.*;

class program745
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;               //String is immutable so it doesn't contain in-built reverse function

      System.out.println("Enter the string : ");
      str = sobj.nextLine();

      str = str.trim();
      str = str.replaceAll("\\s+", " ");
      String Tokens[] = str.split(" ");

      StringBuffer sb = null;

      for(int i = 1; i <= Tokens.length; i++)
      {
         sb = new StringBuffer(Tokens[i]);
         System.out.print(sb.reverse() + " ");
      }
      
      sobj.close();
   }
}
