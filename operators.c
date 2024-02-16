#include <stdio.h>

void main()
{
 int a, b, c;
 float d;
 printf ("Enter a number a:");
 scanf ("%d",&a);
 printf ("Enter a number b:");
 scanf ("%d",&b);
 c = a + b;
 printf ("Sum is: %d\n",c);
 c = a - b;
 printf ("Difference is: %d\n",c);
 c = a * b;
 printf ("Product is: %d\n",c);
 c = a / b;
 printf ("Quotient is: %d\n",c);
 c = a % b;
 printf ("Remainder is: %d\n",c);
} 