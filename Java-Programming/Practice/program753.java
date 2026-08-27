import java.util.*;

class program753
{
   public static void main(String A[])
   {
      int i = 0;

      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter string : ");
      String str = sobj.nextLine();

      str = str.trim();

      str = str.replaceAll("\\s+", " ");

      char Arr[] = str.toCharArray();

      int Frequency[] = new int[26];

      // 97  98  99  100 101  102  103  104  
      // a    b   c   d   e    f    g    h    -- ascii
      // 0    0   0   0   0    0    0    0    -- Value

      // 0    1   2   3   4    5    6    7 -- Index no

      for(i = 0; i < Arr.length; i++)
      {
         if(Arr[i] >= 'a' && Arr[i] <= 'z')
         {
               Frequency[(int)Arr[i] - 97]++;
         }
      } 

      System.out.println("Frequency of each letter is : ");

      for(i = 0 ;i < Frequency.length; i++)
      {
         System.out.println((char)(i + 97)+" : "+Frequency[i]);
      }

      sobj.close();
   }
}