#include <stdio.h>
 void main()
 {
 int no1, no2,r;
 printf ("enter the two numbers:" );
 scanf ("%d%d", &no1,&no2); 
 while(no2!=0)
 {
 r=no1%no2;
 no1=no2;

 no2=r;
 }
 printf ("GCD=%d",no1);
} 