import java.util.*;

class program775
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter String : ");
      String str = sobj.nextLine();

      str = str.trim();
      str = str.replaceAll("\\s+", " ");
      
      String Tokens[] = str.split(" ");
      
      for(String s : Tokens)
      {
         System.out.println(s);
      }
      sobj.close();
   }  
}
