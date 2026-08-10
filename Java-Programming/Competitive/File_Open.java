//Write java program to accept file name from user and open that file.

import java.io.*;
import java.util.Scanner;

public class File_Open
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
        FileInputStream fiobj = null;
        try
        {
            if(fobj.exists() && fobj.isFile())
            {
                fiobj = new FileInputStream(fobj);
            
                System.out.println("File opened successfully.");

                fiobj.close();
            }
            else
            {
                System.out.println("File doesn't exist");
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