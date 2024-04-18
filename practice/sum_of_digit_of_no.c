#include<stdio.h>

void main ()
{
  int no = 12931, digit, sum = 0;
  
  while(no!=0)
  {
    digit = no % 10;
    no = no / 10;
    printf("%d \n", digit);
    sum = sum + digit;
  }
  
  printf("SUM=%d", sum);
}
