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
    float ptr;
    struct address res_add;
}s1[3];

void main()
{
    int i;
    
    for(i=0; i<=2;i++)
    {
        printf("Enter Name: ");
        gets(s1[i].name);
        
        printf("Enter Roll No: ");
        scanf("%d", &s1[i].roll_no);
        
        printf("Enter Pointer: ");
        scanf("%f", &s1[i].ptr);
        
        printf("Enter Flat No: ");
        scanf("%d", &s1[i].res_add.flat_no);
        getchar();
        
        printf("Enter Building name: ");
        gets(s1[i].res_add.bldg_name);

        printf("Enter Area: ");
        gets(s1[i].res_add.area);
        
        printf("Enter City: ");
        gets(s1[i].res_add.city);
        
        printf("\n");
    }

    printf("\n----DETAILS----\n");
    
    for(i=0; i<=2;i++)
    {
        printf("Name: %s \n", s1[i].name);

        printf("Roll No: %d \n", s1[i].roll_no);

        printf("Pointer: %f \n", s1[i].ptr);

        printf("Flat No: %d \n", s1[i].res_add.flat_no);

        printf("Building name: %s \n", s1[i].res_add.bldg_name);

        printf("Area: %s \n", s1[i].res_add.area);

        printf("City: %s \n", s1[i].res_add.city);
        
        printf("\n");
    }
}
