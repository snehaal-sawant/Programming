import java.util.Scanner;

class NumberX
{
   public void SumFactors(int iNo)
   {
      int iCnt = 0;
      int iSum = 0;

      for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
      {
         if ((iNo % iCnt) == 0)
         {
            iSum = iSum + iCnt;
         }
      }
      System.out.println("Summation of Factors : "+iSum);
   }
}

class program48
{
   public static void main(String A[])
   {
      int iValue = 0;
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter Number to find factors : ");
      iValue = sobj.nextInt();
      
      NumberX nobj = new NumberX();
      nobj.SumFactors(iValue);

      sobj.close();
   }
}

// Time Complexity : O(N/2)
// Where N >= 0
