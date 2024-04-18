#include<stdio.h>

void main ()
{
  int no = 153, digit, sum = 0;
  int org=no;
  
  // 153 = 1^3 + 5^3 + 3^3
  
  while(no!=0)
  {
    digit = no % 10;
    no = no / 10;
    sum = sum + (digit * digit * digit);
  }
  
  if(org == sum)
  {
      printf("ARMSTRONG");
  }
  else
  {
      printf("NOOOO ARMSTRONG");
  }
  
}
