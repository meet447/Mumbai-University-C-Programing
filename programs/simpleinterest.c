#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Input principal amount, interest rate, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate (in percentage): ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the computed simple interest
    printf("Simple Interest: %.2f\n", simpleInterest);

    return 0;
}
