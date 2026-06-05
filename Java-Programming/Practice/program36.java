import java.util.*;

class program36 
{
   public static void main(String A[])
   {
      String sName = null;
      int iAge = 0;
      float fMarks = 0.0f;

      Scanner sobj = new Scanner(System.in);
      
      System.out.println("Enter Your Name : ");
      sName = sobj.nextLine();
      
      System.out.println("Enter Your Age : ");
      iAge = sobj.nextInt();

      System.out.println("Enter Your Marks : ");
      fMarks = sobj.nextFloat();

      System.out.println("Name is : " +sName);
      System.out.println("Age is : " +iAge);
      System.out.println("Marks is : " +fMarks);

      sobj.close();
   }
}
