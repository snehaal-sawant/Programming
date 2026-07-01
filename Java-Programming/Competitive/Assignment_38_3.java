import java.util.*;

class CheckBits 
{
   boolean ChkBits(long iNo)
   {
      long iMask1 = 0x1;
      long iMask2 = 0x1;
      long iMask3 = 0x1;
      long iResult = 0;

      iMask1 = iMask1 << 8;
      iMask2 = iMask2 << 11;
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
class Assignment_38_3
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      boolean bRet = false;
      System.out.println("Enter the number : ");
      long iValue1 = sobj.nextLong();

      CheckBits cobj = new CheckBits();

      bRet = cobj.ChkBits(iValue1);

      if (bRet)
      {
         System.out.println("9th or 12th bit is On");
      }
      else
      {
         System.out.println("Both 9th and 12th bits are OFF.");
      }
      sobj.close();
   }
}