import java.util.*;

class OnBit 
{
   long ToggleBit(long iNo)
   {
      long iMask = 0x1;
      long iResult = 0;

      iMask = 0xF000000F;
      
      iResult = iNo ^ iMask;

      return iResult;
   }
}

class Assignment_37_5
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      long iRet = 0;

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      OnBit tBit = new OnBit();

      iRet = tBit.ToggleBit(iValue);

      System.err.println("The updated number is :"+iRet);

      sobj.close();
   }
}