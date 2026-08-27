

import java.util.*;

class program753
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);
      String str = null;               

      System.out.println("Enter the string : ");
      str = sobj.nextLine();
     
      str = str.trim();
      str = str.replaceAll("\\s+", " ");
      
      char Arr[] = str.toCharArray();

      int Frequency[] = new int[26];
      int i = 0;

      for(i = 0; i < Arr.length;i++)
      {
         if(Arr[i] >= 'a' && Arr[i] <= 'z')
         {
            Frequency[Arr[i] - 97]++;
         }
      }
      System.out.println("Frequency of each letter is : ");

      for(i = 0; i < Frequency.length;i++)
      {
         System.out.println(Arr[i]+" : "+(char)(i + 97)+" : "+Frequency[i]);
      }
      sobj.close();
   }
}
