import java.util.*;

interface GetterSetter
{
   void Accept();  
   void Display();  
}
class ArrayX implements GetterSetter
{
   protected int Arr[];
   protected int iSize;

   public ArrayX(int iSize)
   {
      this.iSize = iSize;
      Arr = new int[iSize];
   }

   public void Accept()
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the elements of array : ");

      for(int i = 0; i < iSize; i++)
      {
         Arr[i] = sobj.nextInt();
      }
      sobj.close();
   }

   public void Display()
   {
      System.out.println("Elements of array are : ");

      for(int i = 0; i < iSize; i++)
      {
         System.out.println(Arr[i]);
      }
   }
}

/**
 * Searching extends ArrayX
 */
class Searching extends ArrayX 
{
   public Searching(int iSize)
   {
      super(iSize);
   }
}


class program872
{
   public static void main(String[] args) throws Exception
   {
      Searching sobj = new Searching(5);

      sobj.Accept();
      sobj.Display();
   }  
}
