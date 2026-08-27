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
         if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
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

      Arrays.sort(Arr);
      System.out.println("Sorted Array is : ");   
      for (int arr : Arr) 
      {
         System.out.println(arr);   
      }

      iStart = 0;
      iEnd = iSize - 1;

      if(iNo < iStart || iNo > iEnd)         // This works only if the array is sorted in increasing order
      {
         return false;
      } 

      while(iStart <= iEnd)
      {
         iMid = iStart + ((iEnd - iStart) / 2);
         if (Arr[iMid] == iNo || Arr[iStart] == iNo || Arr[iEnd] == iNo)
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


class program884
{
   public static void main(String[] args)
   {
      Scanner sobj = new Scanner(System.in);

      System.out.println("Enter the number of elements : ");
      int iSize = sobj.nextInt();

      Searching srobj = new Searching(iSize);
      srobj.Accept();
      
      srobj.Display();
      
      System.out.println("Enter the element you want to search : ");
      int iNo = sobj.nextInt();

      boolean bRet = false;

      bRet = srobj.BinarySearch(iNo);

      if(bRet == true)
      {
         System.out.println("Element is present in the array");
      }
      else
      {
         System.out.println("Element is not present in the array");
      }

      srobj = null;
      System.gc();

      sobj.close();
   }  
}
