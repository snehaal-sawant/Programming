import java.util.*;

class OnBit 
{
   long ChangeBit(long iNo)
   {
      long iMask1 = 0x1;
      long iMask2 = 0x1;
      long iMask3 = 0x1;
      long iMask4 = 0x1;
      long iMask = 0x1;
      long iResult = 0;

      iMask1 = iMask1 << 1;
      iMask2 = iMask2 << 2;
      iMask3 = iMask3 << 3;
      
      iMask = iMask1 | iMask2 | iMask3 | iMask4;

      iResult = iNo | iMask;

      return iResult;
   }
}

class Assignment_36_5
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      long iRet = 0;

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      OnBit cobj = new OnBit();

      iRet = cobj.ChangeBit(iValue);

      System.out.println("Updated number is : "+iRet);

      sobj.close();
   }
}