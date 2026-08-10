// Write java program to accept two file names from user and open first
// file and create new file (Second name) and copy the data from first file into
// newly created file.

import java.io.*;
import java.util.Scanner;

public class Copy_Data
{
   public static void main(String args[])
   {
      String SrcFileName = null;
      String DestFileName = null;
      
      File fobjsrc = null;
      File fobjdest = null;
      int iRet = 0;

      FileInputStream fiobj = null;
      FileOutputStream foobj = null;

      Scanner sobj = new Scanner(System.in);

      System.out.print("Enter source file name: ");
      SrcFileName = sobj.nextLine();

      System.out.print("Enter the destination file name : ");
      DestFileName = sobj.nextLine();

      fobjsrc = new File(SrcFileName);
      fobjdest = new File(DestFileName); 

      byte Buffer[] = new byte[1024];
      try
      {
         if(fobjdest.isFile() && fobjdest.exists())
         {
            System.out.println("File already exists");
         }
         else
         {
            fobjdest.createNewFile();
            System.out.println("File " +DestFileName+ " created successfully.");
         }
         
         fiobj = new FileInputStream(fobjsrc);
         foobj = new FileOutputStream(fobjdest);

         if(fobjsrc.isFile() && fobjsrc.exists())
         {
            while ((iRet = fiobj.read(Buffer)) != -1) 
            {
               foobj.write(Buffer,0,iRet);  
            }
            foobj.close();
            fiobj.close();
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