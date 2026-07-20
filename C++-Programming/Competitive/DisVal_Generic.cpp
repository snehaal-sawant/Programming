#include <iostream>
using namespace std;

template<class T>
void Display(T Value, int iSize)
{
   int i = 0;

   for(i = 0; i < iSize; i++)
   {
      cout<<Value<<"\t";
   }
   cout<<endl;
}

int main()
{
   Display('M', 5);
   Display(11, 7);
   Display(3.14, 4);
   Display(11.5f, 6);
   Display("Snehal", 4);
   return 0;
}
