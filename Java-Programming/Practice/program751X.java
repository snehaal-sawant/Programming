//Input : my name is snehal city name is abhinav city name is pune
//Output  : 3 - count the number of times accepted word occurs 

import java.util.*;

class program751
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;               

      System.out.println("Enter the string : ");
      str = sobj.nextLine();
     
      str = str.trim();
      str = str.replaceAll("\\s+", " ");
      String Tokens[] = str.split(" ");

      //StringBuffer FinalStr = new StringBuffer();

      for(int i = 0; i < Tokens.length; i++)
      {
         if(Tokens[i].equals("India"))
         {
            Tokens[i] = Tokens[i].replace("India", "Bharat");
            //continue;     //If we  write continue here it removes the word india in below printf from the string                          
         }
         System.out.print(Tokens[i]+" ");
      }

      sobj.close();
   }
}
