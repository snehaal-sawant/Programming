import java.util.*;

class CheckBit 
{
   void ChkBit(int iNo)
   {
      int iMask1 = 0x1;
      int iMask2 = 0x1;
      int iResult = 0;

      iMask1 = iMask1 << 4;
      iMask2 = iMask2 << 7;

      iResult = iNo & iMask1;
      if (iResult == iMask1)
      {
         System.out.println("5th bit is ON");        
      }
      else
      {
         System.out.println("5th bit is OFF");
      }

      iResult = iNo & iMask2;
      if (iResult == iMask2)
      {
         System.out.println("8th bit is ON");;         
      }
      else
      {
         System.out.println("8th bit is OFF");;         
      }
   }
}

class Assignment_35_2
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      int iValue = 0;

      System.out.println("Enter the number : ");
      iValue = sobj.nextInt();

      CheckBit cobj = new CheckBit();

      cobj.ChkBit(iValue);

      sobj.close();
   }
}