// Write java program to accept directory name from user and write names
// of all files from that directory into one newly created file named as
// “Marvellous.txt”.

import java.io.*;
import java.util.Scanner;

public class PackFile_Names
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
    
        String PackFileName = "Marvellous.txt";
        
        try
        {
            if(fobj.exists() && fobj.isDirectory())
            {
                File[] fArr = fobj.listFiles();

                FileOutputStream foobj = new FileOutputStream(PackFileName);

                for(int i = 0; i < fArr.length; i++)
                {
                    if(fArr[i].isFile() && fArr[i].exists())
                    {
                        String Fname = fArr[i].getName();

                        byte PackBuffer[] = Fname.getBytes(); 

                        foobj.write(PackBuffer);
                        foobj.write('\n');
                        
                    }
                }                
                
                foobj.close();
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