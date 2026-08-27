//Input : my name is snehal
//Output  : ym eman si lahens
import java.util.*;

class StringX
{
   public static String WordReverse(String str)
   {
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

      return Output;
   }   
}

class program748
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;

      System.out.println("Enter the string : ");
      str = sobj.nextLine();

      //StringX strobj = new StringX();
      String sret = StringX.WordReverse(str);

      System.out.println("Reverse String is : "+sret);

      sobj.close();
   }
}
