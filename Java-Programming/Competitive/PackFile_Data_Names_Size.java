// Write java program to accept directory name from user and write data
// of all files along with its name into one newly created file named as
// “Marvellous.txt”

import java.io.*;
import java.util.Scanner;

public class PackFile_Data_Names_Size
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter file name: ");
        String FileName = sobj.nextLine();

        File fobj = new File(FileName);
        int iRet = 0;

        byte Buffer[] = new byte[100];

        String PackFileName = "Marvellous.txt";
        
        String Header = null;
        
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
                        FileInputStream fiobj = new FileInputStream(fArr[i]);

                        Header = "----------------------------------------\nFile Name : "
                                 + fArr[i].getName() + "\nFile Size  : " + fArr[i].length() + 
                                 "\n----------------------------------------\n";
                        byte PackBuffer[] = Header.getBytes();
                        foobj.write(PackBuffer);
                        foobj.write('\n');
                        while ((iRet = fiobj.read(Buffer)) != -1) 
                        {
                            foobj.write(Buffer,0,iRet);
                        }
                        foobj.write('\n');
                        fiobj.close();
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
