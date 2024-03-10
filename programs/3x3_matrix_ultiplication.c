#include <stdio.h>

void main() 
{
    int i, j, k, a[3][3], b[3][3], p[3][3];
    printf("Enter the elements of the first matrix:\n");
    for (i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter the elements of the Second matrix: \n");
    for (i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    
    printf("\n First Matrix: \n");
    for (i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf(" %d ", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n Second Matrix: \n");
    for (i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf(" %d ", b[i][j]);
        }
        printf("\n");
    }
    
    for(i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            p[i][j] = 0;
            for(k=0; k<=2; k++)
            {
                p[i][j] = p[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    
    printf("\n Resultant Matrix: \n");
    for (i=0; i<=2; i++)
    {
        for(j=0; j<=2; j++)
        {
            printf(" %d ", p[i][j]);
        }
        printf("\n");
    }
    getch();
}
