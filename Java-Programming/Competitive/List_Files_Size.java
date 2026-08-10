// Write java program to accept directory name from user and display all
// names of files from that directory and size of each file on screen.

import java.io.*;
import java.util.Scanner;

public class List_Files_Size
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
        
        try
        {
            if(fobj.isDirectory() && fobj.isDirectory())
            {
                File[] fArr = fobj.listFiles();
                
                System.out.println("List of files in the directory is : ");
                for(int i = 0; i < fArr.length; i++)
                {
                    System.out.println("File Name : "+fArr[i].getName()); 
                    System.out.println("File Size : "+fArr[i].length());
                    System.out.println("--------------------------");
                }                
            }
            else
            {
                System.out.println("Directory doesn't exist");
            } 
        }
        catch(Exception e)
        {
            System.out.println("Error : " + e);
        }

        sobj.close();
    }
}