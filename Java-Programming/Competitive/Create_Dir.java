// Write java program to accept directory name from user and create that
// directory

import java.io.*;
import java.util.Scanner;

public class Create_Dir
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
        try
        {
            if(fobj.exists() && fobj.isDirectory())
            {
                System.out.println("Directory already exists.");
            }
            else
            {
                if (fobj.mkdir())
                {
                    System.out.println("Directory created successfully");    
                }
                else
                {
                    System.out.println("Unable to create Directory");
                }
            }
        }
        
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }

        sobj.close();
    }
}