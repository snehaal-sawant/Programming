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

      int i = 0;
      for(i = 0; i < iSize; i++)
      {
         Arr[i] = sobj.nextInt();
      }
   }

   public void Display()
    {
        System.out.println("Elements of the array are : ");

        int b=0;
        
        System.out.print("index\t");

        for(b=0;b<this.iSize;b++)System.out.print(b+"\t");
        
        System.out.println();

        for(int i = 0; i < this.iSize; i++)
        {
            System.out.print("\t"+Arr[i]);
        }

        System.out.println();
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
   public boolean BidirectionalSearch(int iNo)
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

   public boolean CheckSorted()
   {
      boolean bFlag = true;

      for(int i = 0; i < iSize-1; i++)
      {
         if(Arr[i] > Arr[i+1])
         {
            bFlag = false;
            break;
         }
      }
      return bFlag;
   }

   public boolean BinarySearch(int iNo)           
   {
      int iStart = 0, iEnd = 0, iMid = 0;
      boolean bFlag = false;

      iStart = 0;
      iEnd = iSize - 1;

      if(CheckSorted() == false)       
      {
         return BidirectionalSearch(iNo);             //This is updated
      }

      while(iStart <= iEnd)
      {
         iMid = iStart + ((iEnd - iStart) / 2);
         if(Arr[iMid] == iNo  || iStart == iNo || iEnd == iNo)          
         {
            bFlag = true;
            break;
         }
         else if(iNo < Arr[iMid])
         {
            iEnd = iMid - 1;
         }
         else if(iNo > Arr[iMid])
         {
            iStart = iMid + 1;
         }
      }
      return bFlag;
   }
}

class program881
{
   public static void main(String[] args) throws Exception
   {
      Searching srobj = new Searching(5);

      srobj.Accept();
      srobj.Display();

   }  
}
