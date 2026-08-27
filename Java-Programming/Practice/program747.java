//Input : my name is snehal
//Output  : ym eman si lahens

import java.util.*;

class program747
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
      StringBuffer FinalStr = new StringBuffer("");

      for(int i = 0; i < Tokens.length; i++)
      {
         sb = new StringBuffer(Tokens[i]);
         sb = sb.reverse();
         FinalStr = FinalStr.append(sb);
         FinalStr = FinalStr.append(" ");
      }

      String Output = new String(FinalStr);
      Output = Output.trim();
      System.out.println(Output);
      sobj.close();
   }
}
