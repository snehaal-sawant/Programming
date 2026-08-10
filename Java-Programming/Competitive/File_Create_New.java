//Write java program to accept file name from user and create new file of
//that name if it is not existing.

import java.io.*;
import java.util.Scanner;

public class File_Create_New
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);

        try
        {
            if (fobj.exists() && fobj.isFile())
            {
                System.out.println("File already exists");
            }
            else
            {
                fobj.createNewFile();
                System.out.println("File " +FileName+ " created successfully.");
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