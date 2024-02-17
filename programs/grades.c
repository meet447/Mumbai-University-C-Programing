#include<stdio.h>

void main() {
    float per_marks;
    printf("Enter the percentage marks: ");
    scanf("%f", &per_marks);

    if (per_marks < 40) {
        printf("FAIL");
    } else if (per_marks < 50) {
        printf("PASS CLASS");
    } else if (per_marks < 60) {
        printf("SECOND CLASS");
    } else if (per_marks < 70) {
        printf("FIRST CLASS");
    } else {
        printf("DISTINCTION");
    }
}
