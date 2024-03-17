#include<stdio.h>
#include<conio.h>

void gross_salary(struct emp);

struct emp
{
    char name[20];
    float b_s;
    float d_a;
    float hr_a;
}e1;

void main()
{
    printf("Enter Name of Employee: ");
    gets(e1.name);
    
    printf("Enter Basic Salary of employee: ");
    scanf("%f", &e1.b_s);
    
    printf("Enter Dearness allowance of employee: ");
    scanf("%f", &e1.d_a);
    
    printf("Enter Housing rent allowance of employee: ");
    scanf("%f", &e1.hr_a);
    
    gross_salary(e1);
    
    getch();
}

void gross_salary(struct emp e2)
{
    float dearness_allow, housingrent_allow, total_salary;
    
    dearness_allow = (e2.b_s * e2.d_a) / 100;
    
    housingrent_allow = (e2.b_s * e2.hr_a) / 100;
    
    total_salary = e2.b_s + dearness_allow + housingrent_allow;
    
    printf("\n-----SALARY DETAILS-----\n");
    
    printf("Name: %s \n", e2.name);
    printf("Dearness allowance: %f \n", dearness_allow);
    printf("Housing Rent allowance: %f \n", housingrent_allow);
    printf("Total Salary: %0.3f \n", total_salary);
}
