/* 12. Convert kgs into grams */
#include <stdio.h>
void main() {
    double kg;
    printf("Enter kilograms: ");
    if (scanf("%lf", &kg)!=1) return 0;
    printf("%.6g kg = %.6g g\n", kg, kg * 1000.0);
    return ;
}
