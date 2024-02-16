#include <stdio.h>

int main() {
    int no1, no2, r, originalNo1, originalNo2;

    printf("Enter two numbers: ");
    scanf("%d%d", &no1, &no2);

    originalNo1 = no1;
    originalNo2 = no2;

    while (no2 != 0) {
        r = no1 % no2;
        no1 = no2;
        no2 = r;
    }

    // Calculate LCM
    int lcm = (originalNo1 * originalNo2) / no1;

    printf("LCM = %d\n", lcm);

    return 0;
}
