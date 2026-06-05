import java.util.Scanner;

class NumberX
{
   public void DisplayFactors(int iNo)
   {
      int iCnt = 0;

      for(iCnt = 1; iCnt < iNo; iCnt++)
      {
         if ((iNo % iCnt) == 0)
         {
            System.out.println(iCnt);
         }
      }
   }
}

class program46
{
   public static void main(String A[])
   {
      int iValue = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number to find factors : ");
      iValue = sobj.nextInt();
      
      NumberX nobj = new NumberX();
      nobj.DisplayFactors(iValue);

      sobj.close();
   }
}

// Time Complexity : O(N)
// Where N >= 0
