import java.util.*;

class program735
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;

      System.out.println("Enter the string : ");
      str = sobj.nextLine();

      String Tokens[] = null;
      
      str = str.trim();

      str = str.replaceAll("\\s+", " ");

      Tokens = str.split(" ");

      System.out.println("Number of words are : "+Tokens.length);

      for(int i = 0; i < Tokens.length; i++)
      {
         System.out.println(Tokens[i] + " : " + Tokens[i].length());
      }

      sobj.close();
   }

}
