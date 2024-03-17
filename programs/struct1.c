#include <stdio.h>
#include <conio.h>

struct address
{
    int flat_no;
    char bldg_name[20];
    char city[20];
};

struct student
{
    char name[20];
    int roll_no;
    float ptr;
    struct address res_add;
}s1;

int main()
{
    printf("Enter Name: ");
    gets(s1.name);
    
    printf("Enter Roll No: ");
    scanf("%d", &s1.roll_no);
    
    printf("Enter Pointer: ");
    scanf("%f", &s1.ptr);
    
    printf("Enter Flat No: ");
    scanf("%d", &s1.res_add.flat_no);
    getchar();
    
    printf("Enter Building name: ");
    gets(s1.res_add.bldg_name);

    printf("Enter city: ");
    gets(s1.res_add.city);
    
    printf("\n ----DETAILS---- \n");
    printf("Name: %s \n",s1.name);
    printf("Roll No: %d \n",s1.roll_no);
    printf("Pointer: %f \n",s1.ptr);
    printf("Flat No: %d \n",s1.res_add.flat_no);
    printf("Building Name: %s \n",s1.res_add.bldg_name);
    printf("City: %s \n",s1.res_add.city);

    getch();
}
    
