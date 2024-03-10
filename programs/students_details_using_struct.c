#include<stdio.h>

struct address
{
    int flat_no;
    char bldg_name[20];
    char area[20];
    char city[20];
};


struct student
{
    char name[20];
    int roll_no;
    float pointer;
    struct address res_add;
}s1;

void main()
{
    printf("Enter Name: ");
    gets(s1.name);
    
    printf("Enter Roll No: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter Pointer: ");
    scanf("%f", &s1.pointer);
    
    printf("Enter Building Name: ");
    scanf("%s", s1.res_add.bldg_name);
    
    printf("Enter Flat No: ");
    scanf("%d", &s1.res_add.flat_no);
    
    printf("Enter Area: ");
    scanf("%s", s1.res_add.area);
    
    printf("Enter City: ");
    scanf("%s", s1.res_add.city);
    
    printf("\n")
    
    printf("\n------DETAILS------\n");
    
    printf("\nName: %s \n", s1.name);
    printf("\nRoll No: %d \n", s1.roll_no);
    printf("\nPointer: %f \n", s1.pointer);
    printf("\nFlat No: %d \n", s1.res_add.flat_no);
    printf("\nBuilding Name: %s \n", s1.res_add.bldg_name);
    printf("\nArea: %s \n", s1.res_add.area);
    printf("\nCity: %s \n", s1.res_add.city);
}
