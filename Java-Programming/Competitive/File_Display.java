//Write java program to accept file name from user and open that file and
//display the contents on screen.

import java.io.*;
import java.util.Scanner;

public class File_Display
{
    public static void main(String args[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        byte Buffer[] = new byte[1024];
        int iRet = 0;

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
        FileInputStream fiobj = null;

        try
        {
            if (fobj.exists() && fobj.isFile())
            {
               fiobj = new FileInputStream(fobj);
               System.out.println("File opened successfully.");
               System.out.println("File contents : ");

               while ((iRet = fiobj.read(Buffer)) != -1)
               {
                  //foobj.write(Buffer,0,iRet);           // This is to write the data in te dest file which is in foobj object
                  System.out.println(new String(Buffer, 0, iRet));
               }
            }
            else
            {
                System.out.println("There is no such file.");
            }

        }
        catch(FileNotFoundException e)
        {
            System.out.println("Unable to open file.");
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }

        sobj.close();
    }
}