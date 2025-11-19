/* 14. Convert Celsius into Fahrenheit */
#include <stdio.h>
int main() {
    double c;
    printf("Enter Celsius: ");
    if (scanf("%lf", &c)!=1) return 0;
    double f = (9.0/5.0) * c + 32.0;
    printf("%.6g C = %.6g F\n", c, f);
    return 0;
}
