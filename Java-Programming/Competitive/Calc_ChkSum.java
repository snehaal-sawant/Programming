// Write java program to accept file name from user calculate checksum of
// that file and display on screen.

import java.io.*;
import java.util.Scanner;

public class Calc_ChkSum
{
   public static void main(String args[])
   {
      Scanner sobj = new Scanner(System.in);

      String FileName = null;
      long Checksum = 0;
      int iRet = 0;

      System.out.print("Enter source file name: ");
      FileName = sobj.nextLine();
      
      File fobj = new File(FileName);
      byte Buffer[] = new byte[1024];
      
      try
      { 
         if(fobj.exists() && fobj.isFile())
         {
            FileInputStream fiobj = new FileInputStream(fobj);

            while ((iRet = fiobj.read(Buffer)) != -1) 
            {
               for(int i = 0; i < iRet; i++)
               {
                  Checksum = Checksum + (Buffer[i]);  
               }
            }
            fiobj.close();

            System.out.println("Checksum of file : " + Checksum);
         }
         else
         {
            System.out.println("Invalid File.");
         }   
      }
      catch(FileNotFoundException e)
      {
         System.out.println("Unable to create a new file.");
      }
      catch(Exception e)
      {
         System.out.println("Error : " + e);
      }
      sobj.close();
   }
}