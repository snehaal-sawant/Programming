import java.util.*;

class DigitX
{
   public int SumEvenDigits(int iNo)
   {
      int iDigit = 0, iSum = 0;
      
      while (iNo != 0) 
      {
         iDigit = iNo % 10;
         if(iDigit % 2 == 0)
         {
            iSum = iSum + iDigit;
         }
         iNo = iNo / 10;
      }
      return iSum;
   }
}

class program90
{
   public static void main(String A[])
   {
      Scanner sobj = new Scanner(System.in);
      DigitX dobj = new DigitX();

      int iValue = 0, iRet = 0;

      System.out.println("Enter Number : ");
      iValue = sobj.nextInt();
      
      iRet = dobj.SumEvenDigits(iValue);

      System.out.println("Summation of even digits : "+iRet);

      sobj.close();
   }
}
