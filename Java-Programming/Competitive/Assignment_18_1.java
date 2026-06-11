class Logic
{
   void checkPrime(int num)
   {
      int flag = 0;
      for(int i = 2; i <= num/2; i++)
      {
         if(num % i == 0)
         {
            flag = 1;
            break;
         }
      }

      if(flag == 0)
      {
         System.out.println("Number is prime");
      }
      else
      {
         System.out.println("Number is not prime");
      }
   }
}
class Assignment_18_1
{
public static void main(String args[])
   {
      Logic obj = new Logic();
      obj.checkPrime(12);
   }
}