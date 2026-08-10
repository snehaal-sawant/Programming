//Write java program to accept file name from user and open that file in
//write mode and write some data at the end of file.

import java.io.*;
import java.util.Scanner;

public class File_Write
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
        FileOutputStream foobj = null;

        String Data = "Marvellous Infosystems ";
        byte Buffer[] = Data.getBytes();

        try
        {
            foobj = new FileOutputStream(fobj);
           
            if(fobj.exists() && fobj.isFile())
            {
                foobj.write(Buffer); 
                System.out.println("Data written to the file successfully");
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