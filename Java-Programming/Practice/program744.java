//Input : my name is snehal
//Output : lahenssiemanym

import java.util.*;

class program744
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;               //String is immutable so it doesn't contain in-built reverse function

      System.out.println("Enter the string : ");
      str = sobj.nextLine();

      StringBuffer sb = new StringBuffer(str);

      System.out.println(sb.reverse());  
      sobj.close();
   }
}
