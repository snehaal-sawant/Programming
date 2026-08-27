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

class program791
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

      mobj = null;
      System.gc();
      
      sobj.close();
   }  
}
