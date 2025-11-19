/* 11. Convert grams into kg */
#include <stdio.h>
int main() {
    double grams;
    printf("Enter grams: ");
    if (scanf("%lf", &grams)!=1) return 0;
    printf("%.6g g = %.6g kg\n", grams, grams / 1000.0);
    return 0;
}
