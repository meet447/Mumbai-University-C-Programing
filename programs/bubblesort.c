#include<stdio.h>
#include<conio.h>

void main()
{
    int i, a[10], p, temp;
    
    printf("Enter elements in array:\n");
    
    for (i=0; i<10; i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nYou entered:\n"); 
    
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    for(p=1; p<=9; p++)
    {
        for (i=0; i<=8; i++)
        {
            if (a[i] > a[i+1])
            {
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
    }
    printf("\nAfter sorting:\n");
    
    for(i=0; i<10; i++)
    {
        printf("%d ", a[i]);
    }
    getch();
}
