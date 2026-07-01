import java.util.*;

class CountX 
{
   long CountOne(long iNo)
   {
      long iMask = 0x1;
      long iCnt = 0, iCount = 0, iAns = 0;

      for(iCnt = 1; iCnt <= 32; iCnt++)
      {
         iAns = iNo & iMask;

         if (iMask == iAns)
         {
            iCount++;
            System.out.println(iCount);  
         }  
         iMask = iMask << 1;
      }
      
      return iCount;
   }
}

class Assignment_38_1
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);
      long iRet = 0;

      System.out.println("Enter the number : ");
      long iValue = sobj.nextLong();

      CountX tBit = new CountX();

      iRet = tBit.CountOne(iValue);

      System.err.println("Number of 1's are :"+iRet);

      sobj.close();
   }
}