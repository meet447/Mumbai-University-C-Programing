#include<stdio.h>
#include<conio.h>

struct student
{
   char name[20];
   int roll_no;
   float ptr;
}s1;

void main()
{
    printf("Enter Name: ");
    gets(s1.name);
    
    printf("Enter Roll No: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter Pointer: ");
    scanf("%f", &s1.ptr);
    
    printf("\n-----DETAILS-----\n"); 
    
    printf("Name: %s \n", s1.name);
    printf("Roll No: %d \n", s1.roll_no);
    printf("Pointer: %f \n", s1.ptr);

    getch();
}
