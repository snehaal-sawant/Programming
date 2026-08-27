import java.util.*;

class program734
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

      sobj.close();
   }

}
