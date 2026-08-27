//Input -- "my name is snehal"
//Output -- "My Name Is Snehal"

//Input -- "my NAME is SnEhaL"
//Output -- "My Name Is Snehal"


import java.util.*;

class program740
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;

      System.out.println("Enter the string : ");
      str = sobj.nextLine();

      str = str.trim();

      str = str.replaceAll("\\s+", " ");

      str = str.toLowerCase();

      char Arr[] = str.toCharArray();

      for(int i = 0; i < Arr.length; i++)
      {
         System.out.println(Arr[i]);
      }

      sobj.close();
   }
}
