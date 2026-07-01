import java.util.*;

class CheckBit 
{
   boolean ChkBit(long iNo, long iPos)
   {
      if(iPos < 1 || iPos > 32)
      {
         System.out.println ("Invalid bit position\n");
         return false;
      }
      
      long iMask = 0x1;
      long iResult = 0;

      iMask = iMask << (iPos - 1);

      iResult = iNo & iMask;
      if (iResult == iMask)
      {
         return true;        
      }
      else
      {
         return false;
      }
   }
}

class Assignment_37_1
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      boolean bret = false;

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      System.out.println("Enter the position : ");
      long iLocation = sobj.nextLong();

      CheckBit cobj = new CheckBit();

      bret = cobj.ChkBit(iValue, iLocation);

      if (bret) 
      {
         System.out.println("The bit is ON");
      }
      else
      {
         System.out.println("The bit is OFF");
      }

      sobj.close();
   }
}