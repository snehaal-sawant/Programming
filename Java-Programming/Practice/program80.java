import java.util.*;

class DigitX
{
   public void DisplayDigit(int iNo)
   {
      while (iNo != 0) 
      {
         System.out.println(iNo % 10);    //iDigit Variable is removed
         iNo = iNo / 10;
      }
   }
}

class program80
{
   public static void main(String A[])
   {
      Scanner sobj = new Scanner(System.in);
      DigitX dobj = new DigitX();

      int iValue = 0;

      System.out.println("Enter Number : ");
      iValue = sobj.nextInt();
      
      dobj.DisplayDigit(iValue);

      sobj.close();
   }
}
