#include<stdio.h>
#pragma pack(1)

struct node
{
   int data;            //4 byte
   struct node *next;   //8 byte
};

int main()
{
   struct node obj;
   
   printf("%d\n", sizeof(obj));     //12 byte due to #pragma pack
   //4(int)  +  4(padding)  = 12byte

   return 0;
}
