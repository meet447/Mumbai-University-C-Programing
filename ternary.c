#include <stdio.h>
void main()
{
 float num1, num2, num3, max_num;

 printf("Enter the first number: ");
 scanf("%f", &num1);

 printf("Enter the second number: ");
 scanf("%f", &num2);

 printf("Enter the third number: ");
 scanf("%f", &num3);

 max_num = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ?
num2 : num3);

 printf("The maximum number is: %f\n", max_num);
}