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
final class Searching extends ArrayX 
{
   public Searching(int iSize)
   {
      super(iSize);
   }

   public boolean LinearSearch(int iNo)
   {
      int i = 0;
      boolean bFlag = false;

      for(i = 0; i < super.iSize; i++)
      {
         if (Arr[i] == iNo)
         {
            bFlag = true;
            break;   
         }
      }
      return bFlag;
   }
   public boolean BidirectionalSearch(int iNo)  //This finction added
   {
      int iStart = 0, iEnd = 0;
      boolean bFlag = false;

      iEnd = super.iSize-1;

      while(iStart <= iEnd)
      {
         if(Arr[iStart] == iNo || iEnd == iNo)
         {
            bFlag = true;
            break;
         }
         iStart++;
         iEnd--;
      }
      return bFlag;
   }
}


class program875
{
   public static void main(String[] args) throws Exception
   {
      Searching sobj = new Searching(5);

      sobj.Accept();
      sobj.Display();

      if(sobj.BidirectionalSearch(3))
      {
         System.out.println( "Element is present");
      }
      else
      {
         System.out.println( "Element is not present");
      }

   }  
}
