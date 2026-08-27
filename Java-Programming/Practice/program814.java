import java.io.*;

class program814
{
   public static void main(String[] args) throws Exception
   {
      int x = 0, y = 0;
      int iPower = 1;
     
      BufferedReader bobj = new BufferedReader(new InputStreamReader(System.in));

      System.out.println(" Enter Number as a base: ");
      x = Integer.parseInt(bobj.readLine());

      System.out.println(" Enter Number as a power: ");
      y = Integer.parseInt(bobj.readLine());

      iPower = (int)Math.pow(x,y);        //Inbuilt function Math.pow to calculate 5^3 = 5*5*5 

      System.out.println(iPower);
   }  
}
