#include<stdio.h>
#include<conio.h>

int main() {
    int number, sum = 0, digit;

    clrscr();

    // Input the number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Calculate the sum of digits
    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Display the sum
    printf("Sum of digits: %d\n", sum);

    getch();
    return 0;
}
