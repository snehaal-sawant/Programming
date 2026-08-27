import java.util.*;

class Matrix
{
   private int Arr[][];       //Declared private
   private int pRow;          //Declared private
   private int pCol;          //Declared private

   public Matrix(int iRow, int iCol)
   {
      System.out.println("Inside Constructor");

      this.pRow = iRow;
      this.pCol = iCol;

      Arr = new int[pRow][pCol];
   }
   protected void finalize()
   {
      System.out.println("Inside finalize method");
      Arr = null;             // It will delete only elements of array
      System.gc();            //It will free the memory of array
   }
   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);
      System.out.println("Enter the elements of matrix : ");

      for(int i = 0; i < pRow; i++)
      {
         for(int j = 0; j < pCol; j++)
         {
            Arr[i][j] = sobj.nextInt();
         }
      }
      sobj.close();
   }
   public void Display()
   {
      System.out.println("The elements of matrix are : ");

      for(int i = 0; i < pRow; i++)
      {
         for(int j = 0; j < pCol; j++)
         {
            System.out.print(Arr[i][j]+"\t");
         }
         System.out.println();
      }
   }
}

class program793
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
      
      mobj.Accept();
      mobj.Display();

      mobj = null;
      System.gc();
      
      sobj.close();
   }  
}
