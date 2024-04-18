#include <stdio.h>

int main() 
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    int i;
        
    int *ptr = arr; 
    
    for(i=0; i<size; i++)
    {
        sum = sum + *ptr + i;
    }
    
    printf("sum: %d", sum);
    
    return 0;
}
