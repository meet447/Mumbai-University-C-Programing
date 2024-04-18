#include<stdio.h>

void main ()
{
   int a = 1011, b = 30200, c = 9000;
   
   int max = a;
   
   if(b > a)
   {
       max = b;
   }
   if(c > b)
   {
       max = c;
   }
   
   printf("max = %d", max);
}
