#include<stdio.h>
#include<conio.h>

void main() {
    int number, original, reversed = 0;

    clrscr();

    printf("Enter an integer: ");
    scanf("%d", &number);

    original = number;

    while (number > 0) {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }

    if (original == reversed)
        printf("The entered integer is a palindrome\n");
    else
        printf("The entered integer is not a palindrome\n");

    getch();
}
