//Write java program to accept directory name from user and display all
//names of files from that directory.

import java.io.*;
import java.util.Scanner;

public class File_List_Directory
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
                File[] fArr = fobj.listFiles();
                
                System.out.println("List of files in the directory is : ");
                for(int i = 0; i < fArr.length; i++)
                {
                    System.out.println(fArr[i].getName());
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