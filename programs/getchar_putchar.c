#include <stdio.h>

void main()
{
 char ch1 = '@', ch2, ch3;
 
 putchar(ch1);
 
 printf ("\nEnter a character: ");
 
 ch2 = getchar();
 
 putchar(ch2);
 
 printf ("\nEnter another character: ");
 scanf (" %c", &ch3);
 
 printf ("You entered: %c\n", ch3);
} 