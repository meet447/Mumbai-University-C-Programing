#include<stdio.h>

void main ()
{
  int no = 321, digit, rev = 0;
  
  while(no!=0)
  {
    digit = no % 10;
    no = no / 10;
    rev = rev * 10 + digit;
  }
  
   printf("reverse =%d", rev);

  
}
