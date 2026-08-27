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

      StringBuffer FinalStr = new StringBuffer();

      for(int i = 0; i < Tokens.length; i++)
      {
         if(Tokens[i].equals("india"))
         {
            FinalStr = FinalStr.append("bharat");
            FinalStr = FinalStr.append(" ");
            continue;                                 //returns back to for loop
         }
         FinalStr = FinalStr.append(Tokens[i]);       //new string created
      }
      //India is my country I live in India
      
      //india is

      //Bharat is  

      String Output = new String(FinalStr);
      Output = Output.trim();
      System.out.println(Output);

      sobj.close();
   }
}
