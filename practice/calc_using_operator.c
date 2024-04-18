#include<stdio.h>

void main ()
{
   char opt; 
   
   int a, b, sum; 
   
   a = 1;
   b = 2;
   
   printf("Enter a operator: ");
   scanf("%c", &opt);
   
   switch(opt)
   {
      case '+' : sum = a + b;
                 break;
                  
      case '-' : sum = a - b;
                 break;
                  
      default : printf("INVALID OPT");
   }
   
   printf("%d", sum);
}
