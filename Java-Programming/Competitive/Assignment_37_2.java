import java.util.*;

class OffBit 
{
   long ChangeBit(long iNo, long iPos)
   {
      if(iPos < 1 || iPos > 32)
      {
         System.out.println ("Invalid bit position\n");
         return iNo;
      }

      long iMask = 0x1;
      long iMask1 = 0x1;
      long iResult = 0;

      iMask = iMask << (iPos - 1);
      iMask1 = ~iMask;
      
      iResult = iNo & iMask1;

      return iResult;
   }
}

class Assignment_37_2
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      long iRet = 0;

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      System.out.println("Enter the position : ");
      long iLocation = sobj.nextLong();

      OffBit fBit = new OffBit();

      iRet = fBit.ChangeBit(iValue, iLocation);

      System.err.println("The updated number is :"+iRet);

      sobj.close();
   }
}