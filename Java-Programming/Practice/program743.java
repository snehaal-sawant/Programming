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

      if(Arr[0] >= 'a' && Arr[0] <= 'z')
      {
         Arr[0] = (char)(Arr[0] - 32);
      }

      for(int i = 0; i < Arr.length; i++)
      {
         if(Arr[i] == ' ')
         {
            if(Arr[i+1] >= 'a' && Arr[i+1] <= 'z')
            {
               Arr[i+1] = (char)(Arr[i+1] - 32);
            }
         }
      }
      String output = new String(Arr);
      System.out.println("Updated String is "+output);

      sobj.close();
   }
}
