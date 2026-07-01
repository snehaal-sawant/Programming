import java.util.*;

class CheckBit 
{
   void ChkBit(int iNo)
   {
      int iMask1 = 0x1;
      int iMask2 = 0x1;
      int iMask3 = 0x1;
      int iMask4 = 0x1;
      int iResult = 0;

      iMask1 = iMask1 << 6;
      iMask2 = iMask2 << 14;
      iMask3 = iMask3 << 20;
      iMask4 = iMask4 << 27;

      iResult = iNo & iMask1;
      if (iResult == iMask1)
      {
         System.out.println("7th bit is ON");    
      }
      else
      {
         System.out.println("7th bit is OFF");
      }

      iResult = iNo & iMask2;
      if (iResult == iMask2)
      {
         System.out.println("15th bit is ON");        
      }
      else
      {
         System.out.println("15th bit is OFF");         
      }

      iResult = iNo & iMask3;
      if (iResult == iMask3)
      {
         System.out.println("21st bit is ON");         
      }
      else
      {
         System.out.println("21st bit is OFF");         
      }

      iResult = iNo & iMask4;
      if (iResult == iMask4)
      {
         System.out.println("28th bit is ON");       
      }
      else
      {
         System.out.println("28th bit is OFF");         
      }
   }
}

class Assignment_35_3
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