import java.util.*;

class Matrix
{
   protected int Arr[][];       
   protected int iRow;          
   protected int iCol;        

   public Matrix(int iRow, int iCol)
   {
      System.out.println("Inside Constructor");

      this.iRow = iRow;
      this.iCol = iCol;

      Arr = new int[iRow][iCol];
   }

   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the elements of matrix : ");

      for(int i = 0; i < iRow; i++)
      {
         for(int j = 0; j < iCol; j++)
         {
            Arr[i][j] = sobj.nextInt();
         }
      }
      sobj.close();
   }

   public void Display()
   {
      System.out.println("The elements of matrix are : ");

      for(int i = 0; i < iRow; i++)
      {
         for(int j = 0; j < iCol; j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
         System.out.println();
      }
   }
}


class MatrixLB extends Matrix 
{
   public MatrixLB(int iRow, int iCol)
   {
      super(iRow, iCol);
   }

   public int SummationAll()
   {
      int iSum = 0;
      for(int i = 0; i < iRow; i++)
      {
         for(int j = 0; j < iCol; j++)
         {
            iSum = iSum + Arr[i][j];
         }
      }

      return iSum;
   }
   public void SummationRow()
   {
      int iSum = 0;
      for(int i = 0; i < iRow; i++)
      {
         for(int j = 0; j < iCol; j++)
         {
            iSum = iSum + Arr[i][j];
         }
         System.out.println("Sum of row is : "+iSum);
         iSum = 0;
      }
   }

   public int MaximumAll()  //799
   {
      int iMax = Arr[0][0];

      for(int i = 0; i < iRow; i++)
      {
         for(int j = 0; j < iCol; j++)
         {
            if(Arr[i][j] > iMax)
            {
               iMax = Arr[i][j];
            }
         }
      }
      return iMax;
   }

   public int MinimumAll()
   {
      int iMin = Arr[0][0];

      for(int i = 0; i < iRow; i++)
      {
         for(int j = 0; j < iCol; j++)
         {
            if(Arr[i][j] < iMin)
            {
               iMin = Arr[i][j];
            }
         }
      }
      return iMin;
   }

}

class program800
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      int iRow = 0, iCol = 0, iRet = 0;

      System.out.println("Enter number of rows : ");
      iRow = sobj.nextInt();
      
      System.out.println("Enter number of cols : ");
      iCol = sobj.nextInt();

      MatrixLB mobj = new MatrixLB(iRow,iCol);
      
      mobj.Accept();
      mobj.Display();
      iRet = mobj.SummationAll();
      System.out.println("Summation of all elements is : "+iRet);

      mobj.SummationRow();

      iRet = mobj.MaximumAll();
      System.out.println("Maximum number is : "+iRet);

      iRet = mobj.MinimumAll();
      System.out.println("Minimum number is : "+iRet);

      mobj = null;
      System.gc();
      
      sobj.close();
   }  
}
