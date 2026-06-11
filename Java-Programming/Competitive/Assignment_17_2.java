class Logic
{
   void checkPalindrome(int num)
   {
      int iDigit = 0, iRev = 0, iTemp = num;
      while(num != 0)
      {
         iDigit = num % 10;
         iRev = (iRev * 10) + iDigit;
         num = num / 10;
      }
      if(iTemp == iRev)
      {
         System.out.println("Number is palindrome");
      }
      else
      {
         System.out.println("Number is not palindrome");
      }     
   }
}
class Assignment_17_2
{
   public static void main(String A[])
   {
      Logic obj = new Logic();
      obj.checkPalindrome(121);
   }
}