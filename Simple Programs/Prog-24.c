/* 24. Swap two values */
#include <stdio.h>
int main() {
    double a, b, temp;
    printf("Enter two values: ");
    if (scanf("%lf %lf", &a, &b)!=2) return 0;
    printf("Before swap: a=%.6g, b=%.6g\n", a, b);
    temp = a; a = b; b = temp;
    printf("After swap: a=%.6g, b=%.6g\n", a, b);
    return 0;
}
