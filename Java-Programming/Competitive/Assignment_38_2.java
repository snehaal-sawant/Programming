import java.util.*;

class CommonBits 
{
   void DisplayBits(long iNo1, long iNo2)
   {
      long iCnt = 0, iAns1 = 0, iAns2 = 0;

      for(iCnt = 32; iCnt >= 0; iCnt--)
      {
         iAns1 = (iNo1 >> iCnt) & 1;
         iAns2 = (iNo2 >> iCnt) & 1;
         if(iAns1 == iAns2)
         {
            System.out.println("Position " + iCnt + " -> " + iAns1);
         }  
      }
   }
}
class Assignment_38_2
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter 1st number : ");
      long iValue1 = sobj.nextLong();

      System.out.println("Enter 2nd number : ");
      long iValue2 = sobj.nextLong();

      CommonBits cobj = new CommonBits();

      cobj.DisplayBits(iValue1, iValue2);

      sobj.close();
   }
}