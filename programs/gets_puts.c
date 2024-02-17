#include <stdio.h>

void main()
{
 char ch1[] = "Hello";
 char ch2[6], ch3[6];
 
 puts(ch1);
 
 printf ("Enter a second string: ");
 gets(ch2);
 
 puts(ch2);
 
 printf ("Enter a third string: ");
 scanf ("%s", ch3);
 
 printf ("You entered: %s", ch3);
} 