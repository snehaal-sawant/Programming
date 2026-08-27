//Input : my name is snehal city name is abhinav city name is pune
//Output  : 3 - count the number of times accepted word occurs 

import java.util.*;

class program749
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;               

      System.out.println("Enter the string : ");
      str = sobj.nextLine();
      int iCount = 0;
      str = str.trim();
      str = str.replaceAll("\\s+", " ");
      String Tokens[] = str.split(" ");

      for(int i = 0; i < Tokens.length; i++)
      {
         if(Tokens[i].equals("name"))
         {
            iCount++;
         }
      }

      System.out.println("Frequency of word is : "+iCount);
      sobj.close();
   }
}
