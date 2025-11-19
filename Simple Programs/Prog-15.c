/* 15. Convert Fahrenheit into Celsius */
#include <stdio.h>
int main() {
    double f;
    printf("Enter Fahrenheit: ");
    if (scanf("%lf", &f)!=1) return 0;
    double c = (5.0/9.0) * (f - 32.0);
    printf("%.6g F = %.6g C\n", f, c);
    return 0;
}
