import java.util.*;

class CheckBit 
{
   Boolean ChkBit(int iNo)
   {
      int iMask = 0x1;

      iMask = iMask << 14;

      iNo = iNo & iMask;
      if (iNo == iMask)
      {
         return true;         
      }
      return false;
   }
}

class Assignment_35_1
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      int iValue = 0;
      boolean bRet = false;

      System.out.println("Enter the number : ");
      iValue = sobj.nextInt();

      CheckBit cobj = new CheckBit();

      bRet = cobj.ChkBit(iValue);

      if (bRet)
      {
         System.out.println("15th bit is ON");   
      }
      else
      {
         System.out.println("15th bit is OFF");   
      }
      sobj.close();
   }
}