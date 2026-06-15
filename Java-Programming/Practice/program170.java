import java.util.*;
class Arrayx
{
   public int Arr[]; // reference to array
   public Arrayx(int iSize)
   {
      Arr = new int[iSize]; // memory allocation for array
   }
   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the elements : ");
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         Arr[iCnt] = sobj.nextInt();
      }
      sobj.close();
   }
   public void Display()
   {
      System.out.println("Elements of array are : ");
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         System.out.print(Arr[iCnt] + "\t");
      }
      System.out.println();
   }
   public int Summation()
   {
      int iSum = 0;
      for(int iCnt = 0; iCnt < Arr.length; iCnt++)
      {
         iSum = iSum + Arr[iCnt];
      }
      return iSum;
   }
}

public class program170
{
   public static void main(String A[]) 
   {
      int iRet = 0;
      Arrayx aobj = new Arrayx(5);
      aobj.Accept();
      aobj.Display();
      iRet = aobj.Summation();
      System.out.println("Summation of elements is : " + iRet);
   }
}