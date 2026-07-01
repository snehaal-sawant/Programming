import java.util.*;

class OffBit 
{
   long ChangeBit(long iNo)
   {
      long iMask = 0x1;
      long iMask1 = 0x1;
      long iResult = 0;

      iMask = iMask << 6;
      iMask1 = ~iMask;
      
      iResult = iNo & iMask1;

      return iResult;
   }
}

class Assignment_36_1
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      long iRet = 0;

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      OffBit cobj = new OffBit();

      iRet = cobj.ChangeBit(iValue);

      System.out.println("Updated number is : "+iRet);

      sobj.close();
   }
}