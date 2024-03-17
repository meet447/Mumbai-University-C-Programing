#include<stdio.h>
#include<conio.h>

void main()
{
    char s1[20], s2[20]; 
    int i=0, j=0;
    
    printf("Enter First String: ");
    gets(s1);
    
    printf("Enter Second String: ");
    scanf("%s", s2);

    printf("\n");

    while(s1[i]!='\0')
    {
        j = j + 1;
        i = i + 1;
    }
    

    i = 0;
    while(s2[i]!='\0')
    {
        s1[j] = s2[i];
        j = j + 1;
        i = i + 1;
    }
    s1[j] = '\0';
    

    printf("AFTER CONCATENATION: %s\n", s1);
    
    getch();
}
