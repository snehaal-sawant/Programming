import java.util.*;

class Matrix
{
   protected int Arr[][];       //Declared protected for inheritance
   protected int iRow;          //Declared protected
   protected int iCol;          //Declared protected

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
}

class program796
{
   public static void main(String[] args) 
   {
      Scanner sobj = new Scanner(System.in);

      int iRow = 0, iCol = 0;

      System.out.println("Enter number of rows : ");
      iRow = sobj.nextInt();
      
      System.out.println("Enter number of cols : ");
      iCol = sobj.nextInt();

      MatrixLB mobj = new MatrixLB(iRow,iCol);
      
      mobj.Accept();
      mobj.Display();

      mobj = null;
      System.gc();
      
      sobj.close();
   }  
}
