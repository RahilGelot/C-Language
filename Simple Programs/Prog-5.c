/* 5. Add, multiply, subtract and divide two numbers */
#include <stdio.h>
int main() {
    double a, b;
    printf("Enter the first number: ");
    scanf("%lf", &a);

    printf("Enter the second number: ");
    scanf("%lf", &b);

    printf("Sum = %.6g\n", a + b);
    printf("Difference = %.6g\n", a - b);
    printf("Product = %.6g\n", a * b);
    if (b==0) printf("Quotient = undefined (division by zero)\n");
    else printf("Quotient = %.6g\n", a / b);
    return 0;
}
