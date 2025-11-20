/* power(a,b) using integer exponent (b >= 0) */
#include <stdio.h>

double power(double a, int b) {
    double res = 1.0;
    for (int i = 0; i < b; ++i) res *= a;
    return res;
}

int main(void) {
    double a; int b;
    printf("Enter base a and non-negative integer exponent b: ");
    if (scanf("%lf %d", &a, &b) != 2) return 0;
    if (b < 0) { printf("This function expects non-negative b.\n"); return 0; }
    printf("%.6g ^ %d = %.6g\n", a, b, power(a, b));
    return 0;
}
