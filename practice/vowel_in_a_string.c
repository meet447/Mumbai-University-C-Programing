#include<stdio.h>

void main ()
{
   char a[20] = "hi my name is aeiou";
      
   int size, i , vowel=0;
   
   size = sizeof(a) / sizeof(a[0]); 
   
   for(i=0; i<size; i++)
   {
      if(a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E'|| a[i] == 'i' || a[i] == 'I' || a[i] == 'o' || a[i] == 'O'|| a[i] == 'u' || a[i] == 'U')

       {
           vowel++;
       }
   }   
   
   printf("%d", vowel);
}
