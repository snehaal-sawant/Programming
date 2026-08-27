import java.util.*;

class program739
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

      String temp = null;
      temp = Tokens[0];

      for(int i = 0; i < Tokens.length; i++)
      {
         if(Tokens[i].length() > temp.length())
         {
            temp = Tokens[i];
         }
      }    
      System.out.println("Largest word is "+temp+ " having length " + temp.length());

      sobj.close();
   }

}
