// Write java program to accept file name from user and check whether
// that file is regular file or not

import java.io.*;
import java.util.Scanner;

public class Regular_File
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
        try
        {
            if(fobj.exists() && fobj.isFile())
            {
                System.out.println("File is a regular file.");
            }
            else
            {
                System.out.println("File is not a regular file");
            }
            
        }
        
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }

        sobj.close();
    }
}