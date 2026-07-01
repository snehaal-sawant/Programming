import java.util.*;

class CheckBits 
{
   boolean ChkBits(long iNo, int iPos1, int iPos2)
   {
      long iMask1 = 0x1;
      long iMask2 = 0x1;
      long iMask3 = 0x1;
      long iResult = 0;

      iMask1 = iMask1 << (iPos1 - 1);
      iMask2 = iMask2 << (iPos2 - 1);
      iMask3 = iMask1 | iMask2;

      iResult = iNo & iMask3;
      if (iResult != 0)
      {
         return true;       
      }
      else
      {
         return false;
      }

   }
}
class Assignment_38_4
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      int iLocation1 = 0, iLocation2 = 0;
      boolean bRet = false;
      
      System.out.println("Enter the number : ");
      long iValue1 = sobj.nextLong();

      System.out.println("Enter 1st position : ");
      iLocation1 = sobj.nextInt();

      System.out.println("Enter 2nd position : ");
      iLocation2 = sobj.nextInt();

      CheckBits cobj = new CheckBits();

      bRet = cobj.ChkBits(iValue1, iLocation1, iLocation2);

      if (bRet)
      {
         System.out.println("True");
      }
      else
      {
         System.out.println("False");
      }
      
      sobj.close();
   }
}