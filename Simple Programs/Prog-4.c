/* 4. Divide two numbers */
#include <stdio.h>
void main() {
    double num1, num2, sum;

    printf("Enter the numerator: ");
    scanf("%lf", &num1);

    printf("Enter the denominator: ");
    scanf("%lf", &num2);

    if (num2 == 0) { printf("Error: division by zero\n"); return 0; }

    sum = num1 + num2;

    printf("Quotient = %.6g\n", num1 / num2);

    return ;
}

