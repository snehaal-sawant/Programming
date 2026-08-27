import java.util.*;

class program737
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

      int iMax = 0;
      String temp = null;

      for(int i = 0; i < Tokens.length; i++)
      {
         if(Tokens[i].length() >= iMax)
         {
            iMax = Tokens[i].length();
            temp = Tokens[i];
         }
      }    
      System.out.println("Largest word is "+temp+ " having length " + iMax);

      sobj.close();
   }

}
