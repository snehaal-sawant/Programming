import java.util.*;

class ToggleBit 
{
   long ChangeBit(long iNo)
   {
      long iMask1 = 0x1;
      long iMask2 = 0x1;
      long iMask = 0x1;
      long iResult = 0;

      iMask1 = iMask1 << 6;
      iMask2 = iMask2 << 9;

      iMask = iMask1 | iMask2;

      iResult = iNo ^ iMask;

      return iResult;
   }
}

class Assignment_36_4
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      long iRet = 0;

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      ToggleBit cobj = new ToggleBit();

      iRet = cobj.ChangeBit(iValue);

      System.out.println("Updated number is : "+iRet);

      sobj.close();
   }
}