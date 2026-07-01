import java.util.*;

class CheckBit 
{
   void ChkBit(long iNo)
   {
      long iMask1 = 0x1;
      long iMask2 = 0x1;
      long iResult = 0;

      iMask2 = iMask2 << 31;

      iResult = iNo & iMask1;
      if (iResult == iMask1)
      {
         System.out.println("1st bit is ON");        
      }
      else
      {
         System.out.println("1st bit is OFF");
      }

      iResult = iNo & iMask2;
      if (iResult == iMask2)
      {
         System.out.println("Last bit is ON");        
      }
      else
      {
         System.out.println("Last bit is OFF");         
      }
   }
}

class Assignment_35_5
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      CheckBit cobj = new CheckBit();

      cobj.ChkBit(iValue);

      sobj.close();
   }
}