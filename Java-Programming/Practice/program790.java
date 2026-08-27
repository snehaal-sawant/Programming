import java.util.*;

class Matrix
{
   public int Arr[][];
   public Matrix(int iRow, int iCol)
   {
      System.out.println("Inside Constructor");
      Arr = new int[iRow][iCol];
   }
   protected void finalize()
   {
      System.out.println("Inside finalize method");
      Arr = null;
      System.gc();
   }
}

class program790
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      int iRow = 0, iCol = 0;

      System.out.println("Enter number of rows : ");
      iRow = sobj.nextInt();
      
      System.out.println("Enter number of cols : ");
      iCol = sobj.nextInt();

      Matrix mobj = new Matrix(iRow,iCol);

      // System.out.println("Enter the elements of matrix : ");

      // for(int i = 0; i < iRow; i++)
      // {
      //    for(int j = 0; j < iCol; j++)
      //    {
      //       Arr[i][j] = sobj.nextInt();
      //    }
      // }

      // System.out.println("The elements of matrix are : ");

      // for(int i = 0; i < iRow; i++)
      // {
      //    for(int j = 0; j < iCol; j++)
      //    {
      //       System.out.print(Arr[i][j]+"\t");
      //    }
      //    System.out.println();
      // }
      
      sobj.close();
   }  
}
