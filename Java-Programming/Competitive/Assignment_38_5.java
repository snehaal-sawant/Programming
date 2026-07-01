import java.util.*;

class ToggleBits 
{
   long ToggleBitRange(long iNo, int iStart, int iEnd)
   {
      int length = iEnd - iStart + 1;
      long iMask = (1L << length) - 1;
      iMask <<= iStart - 1;
     
      long iResult = iNo ^ iMask;
      
      return iResult;
   }
}
class Assignment_38_5
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      int iLocation1 = 0, iLocation2 = 0;
      long lRet = 0;
      
      System.out.println("Enter the number : ");
      long iValue1 = sobj.nextLong();

      System.out.println("Enter Start position : ");
      iLocation1 = sobj.nextInt();

      System.out.println("Enter End position : ");
      iLocation2 = sobj.nextInt();

      ToggleBits tobj = new ToggleBits();

      lRet = tobj.ToggleBitRange(iValue1, iLocation1, iLocation2);

      System.out.println("Result : " + lRet);
      
      sobj.close();
   }
}