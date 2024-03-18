#include<stdio.h>
#include<conio.h>

void str_cat(char[], char[]);

void main()
{
    char s1[20], s2[20]; 
    
    printf("Enter First String: ");
    gets(s1);
    
    printf("Enter Second String: ");
    scanf("%s", s2);

    printf("\n");
    
    str_cat(s1, s2);
    
    getch();
    
}


void str_cat(char s3[20], char s4[20])
{
    int i=0, j=0;

    while(s3[i]!='\0')
    {
        j = j + 1;
        i = i + 1;
    }
    

    i = 0;
    while(s4[i]!='\0')
    {
        s3[j] = s4[i];
        j = j + 1;
        i = i + 1;
    }
    s3[j] = '\0';
    

    printf("AFTER CONCATENATION: %s\n", s3);
    
}
