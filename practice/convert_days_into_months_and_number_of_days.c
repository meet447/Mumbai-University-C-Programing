#include<stdio.h>

void main ()
{
   int months, days ;
   printf("Enter days") ;
   
   scanf("%d", &days) ;
   
   months = days / 30 ;
   
   days = days % 30 ;
   
   printf("Months = %d Days = %d", months, days) ;
}
