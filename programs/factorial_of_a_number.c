#include <stdio.h>

void main() {
    int fact = 1, number, i;

    printf("Enter a number: ");
    scanf("%d", &number);  // Corrected the address of the variable

    for (i = 1; i <= number; i++) {
        fact = fact * i;
    }

    printf("Factorial: %d\n", fact);
}
