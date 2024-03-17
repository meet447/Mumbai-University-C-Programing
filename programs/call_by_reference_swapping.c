#include <stdio.h>
#include <conio.h>

void swap(int*, int*);

void main(){
   int a, b;
   
   printf("\n Enter value for variables: ");
   scanf("%d%d", &a, &b);
   
   printf("\n before swapping the value a=%d and b=%d \n", a,b);
   swap(&a,&b);
   printf("\n After swapping the value a=%d and b=%d", a,b);
   
   getch();
}

void swap(int *p1, int *p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
